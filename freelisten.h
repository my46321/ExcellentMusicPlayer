#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QtWebKit/QtWebKit>
#include<QtWebKitWidgets/QWebView>
#include<QUrl>
#include<QString>
#include<QProgressBar>
#include<QFile>
#include<QMessageBox>
#include<QContextMenuEvent>
#include<QMenu>
#include<QAction>
#include <QMouseEvent>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void loadinitial();
   void mousePressEvent(QMouseEvent *);
  void mouseMoveEvent(QMouseEvent *);

    ~Dialog();
void funtion1();
private slots:
 void on_pushButton_4_click ();
    void showURL(QUrl url);//单行显示网址
    void showTile(QString str);//显示网页名称
    void webShow();//显示网页

    void writeslot();

private:
    Ui::Dialog *ui;
    QPoint windowPos;
    QPoint mousePos;
    QPoint dPos;

};

#endif // DIALOG_H


