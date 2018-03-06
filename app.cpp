#include "app.h"

QString app::appPath=qApp->applicationFilePath();
QString app::cityName="江宁";

app::app()
{
}

void app::readConfig()
{
    QString filePath=appPath+"/"+"appConfig.ini";
    QSettings *settings=new QSettings(filePath,QSettings::IniFormat);
    settings->beginGroup("appConfig");
    app::cityName=settings->value("cityName").toString();
    settings->endGroup();

}
void app::writeConfig()
{
    QString filePath=appPath+"/"+"appConfig.ini";
    QSettings *settings=new QSettings(filePath,QSettings::IniFormat);
    settings->beginGroup("appConfig");
    settings->setValue("cityName",app::cityName);
    settings->endGroup();
}

