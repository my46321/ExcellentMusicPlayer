#include "audiorecorder.h"
#include <QLayout>
#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QDebug>
#include<QEvent>
#include<QMouseEvent>

struct HEADER
{
 char RIFFNAME[4];
 unsigned long nRIFFLength;
 char WAVNAME[4];
 char FMTNAME[4];
 unsigned long nFMTLength;
 unsigned short nAudioFormat;
 unsigned short nChannleNumber;
 //unsigned short nSampleRate;
 unsigned long nSampleRate;
 unsigned long nBytesPerSecond;
 unsigned short nBytesPerSample;
 unsigned short    nBitsPerSample;
 char    DATANAME[4];
 unsigned long   nDataLength;
};

AudioRecorder::AudioRecorder(QDialog *parent)
    : QDialog(parent)
{
    this->setFixedSize(300,400);
    this->setStyleSheet("QDialog{border-image: url(:/image/radio_background.PNG);}");
    start = new QPushButton(tr("start"));
    start->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:White;}");

    stop = new QPushButton(tr("stop"));
    stop->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:Grey;}");
    play = new QPushButton(tr("play"));
    play->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:Grey;}");
    save = new QPushButton(tr("save"));
    save->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:Grey;}");
    stop->setDisabled(true);
    play->setDisabled(true);
    save->setDisabled(true);
    rect_layout=new QRect(10,200,280,180);
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    this->setWindowTitle("录音");
    audio_close=new QPushButton(this);
    audio_close->setStyleSheet("QPushButton{border-image: url(:/image/close24.png);}"
                               "QPushButton:hover{border-image: url(:/image/close24_2.png);}");
    audio_close->setGeometry(285,0,15,15);
    audio_mini=new QPushButton(this);
    audio_mini->setStyleSheet("QPushButton{border-image: url(:image/minimize.png);}"
                              "QPushButton:hover{border-image: url(:image/minimize2.png);}");
     audio_mini->setGeometry(270,0,15,15);


     a_line=new QLineEdit(this);
     a_line->setGeometry(0,15,300,2);
     a_line->setStyleSheet("QLineEdit{background:Grey;}");



     a_MousePressed=false;
     region=new QWidget(this);
     region->setGeometry(0,0,270,15);
     region->setStyleSheet("background:transparent");
     region->installEventFilter(this);





    debugInfo = new QTextEdit(this);
    debugInfo->setGeometry(*rect_layout);

    QHBoxLayout *hlayout = new QHBoxLayout();
    hlayout->addWidget(start);
    hlayout->addWidget(stop);
    hlayout->addWidget(play);
    hlayout->addWidget(save);

   // QHBoxLayout *hlayout1 = new QHBoxLayout();


    QVBoxLayout *layout = new QVBoxLayout();

   // layout->setGeometry(*rect_layout);
    layout->addLayout(hlayout);
    layout->addWidget(debugInfo);

    this->setLayout(layout);

    outputFile = new QFile();
    outputFile->setFileName(tr("record.raw"));

    format.setSampleRate(8000);
    format.setChannelCount(1);
    format.setSampleSize(16);
    format.setSampleType(QAudioFormat::SignedInt);
    format.setByteOrder(QAudioFormat::LittleEndian);
    format.setCodec("audio/pcm");

    QAudioDeviceInfo info(QAudioDeviceInfo::defaultInputDevice());
    if (!info.isFormatSupported(format)) {
        qWarning("input default format not supported try to use nearest");
        format = info.nearestFormat(format);
    }



    QAudioDeviceInfo info1(QAudioDeviceInfo::defaultOutputDevice());
    if (!info1.isFormatSupported(format)) {
           qWarning() << "output default format not supported - trying to use nearest";
//           format = info.nearestFormat(m_format);
           qWarning() << "output no support input format.";
           return;
    }

    if(format.sampleSize() != 16) {
        qWarning("audio device doesn't support 16 bit support %d bit samples, example cannot run", format.sampleSize());
        audioInput = 0;
        return;
    }

    audioInput = NULL;
    audioOutput = NULL;

    connect(start, SIGNAL(clicked()), this,SLOT(recordStart()));
    connect(stop, SIGNAL(clicked()), this,SLOT(recordStop()));
    connect(play, SIGNAL(clicked()), this,SLOT(recordPlay()));
    connect(save, SIGNAL(clicked()), this,SLOT(recordSave()));
    connect(audio_close,SIGNAL(clicked()),this,SLOT(close()));
    connect(audio_mini,SIGNAL(clicked()),this,SLOT(clicked_audio_mini()));


}
void AudioRecorder::clicked_audio_mini()
{
     this->setWindowState(Qt::WindowMinimized);//最小化
}
void AudioRecorder::changebuttoncolor()
{
    if(stop->isEnabled())
        stop->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:White;}");
    else
        stop->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:Grey;}");
    if(start->isEnabled())
        start->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:White;}");
    else
        start->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:Grey;}");
    if(play->isEnabled())
        play->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:White;}");
    else
        play->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:Grey;}");
    if(save->isEnabled())
        save->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:White;}");
    else
        save->setStyleSheet("QPushButton{background:transparent;}""QPushButton{color:Grey;}");
}

AudioRecorder::~AudioRecorder()
{delete rect_layout;


}

void AudioRecorder::recordStart()
{
    outputFile->open(QIODevice::WriteOnly | QIODevice::Truncate);
    audioInput = new QAudioInput(format, this);
    audioInput->start(outputFile);
    debugInfo->append(tr("start record!"));
    start->setDisabled(true);
    stop->setDisabled(false);
    play->setDisabled(true);
    save->setDisabled(true);
    changebuttoncolor();
}

