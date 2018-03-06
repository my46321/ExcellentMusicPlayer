#include "qtweather.h"
#include "ui_qtweather.h"
#include<QFile>
#include<QPalette>
#include<QGraphicsOpacityEffect>
#include<QScrollBar>
#include<QBrush>
#include<QDebug>

QtWeather::QtWeather(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QtWeather)
{
    ui->setupUi(this);
    //标题图标
    //IconHelper::Instance()->SetIcon(ui->quitBtn,QChar(0xf00d),10);
    //IconHelper::Instance()->SetIcon(ui->minBtn,QChar(0xf068),10);
    //背景设置

    QGraphicsDropShadowEffect *shadow_effect = new QGraphicsDropShadowEffect(this);

    shadow_effect->setOffset(-8,-8);


    shadow_effect->setColor(QColor(55,62,64));

    shadow_effect->setBlurRadius(30);
   this->setStyleSheet("border-radius: 5px");//圆角设置
   ui->label_6->setGraphicsEffect(shadow_effect);
    ui->label_6->installEventFilter(this);  //在窗体上为lineEdit1安装过滤器
    ui->label_7->installEventFilter(this);  //在窗体上为lineEdit2安装过
ui->label_6->setMouseTracking(true);
ui->label_7->setMouseTracking(true);
this->changethewindow();
    QPalette palette1;
   palette1.setColor (QPalette::Background, QColor (0, 0 , 0, 255));
    palette1.setBrush(QPalette::Background,QBrush(QPixmap(":/image/999.jpg").scaled(this->size())));
    this->setPalette(palette1);
    this->setTextBrowseStyle();//testBrowse样式设置
//    connect(ui->ProvineComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(changecomboboxSlot(int)));
//    connect(ui->CitycomboBox,SIGNAL(currentIndexChanged(QString)),this,SLOT(changeCitycomboboxSlot(QString)));
    provinceList<<"请选择"<<"北京 10101"
                 <<"上海 10102"
                 <<"天津 10103"
                 <<"重庆 10104"
                 <<"黑龙江 10105"
                 <<"吉林 10106"
                 <<"辽宁 10107"
                 <<"内蒙古 10108"
                 <<"河北 10109"
                 <<"山西 10110"
                 <<"陕西 10111"
                 <<"山东 10112"
                 <<"新疆 10113"
                 <<"西藏 10114"
                 <<"青海 10115"
                 <<"甘肃 10116"
                 <<"宁夏 10117"
                 <<"河南 10118"
                 <<"江苏 10119"
                 <<"湖北 10120"
                 <<"浙江 10121"
                 <<"安徽 10122"
                 <<"福建 10123"
                 <<"江西 10124"
                 <<"湖南 10125"
                 <<"贵州 10126"
                 <<"四川 10127"
                 <<"广东 10128"
                 <<"云南 10129"
                 <<"广西 10130"
                 <<"海南 10131"
                 <<"香港 10132"
                 <<"澳门 10133"
                 <<"台湾 10134";
//    for(int i=1;i<provinceList.length();i++)
//    {
//        QStringList list;
//        list=provinceList[i].split(" ");
//        ui->ProvineComboBox->addItem(list[0]+" ");
//    }
    manager=new QNetworkAccessManager(this);
    connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished(QNetworkReply*)));
    connect(ui->lineEdit,SIGNAL(returnPressed()),this,SLOT(on_searchBtn_clicked()));//回车键按下执行查询操作

    //隐藏标题栏
    this->setWindowFlags(Qt::FramelessWindowHint);
    //时间显示
    timer=new QTimer(this);
    timer->start();
    connect(timer,SIGNAL(timeout()),this,SLOT(timeSlot()));
    //lcdNumber颜色设置
    QPalette palette;
    palette.setColor(QPalette::WindowText,QColor("#8A8A8A"));
    ui->lcdNumber->setPalette(palette);
    //接受信号读取数据
    connect(this,SIGNAL(dataChange()),this,SLOT(readDataSlot()));
    //选择城市改变
//    connect(this,SIGNAL(theTextChangSignal(QString)),this,SLOT(theCityChangeSlot(QString)));
    //设置窗体透明度
    this->setWindowOpacity(0.8);
     ui->textBrowser->setWindowOpacity(0.9);

    //程序开始是读取配置文件数据
    this->readAppConfig();
    connect(ui->lineEdit,SIGNAL(textChanged(QString)),this,SLOT(writeConfigSlot(QString)));
}

QtWeather::~QtWeather()
{
    delete ui;
}

