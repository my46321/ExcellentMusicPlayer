/********************************************************************************
** Form generated from reading UI file 'downloaddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADDIALOG_H
#define UI_DOWNLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_downloadDialog
{
public:
    QPushButton *downloadButton;
    QPushButton *downloadButton2;
    QPushButton *downloadButton3;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit_4;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line;

    void setupUi(QDialog *downloadDialog)
    {
        if (downloadDialog->objectName().isEmpty())
            downloadDialog->setObjectName(QStringLiteral("downloadDialog"));
        downloadDialog->resize(400, 300);
        downloadDialog->setMouseTracking(false);
        downloadDialog->setStyleSheet(QLatin1String("background:transparent;\n"
"background-image: url(:/image/search_background.PNG);"));
        downloadButton = new QPushButton(downloadDialog);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));
        downloadButton->setGeometry(QRect(260, 90, 75, 23));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft JhengHei UI"));
        font.setPointSize(10);
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        downloadButton->setFont(font);
        downloadButton->setStyleSheet(QStringLiteral("background:transparent;"));
        downloadButton2 = new QPushButton(downloadDialog);
        downloadButton2->setObjectName(QStringLiteral("downloadButton2"));
        downloadButton2->setGeometry(QRect(260, 130, 75, 23));
        downloadButton2->setStyleSheet(QStringLiteral("background:transparent;"));
        downloadButton3 = new QPushButton(downloadDialog);
        downloadButton3->setObjectName(QStringLiteral("downloadButton3"));
        downloadButton3->setGeometry(QRect(260, 170, 75, 23));
        downloadButton3->setStyleSheet(QStringLiteral("background:transparent;"));
        plainTextEdit = new QPlainTextEdit(downloadDialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 50, 141, 31));
        plainTextEdit->setStyleSheet(QStringLiteral("background:transparent;"));
        plainTextEdit_2 = new QPlainTextEdit(downloadDialog);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(60, 90, 191, 31));
        plainTextEdit_2->setStyleSheet(QStringLiteral("background:transparent;"));
        plainTextEdit_3 = new QPlainTextEdit(downloadDialog);
        plainTextEdit_3->setObjectName(QStringLiteral("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(60, 130, 191, 31));
        plainTextEdit_3->setStyleSheet(QStringLiteral("background:transparent;"));
        plainTextEdit_4 = new QPlainTextEdit(downloadDialog);
        plainTextEdit_4->setObjectName(QStringLiteral("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(60, 170, 191, 31));
        plainTextEdit_4->setStyleSheet(QStringLiteral("background:transparent;"));
        progressBar = new QProgressBar(downloadDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(60, 210, 311, 23));
        progressBar->setValue(24);
        pushButton = new QPushButton(downloadDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 0, 21, 23));
        pushButton->setStyleSheet(QStringLiteral("background-image: url(:/image/searchclose.ico);"));
        pushButton_2 = new QPushButton(downloadDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(354, 0, 21, 23));
        pushButton_2->setStyleSheet(QLatin1String("\n"
"background-image: url(:/image/minimize.png);"));
        line = new QFrame(downloadDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(-3, 25, 411, 2));
        line->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(downloadDialog);

        QMetaObject::connectSlotsByName(downloadDialog);
    } // setupUi

    void retranslateUi(QDialog *downloadDialog)
    {
        downloadDialog->setWindowTitle(QApplication::translate("downloadDialog", "Dialog", 0));
        downloadButton->setText(QApplication::translate("downloadDialog", "\344\270\213\350\275\275", 0));
        downloadButton2->setText(QApplication::translate("downloadDialog", "\344\270\213\350\275\275", 0));
        downloadButton3->setText(QApplication::translate("downloadDialog", "\344\270\213\350\275\275", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class downloadDialog: public Ui_downloadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADDIALOG_H