void AudioRecorder::recordPlay()
{
    outputFile->open(QIODevice::ReadOnly | QIODevice::Truncate);
    audioOutput = new QAudioOutput(format, this);
    connect(audioOutput, SIGNAL(stateChanged(QAudio::State)), this,SLOT(state(QAudio::State)));
    audioOutput->start(outputFile);
    debugInfo->append(tr("play record!"));
    start->setDisabled(true);
    stop->setDisabled(false);
    play->setDisabled(true);
    save->setDisabled(true);
    changebuttoncolor();

}

void AudioRecorder::recordStop()
{
    if(audioInput != NULL){
        audioInput->stop();
        delete audioInput;
        audioInput = NULL;
    }
    if(audioOutput != NULL){
        audioOutput->stop();
        delete audioOutput;
        audioOutput = NULL;
    }

    outputFile->close();

    debugInfo->append(tr("stop record!"));
    start->setDisabled(false);
    stop->setDisabled(true);
    play->setDisabled(false);
    save->setDisabled(false);
    changebuttoncolor();
}

void AudioRecorder::recordSave()
{
    QString filename = QFileDialog::getSaveFileName(
             this,
             tr("choose a filename to save under"),
             QDir::currentPath(),
             "Wav(*.wav)");
    if(filename.length() == 0) {
        QMessageBox::information(NULL, tr("filename"), tr("You didn't select any files."));
    } else {
        debugInfo->append(tr("save record!"));
        if(addWavHeader((filename+tr(".wav")).toLatin1().data())>0)
            //QMessageBox::information(NULL, tr("Save"), tr("Success Save :") + filename);
            debugInfo->append(tr("save record sucess!"));
    }
    changebuttoncolor();


}

void AudioRecorder::state(QAudio::State state)
{
    if(state == QAudio::IdleState)
        recordStop();
}

int AudioRecorder::addWavHeader(char *filename)
{
    // żŞĘĽ×Ľ±¸WAVµÄÎÄĽţÍ·
     HEADER DestionFileHeader;
     DestionFileHeader.RIFFNAME[0] = 'R';
     DestionFileHeader.RIFFNAME[1] = 'I';
     DestionFileHeader.RIFFNAME[2] = 'F';
     DestionFileHeader.RIFFNAME[3] = 'F';

     DestionFileHeader.WAVNAME[0] = 'W';
     DestionFileHeader.WAVNAME[1] = 'A';
     DestionFileHeader.WAVNAME[2] = 'V';
     DestionFileHeader.WAVNAME[3] = 'E';

     DestionFileHeader.FMTNAME[0] = 'f';
     DestionFileHeader.FMTNAME[1] = 'm';
     DestionFileHeader.FMTNAME[2] = 't';
     DestionFileHeader.FMTNAME[3] = 0x20;
     DestionFileHeader.nFMTLength = 16;  //  ±íĘľ FMT µÄł¤¶Č
     DestionFileHeader.nAudioFormat = 1; //Őâ¸ö±íĘľa law PCM

     DestionFileHeader.DATANAME[0] = 'd';
     DestionFileHeader.DATANAME[1] = 'a';
     DestionFileHeader.DATANAME[2] = 't';
     DestionFileHeader.DATANAME[3] = 'a';
     DestionFileHeader.nBitsPerSample = 16;
     DestionFileHeader.nBytesPerSample = 2;    //
     DestionFileHeader.nSampleRate = 8000;    //
     DestionFileHeader.nBytesPerSecond = 16000;
     DestionFileHeader.nChannleNumber = 1;

     int nFileLen = 0;
     int nSize = sizeof(DestionFileHeader);

     FILE *fp_s = NULL;
     FILE *fp_d = NULL;

     fp_s = fopen("record.raw", "rb");
     if (fp_s == NULL)
      return -1;

     fp_d = fopen(filename, "wb+");
     if (fp_d == NULL)
        return -2;


     int nWrite = fwrite(&DestionFileHeader, 1, nSize, fp_d);
     if (nWrite != nSize)
     {
      fclose(fp_s);
      fclose(fp_d);
      return -3;
     }

     while( !feof(fp_s))
     {
      char readBuf[4096];
      int nRead = fread(readBuf, 1, 4096, fp_s);
      if (nRead > 0)
      {
       fwrite(readBuf, 1, nRead, fp_d);
      }

      nFileLen += nRead;
     }
     fseek(fp_d, 0L, SEEK_SET);

     DestionFileHeader.nRIFFLength = nFileLen - 8 + nSize;
     DestionFileHeader.nDataLength = nFileLen;
     nWrite = fwrite(&DestionFileHeader, 1, nSize, fp_d);
     if (nWrite != nSize)
     {
      fclose(fp_s);
      fclose(fp_d);
      return -4;
     }

     fclose(fp_s);
     fclose(fp_d);

     return nFileLen;
}
bool  AudioRecorder::eventFilter(QObject*obj, QEvent *event)
{
    if(obj==region)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        if(event->type()==QEvent::MouseButtonPress)
        {
            if(mouseEvent->button()==Qt::LeftButton)
            {
            a_WindowPos = this->pos();
            a_MousePos = mouseEvent->globalPos();
            a_MousePressed = true;
            }
        }
        if(event->type()==QEvent::MouseMove)
        {
            if (a_MousePressed)
                {
                   this->move(a_WindowPos +(mouseEvent->globalPos()-a_MousePos));

                }
        }
        if(event->type()==QEvent::MouseButtonRelease)
        {
            if(mouseEvent->button()==Qt::LeftButton)
                a_MousePressed = false;
        }
    }



       return QObject::eventFilter(obj, event);
}