void QtWeather::setTextBrowseStyle()
{
    ui->textBrowser->setMouseTracking(true);
    ui->textBrowser->setFrameShape(QFrame::NoFrame);//设置为无边样式
    ui->textBrowser->setFocusPolicy(Qt::NoFocus);//设置为无焦点
    ui->textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//关闭水平滚动条

    //样式设置
    ui->textBrowser->setContextMenuPolicy(Qt::CustomContextMenu);
    QGraphicsOpacityEffect *opacityEffect = new QGraphicsOpacityEffect;
    ui->textBrowser->verticalScrollBar()->setGraphicsEffect(opacityEffect);
    opacityEffect->setOpacity(0.5);
    ui->textBrowser->setGraphicsEffect(opacityEffect);

    QScrollBar *vbar=ui->textBrowser->verticalScrollBar();
    vbar->setContextMenuPolicy(Qt::NoContextMenu);//"QScrollBar::handle{}"
    vbar->setStyleSheet("QScrollBar{background:white; width: 10px;margin: 10px 0 10px 0;}"
                        "QScrollBar::handle{background:light gray;border-radius:5px;}"
                        "QScrollBar::handle:hover{background: rgb(55,55,55);}"
                        "QScrollBar::add-line:vertical {background:black; border-image: url(:/image/down.png); height: 10px; subcontrol-position: bottom;subcontrol-origin: margin;}"
                        "QScrollBar::sub-line:vertical {background:black; border-image: url(:/image/top.png);height: 10px;subcontrol-position: top;subcontrol-origin: margin;}"
                        "QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {background:white;}");

}

void QtWeather::parseWeatherJsonData(const QByteArray &data)
{
    //写入数据之前清空容器
    this->DataList.clear();
    this->weatherDataList.clear();
    QJsonParseError jsonError;
    QJsonDocument json=QJsonDocument::fromJson(data,&jsonError);
    if(jsonError.error==QJsonParseError::NoError)
    {
        if(json.isObject())
        {
            QJsonObject jsonObj=json.object();
            date=jsonObj.value("date").toString();
            //json 数组解析
            QJsonArray jsonArray=jsonObj["results"].toArray();
            for(int i=0;i<jsonArray.count();i++)
            {
                jsonObj=jsonArray.at(i).toObject();
                currentCity=jsonObj.value("currentCity").toString();
                PM=jsonObj.value("pm25").toString();
                //json 中的嵌套数组解析
                QJsonArray jsonArray2=jsonObj["index"].toArray();
                for(int i=0;i<jsonArray2.count();i++)
                {
                    jsonObj = jsonArray2.at(i).toObject();
                    QString title=jsonObj.value("title").toString();
                    QString zs=jsonObj.value("zs").toString();
                    DataList<<title+":"+zs;
                    QString tipt=jsonObj.value("tipt").toString();
                    QString des=jsonObj.value("des").toString();
                    DataList<<tipt+":"+des;
                }
            }
            for(int i=0;i<jsonArray.count();i++)
            {
                jsonObj=jsonArray.at(i).toObject();
                //天气数组解析
                QJsonArray jsonArray3=jsonObj["weather_data"].toArray();
                for(int i=0;i<jsonArray3.count();i++)
                {
                    jsonObj = jsonArray3.at(i).toObject();
                    QString date=jsonObj.value("date").toString();
                    QString weather=jsonObj.value("weather").toString();
                    QString wind=jsonObj.value("wind").toString();
                    QString temperature=jsonObj.value("temperature").toString();
                    weatherDataList<<"        PM 2.5:"+PM+"\n"
                                     +"        时间:"+date+"\n"
                                     +"        天气:"+weather+"\n"
                                     +"        风速:"+wind+"\n"
                                     +"        温度:"+temperature;
                }

            }
        }
    }
    emit dataChange();
}

void QtWeather::readAppConfig()
{
    app::readConfig();
    QString cityName=app::cityName;
    QString str="http://api.map.baidu.com/telematics/v3/weather?location=%1&output=json&ak=6l7lxDGHjTlNfQwuZv4Qs7vWUusjVrM3";
    str=str.arg(cityName);
    ui->lineEdit->setText(cityName);
    ui->groupBox->setTitle(QString("当前查询城市:%1").arg(cityName));
    manager->get(QNetworkRequest(QUrl(str)));
}

void QtWeather::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        this->mousePressed=true;
        mousePoint=e->globalPos()-this->pos();
        e->accept();
    }
}

