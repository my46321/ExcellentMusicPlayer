/********************************************************************************
** Form generated from reading UI file 'mymaindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINDLG_H
#define UI_MYMAINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainDlg
{
public:
    QPushButton *pushButton_next;
    QPushButton *pushButton_backward;
    QPushButton *pushButton_skinbox;
    QPushButton *pushButton_add;
    QPushButton *pushButton_playmode;
    QPushButton *pushButton_search;
    QListWidget *listWidget_side;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_playpause;
    QPushButton *pushButton_location;
    QLabel *label_songscount;
    QPushButton *pushButton_mini;
    QLabel *label_musicicon;
    QPushButton *pushButton_language;
    QPushButton *pushButton;
    QLabel *label_just;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_order;
    QSlider *horizontalSlider_vol;
    QPushButton *pushButton_vol;
    QCheckBox *checkBox;
    QLabel *label_playtime;
    QLabel *label_pic;
    QSlider *horizontalSlider;
    QWidget *widget_menu;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_weather;
    QLabel *label_radio;
    QWidget *widget_search;
    QPushButton *pushButton_searchclose;
    QLabel *label_search;
    QLineEdit *lineEdit_search;
    QGroupBox *groupBox;
    QLabel *label_title;

    void setupUi(QDialog *MyMainDlg)
    {
        if (MyMainDlg->objectName().isEmpty())
            MyMainDlg->setObjectName(QStringLiteral("MyMainDlg"));
        MyMainDlg->resize(1000, 681);
        MyMainDlg->setMinimumSize(QSize(1000, 680));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        MyMainDlg->setFont(font);
        MyMainDlg->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_next = new QPushButton(MyMainDlg);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(100, 600, 32, 32));
        pushButton_next->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_next->setStyleSheet(QLatin1String("border-image: url(:/next_hover.png);\n"
"border-image: url(:/next_unhover.png);"));
        pushButton_next->setFlat(true);
        pushButton_backward = new QPushButton(MyMainDlg);
        pushButton_backward->setObjectName(QStringLiteral("pushButton_backward"));
        pushButton_backward->setGeometry(QRect(10, 600, 32, 32));
        pushButton_backward->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_backward->setStyleSheet(QLatin1String("border-image: url(:/prev_hover.png);\n"
"border-image: url(:/prev_unhover.png);"));
        pushButton_backward->setFlat(true);
        pushButton_skinbox = new QPushButton(MyMainDlg);
        pushButton_skinbox->setObjectName(QStringLiteral("pushButton_skinbox"));
        pushButton_skinbox->setGeometry(QRect(890, 5, 21, 21));
        pushButton_skinbox->setFlat(true);
        pushButton_add = new QPushButton(MyMainDlg);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(10, 340, 30, 30));
        pushButton_add->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_add->setStyleSheet(QStringLiteral(""));
        pushButton_add->setAutoDefault(true);
        pushButton_add->setFlat(true);
        pushButton_playmode = new QPushButton(MyMainDlg);
        pushButton_playmode->setObjectName(QStringLiteral("pushButton_playmode"));
        pushButton_playmode->setGeometry(QRect(0, 550, 30, 30));
        pushButton_playmode->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_playmode->setAcceptDrops(false);
        pushButton_playmode->setFlat(true);
        pushButton_search = new QPushButton(MyMainDlg);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));
        pushButton_search->setGeometry(QRect(5, 400, 30, 30));
        pushButton_search->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_search->setAutoDefault(true);
        pushButton_search->setFlat(true);
        listWidget_side = new QListWidget(MyMainDlg);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/lyric.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_side);
        __qlistwidgetitem->setIcon(icon);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(9);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget_side);
        __qlistwidgetitem1->setFont(font1);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget_side);
        __qlistwidgetitem2->setFont(font);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget_side);
        __qlistwidgetitem3->setFont(font);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget_side);
        __qlistwidgetitem4->setFont(font);
        new QListWidgetItem(listWidget_side);
        listWidget_side->setObjectName(QStringLiteral("listWidget_side"));
        listWidget_side->setGeometry(QRect(0, 90, 160, 500));
        listWidget_side->setFont(font);
        listWidget_side->setFocusPolicy(Qt::NoFocus);
        listWidget_side->setContextMenuPolicy(Qt::DefaultContextMenu);
        listWidget_side->setStyleSheet(QStringLiteral(""));
        listWidget_side->setFrameShape(QFrame::NoFrame);
        listWidget_side->setFrameShadow(QFrame::Plain);
        listWidget_side->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_side->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_side->setSelectionMode(QAbstractItemView::NoSelection);
        listWidget_side->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidget_side->setMovement(QListView::Static);
        listWidget_side->setFlow(QListView::TopToBottom);
        listWidget_side->setProperty("isWrapping", QVariant(false));
        listWidget_side->setResizeMode(QListView::Fixed);
        listWidget_side->setViewMode(QListView::ListMode);
        listWidget_side->setSortingEnabled(false);
        pushButton_exit = new QPushButton(MyMainDlg);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(980, 2, 21, 21));
        pushButton_exit->setAutoFillBackground(false);
        pushButton_exit->setIconSize(QSize(24, 24));
        pushButton_exit->setAutoDefault(true);
        pushButton_exit->setFlat(true);
        pushButton_playpause = new QPushButton(MyMainDlg);
        pushButton_playpause->setObjectName(QStringLiteral("pushButton_playpause"));
        pushButton_playpause->setGeometry(QRect(50, 600, 40, 40));
        pushButton_playpause->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_playpause->setFocusPolicy(Qt::NoFocus);
        pushButton_playpause->setToolTipDuration(-1);
        pushButton_playpause->setAutoFillBackground(false);
        pushButton_playpause->setStyleSheet(QLatin1String("border-image: url(:/pause_hover.png);\n"
"border-image: url(:/pause_unhover.png);\n"
"border-image: url(:/play_hover.png);\n"
"border-image: url(:/play_unhover.png);"));
        pushButton_playpause->setIconSize(QSize(16, 16));
        pushButton_playpause->setFlat(true);
        pushButton_location = new QPushButton(MyMainDlg);
        pushButton_location->setObjectName(QStringLiteral("pushButton_location"));
        pushButton_location->setGeometry(QRect(5, 370, 30, 30));
        pushButton_location->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_location->setFlat(true);
        label_songscount = new QLabel(MyMainDlg);
        label_songscount->setObjectName(QStringLiteral("label_songscount"));
        label_songscount->setGeometry(QRect(2, 605, 81, 16));
        label_songscount->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent;"));
        label_songscount->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_mini = new QPushButton(MyMainDlg);
        pushButton_mini->setObjectName(QStringLiteral("pushButton_mini"));
        pushButton_mini->setGeometry(QRect(950, 3, 21, 21));
        pushButton_mini->setFlat(true);
        label_musicicon = new QLabel(MyMainDlg);
        label_musicicon->setObjectName(QStringLiteral("label_musicicon"));
        label_musicicon->setGeometry(QRect(2, 6, 14, 14));
        label_musicicon->setAutoFillBackground(false);
        label_musicicon->setStyleSheet(QStringLiteral("border-image: url(:/image/music.png);"));
        label_musicicon->setTextFormat(Qt::RichText);
        label_musicicon->setPixmap(QPixmap(QString::fromUtf8(":/image/music.ico")));
        label_musicicon->setScaledContents(true);
        pushButton_language = new QPushButton(MyMainDlg);
        pushButton_language->setObjectName(QStringLiteral("pushButton_language"));
        pushButton_language->setGeometry(QRect(910, 3, 31, 23));
        pushButton_language->setFont(font);
        pushButton_language->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_language->setStyleSheet(QLatin1String("blackground:tranparent;\n"
"color: rgb(255, 255, 255);"));
        pushButton_language->setFlat(true);
        pushButton = new QPushButton(MyMainDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 3, 41, 21));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("blackground:tranparent;\n"
"color: rgb(255, 255, 255);"));
        pushButton->setFlat(true);
        label_just = new QLabel(MyMainDlg);
        label_just->setObjectName(QStringLiteral("label_just"));
        label_just->setGeometry(QRect(25, 538, 25, 12));
        label_just->setStyleSheet(QLatin1String("background:transparent;\n"
"color: rgb(255, 255, 255);"));
        groupBox_4 = new QGroupBox(MyMainDlg);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 580, 1001, 101));
        groupBox_4->setAutoFillBackground(false);
        groupBox_4->setStyleSheet(QStringLiteral("background-color: rgba(3, 3, 3, 235);border:none;"));
        groupBox_4->setFlat(true);
        pushButton_order = new QPushButton(groupBox_4);
        pushButton_order->setObjectName(QStringLiteral("pushButton_order"));
        pushButton_order->setGeometry(QRect(710, 30, 25, 25));
        pushButton_order->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_order->setAutoFillBackground(false);
        pushButton_order->setStyleSheet(QLatin1String("\n"
"border-image: url(:/image/order3_hover);border-image: url(:/image/order2_hover);border-image: url(:/image/order1_hover);\n"
""));
        pushButton_order->setFlat(false);
        horizontalSlider_vol = new QSlider(groupBox_4);
        horizontalSlider_vol->setObjectName(QStringLiteral("horizontalSlider_vol"));
        horizontalSlider_vol->setGeometry(QRect(650, 30, 59, 21));
        horizontalSlider_vol->setAutoFillBackground(false);
        horizontalSlider_vol->setStyleSheet(QStringLiteral("background:transparent;"));
        horizontalSlider_vol->setPageStep(10);
        horizontalSlider_vol->setTracking(false);
        horizontalSlider_vol->setOrientation(Qt::Horizontal);
        horizontalSlider_vol->setInvertedControls(false);
        pushButton_vol = new QPushButton(groupBox_4);
        pushButton_vol->setObjectName(QStringLiteral("pushButton_vol"));
        pushButton_vol->setEnabled(true);
        pushButton_vol->setGeometry(QRect(620, 30, 18, 18));
        pushButton_vol->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_vol->setAutoFillBackground(false);
        pushButton_vol->setStyleSheet(QString::fromUtf8("border-image: url(:image/volume.png);\n"
"border-image: url(:image/volume_step.png);\n"
"border-image: url(:image/volume_shut.png);\n"
"background\342\200\224color:(transparent)"));
        pushButton_vol->setFlat(true);
        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(740, 30, 45, 15));
        checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox->setAutoFillBackground(false);
        checkBox->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        checkBox->setTristate(false);
        label_playtime = new QLabel(groupBox_4);
        label_playtime->setObjectName(QStringLiteral("label_playtime"));
        label_playtime->setGeometry(QRect(550, 30, 61, 16));
        label_playtime->setStyleSheet(QString::fromUtf8("font: 8pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent;"));
        label_pic = new QLabel(groupBox_4);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(170, 10, 60, 60));
        label_pic->setCursor(QCursor(Qt::PointingHandCursor));
        label_pic->setStyleSheet(QLatin1String("background-color: rgba(250, 250, 250, 150);\n"
"background-image: url(:/image/musichead.ico);"));
        label_pic->setScaledContents(false);
        label_playtime->raise();
        pushButton_vol->raise();
        horizontalSlider_vol->raise();
        pushButton_order->raise();
        checkBox->raise();
        label_pic->raise();
        horizontalSlider = new QSlider(MyMainDlg);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 40, 179, 20));
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setStyleSheet(QStringLiteral("background:transparent;"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        widget_menu = new QWidget(MyMainDlg);
        widget_menu->setObjectName(QStringLiteral("widget_menu"));
        widget_menu->setGeometry(QRect(160, 90, 800, 591));
        widget_menu->setStyleSheet(QStringLiteral("background-color: rgb(148, 148, 148,50);"));
        label = new QLabel(widget_menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 100, 200, 100));
        label->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_2 = new QLabel(widget_menu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(450, 100, 100, 100));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 237, 255);"));
        label_4 = new QLabel(widget_menu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(350, 200, 100, 100));
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(245, 95, 85);"));
        label_5 = new QLabel(widget_menu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(550, 200, 100, 100));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(2, 2, 2);"));
        label_6 = new QLabel(widget_menu);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(550, 300, 200, 100));
        label_6->setStyleSheet(QStringLiteral("background-color: rgb(245, 95, 85);"));
        label_7 = new QLabel(widget_menu);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 300, 200, 100));
        label_7->setStyleSheet(QStringLiteral("background-color: rgb(245, 95, 85);"));
        label_3 = new QLabel(widget_menu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 400, 100, 100));
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(245, 95, 85);"));
        pushButton_3 = new QPushButton(widget_menu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 200, 100, 100));
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/image/pia.jpg);"));
        pushButton_3->setIconSize(QSize(100, 100));
        pushButton_weather = new QPushButton(widget_menu);
        pushButton_weather->setObjectName(QStringLiteral("pushButton_weather"));
        pushButton_weather->setGeometry(QRect(250, 200, 100, 100));
        pushButton_weather->setMouseTracking(true);
        pushButton_weather->setStyleSheet(QStringLiteral("border-image: url(:/image/yun1.jpg);"));
        label_radio = new QLabel(widget_menu);
        label_radio->setObjectName(QStringLiteral("label_radio"));
        label_radio->setGeometry(QRect(390, 310, 25, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("SimSun-ExtB"));
        font2.setPointSize(9);
        label_radio->setFont(font2);
        label_radio->setStyleSheet(QLatin1String("background:transparent;\n"
"color: rgb(255, 255, 255);"));
        widget_search = new QWidget(MyMainDlg);
        widget_search->setObjectName(QStringLiteral("widget_search"));
        widget_search->setGeometry(QRect(300, 40, 541, 50));
        widget_search->setAutoFillBackground(false);
        widget_search->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_searchclose = new QPushButton(widget_search);
        pushButton_searchclose->setObjectName(QStringLiteral("pushButton_searchclose"));
        pushButton_searchclose->setGeometry(QRect(510, 18, 16, 16));
        pushButton_searchclose->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_searchclose->setStyleSheet(QLatin1String("background:transparent;\n"
"border-image: url(:/image/searchclose.ico);"));
        pushButton_searchclose->setFlat(true);
        label_search = new QLabel(widget_search);
        label_search->setObjectName(QStringLiteral("label_search"));
        label_search->setGeometry(QRect(10, 18, 16, 16));
        label_search->setStyleSheet(QStringLiteral("border-image: url(:/image/search_16.ico);"));
        lineEdit_search = new QLineEdit(widget_search);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(110, 8, 331, 35));
        lineEdit_search->setAutoFillBackground(false);
        lineEdit_search->setStyleSheet(QLatin1String("border: 1px solid rgb(41, 57, 85);\n"
"background-color:transparent;"));
        lineEdit_search->setFrame(true);
        groupBox = new QGroupBox(MyMainDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 1001, 31));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 180);"));
        groupBox->setFlat(true);
        label_title = new QLabel(groupBox);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(25, 3, 101, 21));
        label_title->setFont(font);
        label_title->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_title->setTextFormat(Qt::RichText);
        label_title->setScaledContents(false);
        groupBox->raise();
        widget_menu->raise();
        listWidget_side->raise();
        pushButton_next->raise();
        pushButton_backward->raise();
        pushButton_skinbox->raise();
        pushButton_exit->raise();
        label_songscount->raise();
        pushButton_mini->raise();
        label_musicicon->raise();
        pushButton_language->raise();
        pushButton->raise();
        label_just->raise();
        pushButton_add->raise();
        pushButton_location->raise();
        pushButton_search->raise();
        pushButton_playmode->raise();
        pushButton_playpause->raise();
        groupBox_4->raise();
        horizontalSlider->raise();
        widget_search->raise();

        retranslateUi(MyMainDlg);

        pushButton_add->setDefault(true);
        pushButton_exit->setDefault(false);
        pushButton_vol->setDefault(false);
        pushButton_searchclose->setDefault(false);


        QMetaObject::connectSlotsByName(MyMainDlg);
    } // setupUi

    void retranslateUi(QDialog *MyMainDlg)
    {
        MyMainDlg->setWindowTitle(QApplication::translate("MyMainDlg", "MyMainDlg", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_next->setToolTip(QApplication::translate("MyMainDlg", "\344\270\213\344\270\200\346\233\262", 0));
#endif // QT_NO_TOOLTIP
        pushButton_next->setText(QString());
        pushButton_next->setShortcut(QApplication::translate("MyMainDlg", "Ctrl+N", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_backward->setToolTip(QApplication::translate("MyMainDlg", "\344\270\212\344\270\200\346\233\262", 0));
#endif // QT_NO_TOOLTIP
        pushButton_backward->setText(QString());
        pushButton_backward->setShortcut(QApplication::translate("MyMainDlg", "Ctrl+B", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_skinbox->setToolTip(QApplication::translate("MyMainDlg", "\347\232\256\350\202\244", 0));
#endif // QT_NO_TOOLTIP
        pushButton_skinbox->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_add->setToolTip(QApplication::translate("MyMainDlg", "\346\267\273\345\212\240\346\255\214\346\233\262", 0));
#endif // QT_NO_TOOLTIP
        pushButton_add->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_playmode->setToolTip(QApplication::translate("MyMainDlg", "\346\222\255\346\224\276\346\250\241\345\274\217", 0));
#endif // QT_NO_TOOLTIP
        pushButton_playmode->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_search->setToolTip(QApplication::translate("MyMainDlg", "\346\237\245\346\211\276\346\255\214\346\233\262", 0));
#endif // QT_NO_TOOLTIP
        pushButton_search->setText(QString());

        const bool __sortingEnabled = listWidget_side->isSortingEnabled();
        listWidget_side->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_side->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MyMainDlg", "\346\255\214\350\257\215", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_side->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MyMainDlg", "\346\234\254\345\234\260\345\210\227\350\241\250", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_side->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MyMainDlg", "\347\275\221\347\273\234\345\210\227\350\241\250", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_side->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MyMainDlg", "\346\255\214\346\233\262\346\220\234\347\264\242", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_side->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MyMainDlg", "\344\270\213\350\275\275\347\256\241\347\220\206", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_side->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MyMainDlg", "\346\210\221\345\226\234\346\254\242", 0));
        listWidget_side->setSortingEnabled(__sortingEnabled);

        pushButton_exit->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_playpause->setToolTip(QApplication::translate("MyMainDlg", "\346\222\255\346\224\276", 0));
#endif // QT_NO_TOOLTIP
        pushButton_playpause->setText(QString());
        pushButton_playpause->setShortcut(QApplication::translate("MyMainDlg", "Ctrl+P", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_location->setToolTip(QApplication::translate("MyMainDlg", "\346\255\214\346\233\262\345\256\232\344\275\215", 0));
#endif // QT_NO_TOOLTIP
        pushButton_location->setText(QString());
        label_songscount->setText(QApplication::translate("MyMainDlg", "\346\255\214\346\233\262\346\225\260:0", 0));
        pushButton_mini->setText(QString());
        label_musicicon->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_language->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton_language->setText(QApplication::translate("MyMainDlg", "Eng", 0));
        pushButton->setText(QApplication::translate("MyMainDlg", "\350\247\206\351\242\221", 0));
        label_just->setText(QApplication::translate("MyMainDlg", "\351\232\217\345\277\203", 0));
        groupBox_4->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_order->setToolTip(QApplication::translate("MyMainDlg", "\351\232\217\346\234\272\346\222\255\346\224\276", 0));
#endif // QT_NO_TOOLTIP
        pushButton_order->setText(QString());
        pushButton_vol->setText(QString());
        checkBox->setText(QApplication::translate("MyMainDlg", "\346\255\214\350\257\215", 0));
        label_playtime->setText(QApplication::translate("MyMainDlg", "00:00/00:00", 0));
        label_pic->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_3->setText(QString());
        pushButton_3->setText(QString());
        pushButton_weather->setText(QString());
        label_radio->setText(QApplication::translate("MyMainDlg", "\345\275\225\351\237\263", 0));
        pushButton_searchclose->setText(QString());
        label_search->setText(QString());
#ifndef QT_NO_TOOLTIP
        lineEdit_search->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineEdit_search->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit_search->setInputMask(QString());
        lineEdit_search->setText(QString());
        lineEdit_search->setPlaceholderText(QApplication::translate("MyMainDlg", "\346\237\245\346\211\276\345\210\227\350\241\250\346\255\214\346\233\262", 0));
        groupBox->setTitle(QString());
        label_title->setText(QApplication::translate("MyMainDlg", "\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250", 0));
    } // retranslateUi

};

namespace Ui {
    class MyMainDlg: public Ui_MyMainDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINDLG_H
