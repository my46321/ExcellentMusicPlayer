/********************************************************************************
** Form generated from reading UI file 'skinbox.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINBOX_H
#define UI_SKINBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_skinbox
{
public:
    QWidget *widget;
    QSlider *horizontalSlider;
    QLabel *label;
    QFrame *line_2;
    QFrame *line_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *skinbox)
    {
        if (skinbox->objectName().isEmpty())
            skinbox->setObjectName(QStringLiteral("skinbox"));
        skinbox->resize(250, 285);
        skinbox->setMinimumSize(QSize(250, 285));
        skinbox->setMaximumSize(QSize(250, 285));
        skinbox->setStyleSheet(QStringLiteral("QAbstractScrollArea"));
        widget = new QWidget(skinbox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 250, 285));
        widget->setMinimumSize(QSize(250, 285));
        widget->setMaximumSize(QSize(250, 285));
        widget->setStyleSheet(QStringLiteral("border-image: url(:/image/skinbg.png);border-image: url(:/image/skinbg.png);"));
        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(109, 240, 101, 20));
        horizontalSlider->setStyleSheet(QStringLiteral(""));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(39, 240, 65, 16));
        label->setStyleSheet(QLatin1String("color: rgb(85, 170, 255);\n"
"border-image:NULL;"));
        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 30, 210, 3));
        line_2->setStyleSheet(QStringLiteral("border-image:NUL"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(widget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(20, 225, 210, 3));
        line_3->setStyleSheet(QStringLiteral("border-image:NUL"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 35, 210, 185));
        scrollArea->setStyleSheet(QLatin1String("QWidget{background:white;border-image:NULL}\n"
"QScrollBar{background:white; width: 10px;margin: 10px 0 10px 0;}\n"
"QScrollBar::handle{background:rgb(165,165,165); border:0px solid transparent; border-radius:4px;}\n"
"QScrollBar::handle:hover{background:rgb(77,77,77); border-radius:4px;}\n"
"QScrollBar::add-line:vertical {background:gray;border-image: url(:/image/down.png); height: 10px; subcontrol-position: bottom;subcontrol-origin: margin;}\n"
"QScrollBar::sub-line:vertical {background:gray;border-image: url(:/image/top.png);height: 10px;subcontrol-position: top;subcontrol-origin: margin;}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {background:white;}\n"
"\n"
"\n"
""));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -60, 198, 400));
        scrollAreaWidgetContents->setMinimumSize(QSize(100, 400));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(skinbox);

        QMetaObject::connectSlotsByName(skinbox);
    } // setupUi

    void retranslateUi(QDialog *skinbox)
    {
        skinbox->setWindowTitle(QApplication::translate("skinbox", "Dialog", 0));
        label->setText(QApplication::translate("skinbox", "\345\210\227\350\241\250\351\200\217\346\230\216\345\272\246:", 0));
    } // retranslateUi

};

namespace Ui {
    class skinbox: public Ui_skinbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINBOX_H
