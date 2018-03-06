#include "downloaddialog.h"
#include "ui_downloaddialog.h"

int count=1;
downloadDialog::downloadDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::downloadDialog)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    this->setWindowTitle("查找");

    d_MousePressed=false;
    region=new QWidget(this);
    region->setGeometry(0,0,350,25);
    region->setStyleSheet("background:Grey");
    region->installEventFilter(this);

}

downloadDialog::~downloadDialog()
{
    delete ui;
}

void downloadDialog::SlotSetNameValue(QString strText)
{
    count=1;
    name=strText;
    ui->plainTextEdit->document()->setPlainText(name);
    manager = new QNetworkAccessManager(this);
    web1="http://tingapi.ting.baidu.com/v1/restserver/ting?from=qianqian&version=2.1.0&method=baidu.ting.search.catalogSug&format=json&query="+name;
    manager->get(QNetworkRequest(QUrl(web1)));
    connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished1(QNetworkReply *)));
}
void downloadDialog::parseJson(QString all_text)
{
    int l=all_text.length();
    if (count==1)
    {
        for (int i=0;i<l;i++)
        {
            for (int cnt=0;cnt<3;cnt++)
            {
                if(songid[cnt].isEmpty())
                {
                    if(all_text[i]=='s' && all_text[i+1]=='o' && all_text[i+2]=='n' && all_text[i+3]=='g' && all_text[i+4]=='i' && all_text[i+5]=='d')
                    {

                        int j=i+9;
                        for(;all_text[j]!='"';j++)
                        {}
                        songid[cnt]=all_text.mid(i+9,j-i-9);
                        i++;
                    }
                }
                if(songname[cnt].isEmpty())
                {
                    if(all_text[i]=='s' && all_text[i+1]=='o' && all_text[i+2]=='n' && all_text[i+3]=='g' && all_text[i+4]=='n' && all_text[i+5]=='a' &&all_text[i+6]=='m' &&all_text[i+7]=='e')
                    {

                        int j=i+11;
                        for(;all_text[j]!='"';j++)
                        {}
                        songname[cnt]=all_text.mid(i+11,j-i-11);
                        i++;
                    }
                }
                if(artist[cnt].isEmpty())
                {
                    if(all_text[i]=='a' && all_text[i+1]=='r' && all_text[i+2]=='t' && all_text[i+3]=='i' && all_text[i+4]=='s' && all_text[i+5]=='t' &&all_text[i+6]=='n' &&all_text[i+7]=='a' && all_text[i+8]=='m' && all_text[i+9]=='e')
                    {

                        int j=i+13;
                        for(;all_text[j]!='"';j++)
                        {}
                        artist[cnt]=all_text.mid(i+13,j-i-13);
                        i++;
                    }
                }
            }
        }
    }
    if(count==2)
    {
        for (int i=0;i<l;i++)
        {
            if(songlink.isEmpty())
            {
                int cnt=0;
                if(all_text[i]=='f' && all_text[i+1]=='i' && all_text[i+2]=='l' && all_text[i+3]=='e' && all_text[i+4]=='_' && all_text[i+5]=='l' && all_text[i+6]=='i' && all_text[i+7]=='n' && all_text[i+8]=='k')
                {
                    int j=i+12;
                    for(;all_text[j]!='\"';j++)
                    {}
                    songlink=all_text.mid(i+12,j-i-12);
                    for(int x=0;x<songlink.length();x++)
                    {
                        if ('\\'==songlink[x])
                        {
                            cnt++;
                            for(int y=x;y<songlink.length();y++)
                                songlink[y]=songlink[y+1];
                        }
                    }
                    int t=songlink.length();
                    int l=t-cnt;
                    songlink=songlink.left(l);
                    break;
                }
            }
        }
    }
}

void downloadDialog::replyFinished1(QNetworkReply * reply)
{
    QString all_text=reply->readAll();
    parseJson(all_text);
    count++;
    songinfo[0]=songname[0]+"--"+artist[0];
    songinfo[1]=songname[1]+"--"+artist[1];
    songinfo[2]=songname[2]+"--"+artist[2];
    ui->plainTextEdit_2->document()->setPlainText(songinfo[0]);
    ui->plainTextEdit_3->document()->setPlainText(songinfo[1]);
    ui->plainTextEdit_4->document()->setPlainText(songinfo[2]);
}
void downloadDialog::replyFinished2(QNetworkReply *reply)
{

    QString all_text=reply->readAll();
    parseJson(all_text);
    web3=songlink;
}
void downloadDialog::replyFinished3(QNetworkReply * reply)
{
    //QDesktopServices::openUrl(QUrl(web3));
    QString path="D:/songs/"+name+".mp3";
    file = new QFile(path);
    if(!file->open(QIODevice::WriteOnly))
    {   //如果打开文件失败，则删除file，并使file指针为0，然后返回

        delete file;
        file = 0;
        return;
    }
    else
        file->write(reply->readAll());
    file->close();
    reply->deleteLater();
    //QDesktopServices::openUrl(QUrl(web3));
    //ui->download->setEnabled(true);
}
void downloadDialog::updataProgress(qint64 bytesRead,qint64 total)
{
    ui->progressBar->setMaximum(total);
    ui->progressBar->setValue(bytesRead);
    if (total==bytesRead && total>0)
    {
        QTime t;
        t.start();
        while(t.elapsed()<1000)
            QCoreApplication::processEvents();
        close();
    }
}

