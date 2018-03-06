#ifndef QTWEATHER_H
#define QTWEATHER_H

#include <QWidget>
#include<QStringList>
#include<QNetworkAccessManager>
#include<QNetworkRequest>
#include<QNetworkReply>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonParseError>
#include<QJsonArray>
#include<QTimer>
#include<QDateTime>
#include<QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include"iconhelper.h"
#include"app.h"

namespace Ui {
class QtWeather;
}

class QtWeather : public QWidget
{
    Q_OBJECT

public:
    explicit QtWeather(QWidget *parent = 0);
    ~QtWeather();
    void setTextBrowseStyle();
    void parseWeatherJsonData(const QByteArray &data);
    void readAppConfig();
    void changethewindow();

protected:
//    virtual void focusInEvent(QFocusEvent *e);
//           virtual void focusOutEvent(QFocusEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *e);
public slots:
  bool eventFilter(QObject *,QEvent *);    //事件过滤
private slots:
//    void changecomboboxSlot(int i);
    //void changeCitycomboboxSlot(QString city);
    void replyFinished(QNetworkReply *reply);
    void on_searchBtn_clicked();
    void timeSlot();
//    void on_quitBtn_clicked();
//    void on_minBtn_clicked();
    void readDataSlot();
//    void theCityChangeSlot(QString city);
    void writeConfigSlot(QString cityName);

signals:
    void dataChange();
    void theTextChangSignal(QString city);

private:
    Ui::QtWeather *ui;
    QString List;
    QStringList provinceList;
    QNetworkAccessManager *manager;
    QTimer *timer;
    QString currentCity;
    bool mousePressed;
    QPoint mousePoint;
    QString date;
    QString PM;
    QStringList DataList;
    QStringList weatherDataList;
};

#endif // QTWEATHER_H
