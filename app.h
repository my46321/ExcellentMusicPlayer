#ifndef APP_H
#define APP_H

#include<QString>
#include<QSettings>
#include<QApplication>

class app
{
public:
    app();
    static QString cityName;
    static QString appPath;
    static void readConfig();
    static void writeConfig();
};

#endif // APP_H
