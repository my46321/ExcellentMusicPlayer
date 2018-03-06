/********************************************************************************
** Form generated from reading UI file 'qtweather.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWEATHER_H
#define UI_QTWEATHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWeather
{
public:
    QPushButton *searchBtn;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *currentWeather;
    QLabel *currentWeather_2;
    QFrame *frame;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_3;
    QLineEdit *lineEdit;

    void setupUi(QWidget *QtWeather)
    {
        if (QtWeather->objectName().isEmpty())
            QtWeather->setObjectName(QStringLiteral("QtWeather"));
        QtWeather->resize(733, 445);
        QtWeather->setMouseTracking(true);
        searchBtn = new QPushButton(QtWeather);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setGeometry(QRect(640, 100, 0, 0));
        searchBtn->setStyleSheet(QStringLiteral("color: rgb(0, 85, 255);"));
        groupBox = new QGroupBox(QtWeather);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 621, 441));
        QPalette palette;
        QBrush brush(QColor(0, 179, 140, 180));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        groupBox->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        groupBox->setFont(font);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QStringLiteral("color: rgb(0, 179, 140,180);"));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(120, 280, 441, 121));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        textBrowser->setFont(font1);
        textBrowser->setStyleSheet(QLatin1String("background-color: rgb(130, 171, 186);\n"
"\n"
"\n"
"\n"
"color: rgb(255, 242, 242);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 260, 111, 21));
        label_4->setFont(font);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 120, 241, 141));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        label_6->setFont(font2);
        label_6->setFocusPolicy(Qt::ClickFocus);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setStyleSheet(QStringLiteral("background-color: rgb(0, 179, 140);"));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setFrameShadow(QFrame::Raised);
        label_6->setTextFormat(Qt::AutoText);
        label_6->setScaledContents(false);
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        label_6->setWordWrap(false);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(310, 120, 241, 141));
        label_7->setFont(font);
        label_7->setFocusPolicy(Qt::WheelFocus);
        label_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 168, 115);"));
        currentWeather = new QLabel(groupBox);
        currentWeather->setObjectName(QStringLiteral("currentWeather"));
        currentWeather->setGeometry(QRect(50, 120, 241, 141));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        currentWeather->setFont(font3);
        currentWeather->setFocusPolicy(Qt::StrongFocus);
        currentWeather->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"background-color: rgb(0, 179, 140);"));
        currentWeather_2 = new QLabel(groupBox);
        currentWeather_2->setObjectName(QStringLiteral("currentWeather_2"));
        currentWeather_2->setGeometry(QRect(310, 120, 241, 141));
        currentWeather_2->setFont(font3);
        currentWeather_2->setFocusPolicy(Qt::StrongFocus);
        currentWeather_2->setContextMenuPolicy(Qt::PreventContextMenu);
        currentWeather_2->setStyleSheet(QLatin1String("color:rgb(255,255,255);\n"
"background-color: rgb(255, 168, 115);\n"
""));
        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(50, 20, 351, 91));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(73, 90, 128);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        lcdNumber = new QLCDNumber(frame);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(50, 10, 291, 71));
        QFont font4;
        font4.setFamily(QStringLiteral("04b_21"));
        font4.setPointSize(6);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        lcdNumber->setFont(font4);
        lcdNumber->setStyleSheet(QLatin1String("background-color:transparent;\n"
"font: 9pt \"Ebrima\";\n"
"font:5px;\n"
"font: 6pt \"04b_21\";\n"
"color:(55,62,64);"));
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Outline);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 20, 141, 91));
        QFont font5;
        font5.setFamily(QStringLiteral("Malgun Gothic"));
        font5.setPointSize(24);
        label->setFont(font5);
        label->setStyleSheet(QLatin1String("background-color: rgb(0, 176, 240);\n"
"color: rgb(255, 255, 255);"));
        label->setFrameShadow(QFrame::Raised);
        label->setLineWidth(4);
        label->setMidLineWidth(4);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 269, 380, 1));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 143, 143);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(59, 114, 521, 1));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(143, 143, 143);"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 13, 350, 1));
        label_8->setStyleSheet(QStringLiteral("background-color: rgb(98, 217, 190);"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(560, 115, 1, 155));
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(143, 143, 143);"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(579, 14, 1, 101));
        label_10->setStyleSheet(QLatin1String("background-color: rgb(143, 143, 143);\n"
""));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(63, 290, 51, 111));
        label_3->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 176, 240);"));
        label_6->raise();
        label_7->raise();
        currentWeather_2->raise();
        textBrowser->raise();
        label_4->raise();
        currentWeather->raise();
        frame->raise();
        label->raise();
        label_2->raise();
        label_5->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_3->raise();
        lineEdit = new QLineEdit(QtWeather);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(340, 30, 0, 0));
        lineEdit->setStyleSheet(QStringLiteral("background-color:transparent;"));
        lineEdit->raise();
        searchBtn->raise();
        groupBox->raise();

        retranslateUi(QtWeather);

        QMetaObject::connectSlotsByName(QtWeather);
    } // setupUi

    void retranslateUi(QWidget *QtWeather)
    {
        QtWeather->setWindowTitle(QApplication::translate("QtWeather", "QtWeather", 0));
        searchBtn->setText(QApplication::translate("QtWeather", "\346\237\245\350\257\242", 0));
        groupBox->setTitle(QApplication::translate("QtWeather", "\345\275\223\345\211\215\346\237\245\350\257\242\345\237\216\345\270\202\357\274\232", 0));
        label_4->setText(QApplication::translate("QtWeather", "<html><head/><body><p><span style=\" color:#00b38c;\">\347\224\237\346\264\273\346\214\207\346\225\260/\345\207\272\350\241\214\346\217\220\351\206\222\357\274\232</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("QtWeather", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">\345\256\236\346\227\266\345\244\251\346\260\224\346\225\260\346\215\256</span></p><p align=\"center\"><br/></p></body></html>", 0));
        label_7->setText(QApplication::translate("QtWeather", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#ffffff;\">\346\230\216\345\244\251\345\244\251\346\260\224\346\225\260\346\215\256</span></p></body></html>", 0));
        currentWeather->setText(QString());
        currentWeather_2->setText(QString());
        label->setText(QApplication::translate("QtWeather", "TIME", 0));
        label_2->setText(QApplication::translate("QtWeather", "TextLabel", 0));
        label_5->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QApplication::translate("QtWeather", "TextLabel", 0));
        label_3->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("QtWeather", "\350\276\223\345\205\245\345\234\260\345\235\200\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class QtWeather: public Ui_QtWeather {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWEATHER_H
