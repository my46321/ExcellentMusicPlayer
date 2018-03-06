#ifndef MYHELPER
#define MYHELPER

#include<QString>
#include<QFile>
#include<QFileDialog>
#include<QSettings>
#include<QCoreApplication>
//#include"messagedialog.h"

class myHelper:public QObject
{
  public:
    //设置为开机启动
    static void AutoRunWithSystem(bool IsAutoRun, QString AppName, QString AppPath) {
    QSettings *reg = new QSettings(
            "HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",
            QSettings::NativeFormat);

        if (IsAutoRun) {
            reg->setValue(AppName, AppPath);
        } else {
            reg->setValue(AppName, "");
        }
    }
//    //显示错误框,仅确定按钮
//    static void ShowMessageBoxError(QString info) {
//        messageDialog msg;
//        msg.showMessage(info);
//        msg.exec();
//    }
   // 获取选择的文件
    static QStringList GetFileName(QString filter) {
        return QFileDialog::getOpenFileNames(0, "选择文件", QCoreApplication::applicationDirPath(), filter);
    }


    //获取文件名,含拓展名
    static QString GetFileNameWithExtension(QString strFilePath) {
        QFileInfo fileInfo(strFilePath);
        return fileInfo.fileName();
    }
};
#endif // MYHELPER

