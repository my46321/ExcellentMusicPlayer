#include "skinbox.h"
#include "ui_skinbox.h"
#include<QEvent>
#include<QDebug>
skinbox::skinbox(QWidget *parent) :QDialog(parent),ui(new Ui::skinbox)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint|Qt::Tool|Qt::X11BypassWindowManagerHint);

    ui->horizontalSlider->setStyleSheet("QSlider{border-image:NULL;}"
                                        "QSlider::groove:horizontal{border:0px;height:4px;}"
                                        "QSlider::sub-page:horizontal{background:blue;}"
                                        "QSlider::add-page:horizontal{background:lightgray;}"
                                        "QSlider::handle:horizontal{background-color: rgb(85, 170, 255);width:10px;border-radius:5px;margin:-3px 0px -3px 0px;}");

    this->setAttribute(Qt::WA_TranslucentBackground, true);

    ui->horizontalSlider->setMaximum(255);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->installEventFilter(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),this,SIGNAL(listbktransparent(int)));
    ui->horizontalSlider->setValue(150);//设置列表背景色值

    QWidget *scrollwid=new QWidget(ui->scrollArea);
    scrollwid->setGeometry(0,0,210,220);
    scrollwid->setMinimumSize(210,220);

    btn=new mybutton(scrollwid,"夏日\n心情","background3");
    btn1=new mybutton(scrollwid,"美丽\n心情","background2");
    btn2=new mybutton(scrollwid,"绿茶\n心情","background");
    btn3=new mybutton(scrollwid,"冬季\n心情","background4");
    btn4=new mybutton(scrollwid,"祖国\n风景","background5");
    btn5=new mybutton(scrollwid,"异域\n风景","background6");

    ui->scrollArea->setWidget(scrollwid);

    btn->setGeometry(10,5,40,100);
    btn1->setGeometry(55,5,40,100);
    btn2->setGeometry(100,5,40,100);
    btn3->setGeometry(145,5,40,100);
    btn4->setGeometry(10,110,40,100);
    btn5->setGeometry(55,110,40,100);

    signalMapper=new QSignalMapper(this);
    connect(btn,SIGNAL(clicked()),signalMapper,SLOT(map()));
    connect(btn1,SIGNAL(clicked()),signalMapper,SLOT(map()));
    connect(btn2,SIGNAL(clicked()),signalMapper,SLOT(map()));

    connect(btn3,SIGNAL(clicked()),signalMapper,SLOT(map()));
    connect(btn4,SIGNAL(clicked()),signalMapper,SLOT(map()));
    connect(btn5,SIGNAL(clicked()),signalMapper,SLOT(map()));


    signalMapper->setMapping(btn,"background3");
    signalMapper->setMapping(btn1,"background2");
    signalMapper->setMapping(btn2,"background");
    signalMapper->setMapping(btn3,"background4");
    signalMapper->setMapping(btn4,"background5");
    signalMapper->setMapping(btn5,"background6");


    connect(signalMapper,SIGNAL(mapped(QString)),this,SIGNAL(skinChange(QString)));
    connect(signalMapper,SIGNAL(mapped(QString)),this,SLOT(setBk(QString)));

}
void skinbox::setslidervalue(int value)
{
    ui->horizontalSlider->setValue(value);
}
bool skinbox::eventFilter(QObject *obj, QEvent *event)
{
    if(obj==ui->horizontalSlider)                   //判断是哪个控件
      {
          if (event->type()==QEvent::MouseButtonPress)           //判断类型
          {
              QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
              if (mouseEvent->button() == Qt::LeftButton)	//判断左键
              {
                 int dur = ui->horizontalSlider->maximum() - ui->horizontalSlider->minimum();
                 int pos = ui->horizontalSlider->minimum() + dur * ((double)mouseEvent->x() / ui->horizontalSlider->width());
                 if(pos != ui->horizontalSlider->sliderPosition())
                  {
                    ui->horizontalSlider->setValue(pos);
                  }
              }

          }

      }
    return QObject::eventFilter(obj, event);
}
void skinbox::setBk(QString picName)
{
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/image/"+picName+".png")));
    setPalette(palette);
}
skinbox::~skinbox()
{
    delete ui;
}

