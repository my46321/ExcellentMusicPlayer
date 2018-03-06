#ifndef DOWNLOADDIALOG_H
#define DOWNLOADDIALOG_H

#include <QDialog>
#include "QtNetwork/QNetworkAccessManager"
#include "QtNetwork/QNetworkReply"
#include "QtNetwork/QNetworkRequest"
#include <QTextCodec>
#include <QUrl>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDesktopServices>
#include <QTime>
class QNetworkAccessManager;
class QFile;
class QTime;

namespace Ui {
class downloadDialog;
}

class downloadDialog : public QDialog
{
    Q_OBJECT

public:
    explicit downloadDialog(QWidget *parent = 0);
    ~downloadDialog();

    QString name;
    QString songid[3];
    QString songlink;
    QString artist[3];
    QString songname[3];
    QString songinfo[3];
    QString web1;
    QString web2;
    QString web3;

private slots:
    void replyFinished1(QNetworkReply *);
    void replyFinished2(QNetworkReply *);
    void replyFinished3(QNetworkReply *);
    void updataProgress(qint64,qint64);
    void parseJson(QString);
    void on_downloadButton_clicked();
    void on_downloadButton1_clicked();
    void on_downloadButton2_clicked();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

public slots:
    void SlotSetNameValue(QString strText);

private:
    Ui::downloadDialog *ui;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *managernew;
    QNetworkAccessManager *manager1;
    QFile *file;
    QPoint  d_MousePos;
    QPoint  d_WindowPos;
     bool    d_MousePressed;
    QWidget* region;
protected:
     bool eventFilter(QObject *obj, QEvent *event);
};

#endif // DOWNLOADDIALOG_H