void QtWeather::mouseReleaseEvent(QMouseEvent *)
{
    this->mousePressed=false;
}

void QtWeather::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()==Qt::LeftButton&&mousePressed)
    {
        this->move(e->globalPos()-mousePoint);
        e->accept();
    }
}



//void QtWeather::changeCitycomboboxSlot(QString city)
//{
//    //请求网络数据
//    QString str="http://api.map.baidu.com/telematics/v3/weather?location=%1&output=json&ak=6l7lxDGHjTlNfQwuZv4Qs7vWUusjVrM3";
//    str=str.arg(city);
//    ui->groupBox->setTitle(QString("当前查询城市:%1").arg(city));
//    manager->get(QNetworkRequest(QUrl(str)));
//    emit theTextChangSignal(city);
//}

void QtWeather::replyFinished(QNetworkReply *reply)
{
    parseWeatherJsonData(reply->readAll());
}


void QtWeather::on_searchBtn_clicked()
{
    QString city=ui->lineEdit->text();
    QString str="http://api.map.baidu.com/telematics/v3/weather?location=%1&output=json&ak=6l7lxDGHjTlNfQwuZv4Qs7vWUusjVrM3";
    str=str.arg(city);
    ui->groupBox->setTitle(QString("当前查询城市:%1").arg(city));
    manager->get(QNetworkRequest(QUrl(str)));
}

void QtWeather::timeSlot()
{
    QDateTime time=QDateTime::currentDateTime();
    QString dateTime=time.toString("yyyy-MM-dd hh:mm:ss ddd");
    ui->lcdNumber->setDigitCount(23);
    ui->lcdNumber->display(dateTime);
}

//void QtWeather::on_quitBtn_clicked()
//{
//    this->close();
//}

//void QtWeather::on_minBtn_clicked()
//{
//    this->showMinimized();
//}

void QtWeather::readDataSlot()
{
    //显示数据之前清空原有数据
    ui->textBrowser->clear();
    ui->currentWeather->clear();
    ui->currentWeather_2->clear();
//    ui->currentWeather_3->clear();
//    ui->currentWeather_4->clear();
   //开始显示数据
    foreach (QString data, DataList)
    {
        ui->textBrowser->append(data);
    }
    for(int i=0;i<weatherDataList.length();i++)
    {
        ui->currentWeather->setText(weatherDataList.at(0));
        ui->currentWeather_2->setText(weatherDataList.at(1));
//        ui->currentWeather_3->setText(weatherDataList.at(2));
      //  ui->currentWeather_4->setText(weatherDataList.at(3));
    }
}

//void QtWeather::theCityChangeSlot(QString city)
//{
//    ui->lineEdit->setText(city);
//}

void QtWeather::writeConfigSlot(QString cityName)
{
    app::cityName=cityName;
    app::writeConfig();
}

void QtWeather::changethewindow()
{
    ui->currentWeather->hide();
    ui->currentWeather_2->hide();

}
//void QtWeather::focusInEvent(QFocusEvent *e)
//{
//     ui->label_6->hide();
//     ui->currentWeather->show();
//}

//void  QtWeather::focusOutEvent(QFocusEvent *e)
//{
//    ui->label_6->hide();
//    ui->currentWeather->show();
//}

bool QtWeather::eventFilter(QObject *watched, QEvent *event)
{
     if (watched==ui->label_6)         //首先判断控件
     {
          if (event->type()==QEvent::Enter)     //然后再判断控件的具体事件 (这里指获得焦点事件)
          {
              ui->label_6->hide();
              ui->textBrowser->show();

              ui->currentWeather->show();
          }



  else if(event->type()==QEvent::Leave)    // 控件的失去焦点事件
        {

            ui->currentWeather->hide();
          ui->label_6->show();
      }
  }

     if (watched==ui->label_7)           //这里来处理 lineEdit2 , 和处理lineEdit1 是一样的
     {
          if (event->type()==QEvent::Enter)
         {
//              QPalette p=QPalette();
//              p.setColor(QPalette::Base,Qt::green);
//              ui->label_7->setPalette(p);
              ui->label_7->hide();
              ui->currentWeather_2->show();
          }
         else if (event->type()==QEvent::Leave)
         {
//              QPalette p=QPalette();
//              p.setColor(QPalette::Base,Qt::white);
//              ui->label_7->setPalette(p);
              ui->currentWeather_2->hide();
              ui->label_7->show();
         }
     }
 return QObject::eventFilter(watched,event);     // 最后将事件交给上层对话框
}
