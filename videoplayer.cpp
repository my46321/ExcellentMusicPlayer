#include "videoplayer.h"
#include <QBoxLayout>

Widget::Widget(QString open_filename, QWidget *parent) :
    QWidget(parent),
    filename(open_filename),
    mediaplayer(0,QMediaPlayer::VideoSurface),
    slider(0),
    playButton(0),
    VolumeSlider(0)
{
    resize(QSize(800,600));
    videowidget=new QVideoWidget; //build a widget
    setAcceptDrops(true);

    //set openfile button
    QAbstractButton *openButton = new QPushButton(tr("Open..."));
    connect(openButton, SIGNAL(clicked()), this, SLOT(openFile()));

    //set mute button
    muted=0;
    muteButton = new QPushButton;
    muteButton->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    connect(muteButton, SIGNAL(clicked()), this, SLOT(changeMute()));

    // set playbutton
    playButton=new QPushButton;
    playButton->setEnabled(false);
    playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    connect(playButton, SIGNAL(clicked()),this,SLOT(play()));

    // set slider
    slider=new QSlider(Qt::Horizontal);
    slider->setRange(0, 0);
    connect(slider, SIGNAL(sliderMoved(int)),this,SLOT(setPosition(int)));

    // set volume slider
    VolumeSlider = new QSlider(Qt::Horizontal, this);
    VolumeSlider->setRange(0, 100);
    VolumeSlider->setValue(100);
    VolumeSlider->setBaseSize(10,1);
    connect(VolumeSlider, SIGNAL(sliderMoved(int)), this, SLOT(changeVolume(int)));

    //set stop button
    stopButton = new QPushButton;
    stopButton->setEnabled(false);
    stopButton->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    connect(stopButton, SIGNAL(clicked()), this, SLOT(stop()));

    //set output
    mediaplayer.setVideoOutput(videowidget);

    //set widgets position
    QBoxLayout *controlerLayout= new QHBoxLayout;
    controlerLayout->addWidget(openButton);
    controlerLayout->addWidget(playButton);
    controlerLayout->addWidget(stopButton);
    controlerLayout->addWidget(muteButton);
    controlerLayout->addWidget(VolumeSlider);
    controlerLayout->addWidget(slider);

    QBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(videowidget);
    layout->addLayout(controlerLayout);

    setLayout(layout);

    connect(&mediaplayer, SIGNAL(stateChanged(QMediaPlayer::State)),
            this, SLOT(mediaStateChanged(QMediaPlayer::State)));
    connect(&mediaplayer, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    connect(&mediaplayer, SIGNAL(durationChanged(qint64)), this, SLOT(durationChanged(qint64)));

    //set background
    videowidget->setAutoFillBackground(true);

    QPalette palette;
    palette.setColor(QPalette::Background, QColor(0,0,0));
    palette.setBrush(QPalette::Background, QBrush(QPixmap("://image/video_background.jpg")));
    setPalette(palette);

    //set style
    VolumeSlider->setFixedWidth(50);
    VolumeSlider->setStyleSheet(QString("QSlider::groove:horizontal {"
                                        "border: 1px solid #999999;"
                                        "height: 9px; "
                                        "background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);"
                                        "margin: 2px 0;}"
                                        "QSlider::handle:horizontal {"
                                        "background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);"
                                        "border: 1px solid #5c5c5c;"
                                        "width: 18px;"
                                        "margin: -2px 0; "
                                        "border-radius: 3px;}"));
    slider->setStyleSheet(QString("QSlider::groove:horizontal {"
                                  "color: blue;}"));

    if (!filename.isEmpty()) {
        mediaplayer.setMedia(QUrl::fromLocalFile(filename));
        playButton->setEnabled(true);
        stopButton->setEnabled(true);
    }
    mediaplayer.play();
}

Widget::~Widget()
{
    //delete ui;
}

void Widget::mediaStateChanged(QMediaPlayer::State state)
{
    switch(state) {
    case QMediaPlayer::PlayingState:
        playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
        break;
    default:
        playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
        break;
    }
}

void Widget::openFile()
{
    filename=QFileDialog::getOpenFileName(this, tr("open file"),QDir::homePath(), tr("Movie File(*.wmv *.mp4 *.avi)"));
    if (!filename.isEmpty()) {
        mediaplayer.setMedia(QUrl::fromLocalFile(filename));
        playButton->setEnabled(true);
        stopButton->setEnabled(true);
    }
    mediaplayer.play();
}

void Widget::setPosition(int position)
{
    mediaplayer.setPosition(position);
}

void Widget::positionChanged(qint64 position)
{
    slider->setValue(position);
}

void Widget::durationChanged(qint64 duration)
{
    slider->setRange(0, duration);
}

void Widget::dragEnterEvent(QDragEnterEvent * event)
{
    if (event->mimeData()->hasUrls())
        event->acceptProposedAction();
    else
        event->ignore();
    event->accept();
}

void Widget::dropEvent(QDropEvent * event)
{
    const QMimeData* mimeData = event->mimeData();
    if(mimeData->hasUrls())
    {
        QList<QUrl> urlList=mimeData->urls();
        filename = urlList.at(0).toLocalFile();
        if (!filename.isEmpty()) {
            mediaplayer.setMedia(QUrl::fromLocalFile(filename));
            playButton->setEnabled(true);
        }
        mediaplayer.play();

    }
    event->accept();
}

void Widget::play()
{
    switch(mediaplayer.state()) {
    case QMediaPlayer::PlayingState:
        mediaplayer.pause();
        break;
    default:
        mediaplayer.play();
        break;
    }
}

void Widget::mouseDoubleClickEvent(QMouseEvent * event)
{
    //videowidget->setFullScreen(!isFullScreen());
    if(!isFullScreen()) showFullScreen();
    else showNormal();
    event->accept();
}

void Widget::mouseReleaseEvent(QMouseEvent * event)
{
    event->accept();
    play();
}

void Widget::changeVolume(int value)
{
    mediaplayer.setVolume(value);
}

void Widget::changeMute()
{
    muted=muted?0:1;
    muteButton->setIcon(style()->standardIcon(muted ? QStyle::SP_MediaVolumeMuted
                                                    : QStyle::SP_MediaVolume));
    mediaplayer.setMuted(muted);
}

void Widget::stop()
{
    mediaplayer.stop();
    stopButton->setEnabled(false);
}


