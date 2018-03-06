/********************************************************************************
** Form generated from reading UI file 'downloadinfodlg.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADINFODLG_H
#define UI_DOWNLOADINFODLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_downloadinfodlg
{
public:
    QWidget *widget;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_filesave;
    QPushButton *pushButton;
    QPushButton *pushButton_exit;
    QLabel *label;

    void setupUi(QDialog *downloadinfodlg)
    {
        if (downloadinfodlg->objectName().isEmpty())
            downloadinfodlg->setObjectName(QStringLiteral("downloadinfodlg"));
        downloadinfodlg->resize(250, 200);
        widget = new QWidget(downloadinfodlg);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(1, 25, 248, 174));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 0, 250, 1));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(5, 30, 51, 15));
        label_2->setStyleSheet(QStringLiteral("color: gray;"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(5, 115, 51, 16));
        label_3->setStyleSheet(QStringLiteral("color: gray;"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 115, 131, 20));
        lineEdit->setStyleSheet(QLatin1String("color: rgb(191, 191, 191);\n"
"border: 1px solid gray;"));
        pushButton_filesave = new QPushButton(widget);
        pushButton_filesave->setObjectName(QStringLiteral("pushButton_filesave"));
        pushButton_filesave->setGeometry(QRect(192, 115, 55, 20));
        pushButton_filesave->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_filesave->setStyleSheet(QLatin1String("background-color: rgb(128, 183, 241);\n"
"color: rgb(255, 255, 255);\n"
"border: NULL;"));
        pushButton_filesave->setFlat(false);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 140, 80, 30));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);background-color: rgb(128, 183, 241);border:NULL;border-radius:5px;padding:2px 4px;"));
        pushButton->setAutoDefault(true);
        pushButton_exit = new QPushButton(downloadinfodlg);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(228, 2, 20, 20));
        label = new QLabel(downloadinfodlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(5, 1, 191, 24));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(downloadinfodlg);

        QMetaObject::connectSlotsByName(downloadinfodlg);
    } // setupUi

    void retranslateUi(QDialog *downloadinfodlg)
    {
        downloadinfodlg->setWindowTitle(QApplication::translate("downloadinfodlg", "Dialog", 0));
        label_2->setText(QApplication::translate("downloadinfodlg", "\350\265\204\346\272\220\351\200\211\346\213\251:", 0));
        label_3->setText(QApplication::translate("downloadinfodlg", "\345\202\250\345\255\230\344\275\215\347\275\256:", 0));
        lineEdit->setText(QApplication::translate("downloadinfodlg", "D:/ExcellentMusic", 0));
        pushButton_filesave->setText(QApplication::translate("downloadinfodlg", "\346\233\264\346\224\271\347\233\256\345\275\225", 0));
        pushButton->setText(QApplication::translate("downloadinfodlg", "\344\270\213\350\275\275", 0));
        pushButton_exit->setText(QString());
        label->setText(QApplication::translate("downloadinfodlg", "\346\255\214\346\233\262\344\270\213\350\275\275", 0));
    } // retranslateUi

};

namespace Ui {
    class downloadinfodlg: public Ui_downloadinfodlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADINFODLG_H
