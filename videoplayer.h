#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H
#include <QtWidgets/QWidget>
#include <QAbstractSlider>
#include <QAbstractButton>
#include <QDragEnterEvent>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QPushButton>
#include <QFileDialog>
#include <QComboBox>
#include <QPalette>
#include <QSlider>
#include <QStyle>
#include <QMovie>
#include <dir.h>
#include <QtGui>
#include <QUrl>



QT_BEGIN_NAMESPACE
class QAbstractButton;
class QSlider;
class QLabel;
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QString open_filename = 0, QWidget *parent = 0);
    ~Widget();

public slots:
    void openFile();
    void play();
    void changeMute();
    void changeVolume(int value);
    void stop();

private slots:
    void setPosition(int position);
    void mediaStateChanged(QMediaPlayer::State state);
    void positionChanged(qint64 position);
    void durationChanged(qint64 duration);

public:
    void dragEnterEvent(QDragEnterEvent *);
    void dropEvent(QDropEvent *);
    void mouseDoubleClickEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
    //void keyPressEvent(QKeyEvent*);


private:
    //Ui::Widget *ui;
    QVideoWidget *videowidget;
    QString filename;
    QMediaPlayer mediaplayer;
    QSlider *slider;


    QAbstractButton *playButton;

 QAbstractSlider *VolumeSlider;
 QAbstractButton * muteButton;
 QAbstractButton *stopButton;



     QComboBox *rateBox;
    bool muted;
};

#endif // VIDEOPLAYER_H
