#include "freelisten.h"
#include "ui_freelisten.h"
#include <QMouseEvent>

#include<QWebFrame>
#include <QWebView>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QObject::connect(ui->webView,SIGNAL(urlChanged(QUrl)),this,SLOT(showURL(QUrl)));//
    connect(ui->webView,SIGNAL(titleChanged(QString)),this,SLOT(showTile(QString)));
    connect(ui->lineEdit,SIGNAL(returnPressed()),this,SLOT(webShow()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(on_pushButton_4_click()));
    this->setWindowFlags(Qt::FramelessWindowHint);
     this->setAttribute(Qt::WA_TranslucentBackground);


}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::on_pushButton_4_click()
{


    this->close();
    ui->webView->load(QUrl(""));



}

void Dialog::mousePressEvent(QMouseEvent *event)
{
     this->windowPos = this->pos();                // 获得部件当前位置
     this->mousePos = event->globalPos();     // 获得鼠标位置
     this->dPos = mousePos - windowPos;       // 移动后部件所在的位置
}
void Dialog::mouseMoveEvent(QMouseEvent *event)
{
     this->move(event->globalPos() - this->dPos);
}
void Dialog::showURL(QUrl url)
{
    ui->lineEdit->setText(url.toString());
}//获取网址文本并显示在lineedit

void Dialog::showTile(QString str)
{
    this->setWindowTitle(str);
}//获取名称并显示
void Dialog::webShow()
{
    QWebSettings *websetting= QWebSettings::globalSettings();
      websetting->setAttribute(QWebSettings::JavascriptEnabled,true);
      websetting->setAttribute(QWebSettings::PluginsEnabled,true);
    ui-> webView->settings()->setAttribute(QWebSettings::PluginsEnabled,true);
    ui-> webView->settings()->setAttribute(QWebSettings::JavascriptEnabled,true);

    ui->webView->load(QUrl(ui->lineEdit->text()));
    ui->webView->showMaximized();


}//加载网址
void Dialog::funtion1()
{ ui-> webView->settings()->setAttribute(QWebSettings::PluginsEnabled,true);
    ui-> webView->settings()->setAttribute(QWebSettings::JavascriptEnabled,true);
ui->webView->showMaximized();
    ui->webView->load(QUrl("http://fm.baidu.com/"));
}


void Dialog::loadinitial()	//规定初始状态吧
{
    QString filename="mainpage.ini";
   QFile *file=new QFile;//初始化file和string
   file->setFileName(filename);//string给file赋名
   bool ok=file->open(QIODevice::ReadOnly);//定义 ok 看file能否成功打开
   if(ok)
   {
       QTextStream in(file);//打算用in来读写file？
       ui->webView->load(QUrl("http://fm.baidu.com/"));//一行一行的读
//加载网页
       file->close();
       delete file;
       file=NULL;

   }
   else
   {
       QMessageBox::information(this,"提示","错误！",QMessageBox::Yes|QMessageBox::Default);
       return;
   }//打不开的话提示错误

}



void Dialog::writeslot()
{
    QString filename="mainpage.ini";
    QFile *file=new QFile;
    file->setFileName(filename);
    bool ok=file->open(QIODevice::WriteOnly);
    if(ok)
    {
        QTextStream out(file);
        out<<"mainpage="+ui->lineEdit->text();//和初始化不同之处
        file->close();
        delete file;
        file=NULL;

    }
    else
    {
        QMessageBox::information(this,"提示","错误！",QMessageBox::Yes|QMessageBox::Default);
        return;
    }
}
