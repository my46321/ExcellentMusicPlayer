#ifndef AUDIORECORDER_H
#define AUDIORECORDER_H


#include<QDialog>
#include <qaudioinput.h>
#include <qaudiooutput.h>
#include <QFile>
#include<QLineEdit>

#include  <QPushButton>
#include  <QTextEdit>

class AudioRecorder : public QDialog
{
    Q_OBJECT

public:
    AudioRecorder(QDialog *parent = 0);
    ~AudioRecorder();
    int addWavHeader(char *);

private:
    QPushButton *start;
    QPushButton *stop;
    QPushButton *play;
    QPushButton *save;

    QTextEdit *debugInfo;

    QAudioDeviceInfo device;
    QAudioFormat format;
    QAudioInput *audioInput;
    QAudioOutput *audioOutput;
    QFile *outputFile;
     QRect* rect_layout;
     QPushButton* audio_close;
     QPushButton* audio_mini;
    void changebuttoncolor();
    QPoint  a_MousePos;
    QPoint  a_WindowPos;
     bool    a_MousePressed;
    QWidget* region;
    QLineEdit* a_line;
protected:
     bool eventFilter(QObject *obj, QEvent *event);

private slots:
    void recordStart();
    void recordStop();
    void recordPlay();
    void recordSave();
    void state(QAudio::State s);
    void clicked_audio_mini();

};


#endif // AUDIORECORDER_H