void downloadDialog::on_downloadButton_clicked()
{

    managernew = new QNetworkAccessManager(this);
    web2="http://tingapi.ting.baidu.com/v1/restserver/ting?from=qianqian&version=2.1.0&method=baidu.ting.song.getInfos&format=json &ts=1408284347323&e=JoN56kTXnnbEpd9MVczkYJCSx%2FE1mkLx%2BPMIkTcOEu4%3D &nw=2&ucf=1&res=1&songid="+songid[0];
    managernew->get(QNetworkRequest(QUrl(web2)));
    connect(managernew,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished2(QNetworkReply *)));
    manager1=new QNetworkAccessManager(this);
    QNetworkReply *reply =manager1->get(QNetworkRequest(QUrl(web3)));
    connect(reply,SIGNAL(readyRead()),this,SLOT(replyFinished3(QNetworkReply *)));
    connect(reply,SIGNAL(downloadProgress(qint64,qint64)),this,SLOT(updataProgress(qint64,qint64)));
    //manager1->get(QNetworkRequest(QUrl(web3)));
    connect(reply,SIGNAL(finished()),this,SLOT(replyFinished3(QNetworkReply *)));
}

void downloadDialog::on_downloadButton1_clicked()
{
    managernew = new QNetworkAccessManager(this);
    web2="http://tingapi.ting.baidu.com/v1/restserver/ting?from=qianqian&version=2.1.0&method=baidu.ting.song.getInfos&format=json &ts=1408284347323&e=JoN56kTXnnbEpd9MVczkYJCSx%2FE1mkLx%2BPMIkTcOEu4%3D &nw=2&ucf=1&res=1&songid="+songid[1];
    managernew->get(QNetworkRequest(QUrl(web2)));
    connect(managernew,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished2(QNetworkReply *)));
    manager1=new QNetworkAccessManager(this);
    QNetworkReply *reply =manager1->get(QNetworkRequest(QUrl(web3)));
    connect(reply,SIGNAL(readyRead()),this,SLOT(replyFinished3(QNetworkReply *)));
    connect(reply,SIGNAL(downloadProgress(qint64,qint64)),this,SLOT(updataProgress(qint64,qint64)));
    //manager1->get(QNetworkRequest(QUrl(web3)));
    connect(reply,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished3(QNetworkReply *)));
}

void downloadDialog::on_downloadButton2_clicked()
{
    managernew = new QNetworkAccessManager(this);
    web2="http://tingapi.ting.baidu.com/v1/restserver/ting?from=qianqian&version=2.1.0&method=baidu.ting.song.getInfos&format=json &ts=1408284347323&e=JoN56kTXnnbEpd9MVczkYJCSx%2FE1mkLx%2BPMIkTcOEu4%3D &nw=2&ucf=1&res=1&songid="+songid[2];
    managernew->get(QNetworkRequest(QUrl(web2)));
    connect(managernew,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished2(QNetworkReply *)));
    manager1=new QNetworkAccessManager(this);
    QNetworkReply *reply =manager1->get(QNetworkRequest(QUrl(web3)));
    connect(reply,SIGNAL(readyRead()),this,SLOT(replyFinished3(QNetworkReply *)));
    connect(reply,SIGNAL(downloadProgress(qint64,qint64)),this,SLOT(updataProgress(qint64,qint64)));
    //manager1->get(QNetworkRequest(QUrl(web3)));
    connect(reply,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished3(QNetworkReply *)));
}

void downloadDialog::on_pushButton_clicked()
{
    this->close();
}

void downloadDialog::on_pushButton_2_clicked()
{
    this->setWindowState(Qt::WindowMinimized);//最小化
}
bool  downloadDialog::eventFilter(QObject*obj, QEvent *event)
{
    if(obj==region)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        if(event->type()==QEvent::MouseButtonPress)
        {
            if(mouseEvent->button()==Qt::LeftButton)
            {
            d_WindowPos = this->pos();
            d_MousePos = mouseEvent->globalPos();
            d_MousePressed = true;
            }
        }
        if(event->type()==QEvent::MouseMove)
        {
            if (d_MousePressed)
                {
                   this->move(d_WindowPos +(mouseEvent->globalPos()-d_MousePos));

                }
        }
        if(event->type()==QEvent::MouseButtonRelease)
        {
            if(mouseEvent->button()==Qt::LeftButton)
                d_MousePressed = false;
        }
    }



       return QObject::eventFilter(obj, event);
}
