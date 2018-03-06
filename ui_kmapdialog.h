/*

    MIDI Virtual Piano Keyboard
    Copyright (C) 2008-2013, Pedro Lopez-Cabanillas

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; If not, see http://www.gnu.org/licenses/
 
*/

/********************************************************************************
** Form generated from reading UI file 'kmapdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KMAPDIALOG_H
#define UI_KMAPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_KMapDialogClass
{
public:
    QGridLayout *gridLayout;
    QLabel *labelMapName;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *KMapDialogClass)
    {
        if (KMapDialogClass->objectName().isEmpty())
            KMapDialogClass->setObjectName(QStringLiteral("KMapDialogClass"));
        KMapDialogClass->resize(255, 382);
        QIcon icon;
        icon.addFile(QStringLiteral(":/vpiano/vmpk_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        KMapDialogClass->setWindowIcon(icon);
        gridLayout = new QGridLayout(KMapDialogClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelMapName = new QLabel(KMapDialogClass);
        labelMapName->setObjectName(QStringLiteral("labelMapName"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        labelMapName->setFont(font);
        labelMapName->setFrameShape(QFrame::StyledPanel);
        labelMapName->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(labelMapName, 0, 0, 1, 2);

        tableWidget = new QTableWidget(KMapDialogClass);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 128)
            tableWidget->setRowCount(128);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(19, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(20, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(21, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(22, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(23, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(24, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(25, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(26, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(27, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(28, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(29, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(30, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(31, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(32, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(33, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(34, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(35, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(36, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(37, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(38, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(39, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(40, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(41, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(42, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(43, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(44, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(45, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(46, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(47, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(48, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(49, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(50, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(51, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(52, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(53, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(54, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(55, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(56, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(57, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(58, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(59, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(60, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(61, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(62, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(63, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(64, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(65, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(66, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(67, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(68, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(69, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(70, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(71, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(72, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(73, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(74, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(75, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(76, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(77, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(78, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(79, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(80, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(81, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(82, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(83, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(84, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(85, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(86, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(87, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(88, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(89, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(90, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(91, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(92, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(93, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(94, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(95, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(96, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(97, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(98, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(99, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(100, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(101, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(102, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(103, __qtablewidgetitem104);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(104, __qtablewidgetitem105);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(105, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(106, __qtablewidgetitem107);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(107, __qtablewidgetitem108);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(108, __qtablewidgetitem109);
        QTableWidgetItem *__qtablewidgetitem110 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(109, __qtablewidgetitem110);
        QTableWidgetItem *__qtablewidgetitem111 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(110, __qtablewidgetitem111);
        QTableWidgetItem *__qtablewidgetitem112 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(111, __qtablewidgetitem112);
        QTableWidgetItem *__qtablewidgetitem113 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(112, __qtablewidgetitem113);
        QTableWidgetItem *__qtablewidgetitem114 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(113, __qtablewidgetitem114);
        QTableWidgetItem *__qtablewidgetitem115 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(114, __qtablewidgetitem115);
        QTableWidgetItem *__qtablewidgetitem116 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(115, __qtablewidgetitem116);
        QTableWidgetItem *__qtablewidgetitem117 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(116, __qtablewidgetitem117);
        QTableWidgetItem *__qtablewidgetitem118 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(117, __qtablewidgetitem118);
        QTableWidgetItem *__qtablewidgetitem119 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(118, __qtablewidgetitem119);
        QTableWidgetItem *__qtablewidgetitem120 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(119, __qtablewidgetitem120);
        QTableWidgetItem *__qtablewidgetitem121 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(120, __qtablewidgetitem121);
        QTableWidgetItem *__qtablewidgetitem122 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(121, __qtablewidgetitem122);
        QTableWidgetItem *__qtablewidgetitem123 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(122, __qtablewidgetitem123);
        QTableWidgetItem *__qtablewidgetitem124 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(123, __qtablewidgetitem124);
        QTableWidgetItem *__qtablewidgetitem125 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(124, __qtablewidgetitem125);
        QTableWidgetItem *__qtablewidgetitem126 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(125, __qtablewidgetitem126);
        QTableWidgetItem *__qtablewidgetitem127 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(126, __qtablewidgetitem127);
        QTableWidgetItem *__qtablewidgetitem128 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(127, __qtablewidgetitem128);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(150, 0));
        tableWidget->setRowCount(128);

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(KMapDialogClass);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);


        retranslateUi(KMapDialogClass);
        QObject::connect(buttonBox, SIGNAL(accepted()), KMapDialogClass, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), KMapDialogClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(KMapDialogClass);
    } // setupUi

    void retranslateUi(QDialog *KMapDialogClass)
    {
        KMapDialogClass->setWindowTitle(QApplication::translate("KMapDialogClass", "Key Map Editor", 0));
#ifndef QT_NO_WHATSTHIS
        labelMapName->setWhatsThis(QApplication::translate("KMapDialogClass", "This box displays the name of the current mapping file", 0));
#endif // QT_NO_WHATSTHIS
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("KMapDialogClass", "Key", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("KMapDialogClass", "0", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("KMapDialogClass", "1", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("KMapDialogClass", "2", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("KMapDialogClass", "3", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("KMapDialogClass", "4", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("KMapDialogClass", "5", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("KMapDialogClass", "6", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QApplication::translate("KMapDialogClass", "7", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QApplication::translate("KMapDialogClass", "8", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem10->setText(QApplication::translate("KMapDialogClass", "9", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem11->setText(QApplication::translate("KMapDialogClass", "10", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem12->setText(QApplication::translate("KMapDialogClass", "11", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem13->setText(QApplication::translate("KMapDialogClass", "12", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem14->setText(QApplication::translate("KMapDialogClass", "13", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem15->setText(QApplication::translate("KMapDialogClass", "14", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem16->setText(QApplication::translate("KMapDialogClass", "15", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem17->setText(QApplication::translate("KMapDialogClass", "16", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem18->setText(QApplication::translate("KMapDialogClass", "17", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem19->setText(QApplication::translate("KMapDialogClass", "18", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem20->setText(QApplication::translate("KMapDialogClass", "19", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->verticalHeaderItem(20);
        ___qtablewidgetitem21->setText(QApplication::translate("KMapDialogClass", "20", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->verticalHeaderItem(21);
        ___qtablewidgetitem22->setText(QApplication::translate("KMapDialogClass", "21", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->verticalHeaderItem(22);
        ___qtablewidgetitem23->setText(QApplication::translate("KMapDialogClass", "22", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->verticalHeaderItem(23);
        ___qtablewidgetitem24->setText(QApplication::translate("KMapDialogClass", "23", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->verticalHeaderItem(24);
        ___qtablewidgetitem25->setText(QApplication::translate("KMapDialogClass", "24", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->verticalHeaderItem(25);
        ___qtablewidgetitem26->setText(QApplication::translate("KMapDialogClass", "25", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->verticalHeaderItem(26);
        ___qtablewidgetitem27->setText(QApplication::translate("KMapDialogClass", "26", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->verticalHeaderItem(27);
        ___qtablewidgetitem28->setText(QApplication::translate("KMapDialogClass", "27", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->verticalHeaderItem(28);
        ___qtablewidgetitem29->setText(QApplication::translate("KMapDialogClass", "28", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->verticalHeaderItem(29);
        ___qtablewidgetitem30->setText(QApplication::translate("KMapDialogClass", "29", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->verticalHeaderItem(30);
        ___qtablewidgetitem31->setText(QApplication::translate("KMapDialogClass", "30", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->verticalHeaderItem(31);
        ___qtablewidgetitem32->setText(QApplication::translate("KMapDialogClass", "31", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->verticalHeaderItem(32);
        ___qtablewidgetitem33->setText(QApplication::translate("KMapDialogClass", "32", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->verticalHeaderItem(33);
        ___qtablewidgetitem34->setText(QApplication::translate("KMapDialogClass", "33", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->verticalHeaderItem(34);
        ___qtablewidgetitem35->setText(QApplication::translate("KMapDialogClass", "34", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->verticalHeaderItem(35);
        ___qtablewidgetitem36->setText(QApplication::translate("KMapDialogClass", "35", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->verticalHeaderItem(36);
        ___qtablewidgetitem37->setText(QApplication::translate("KMapDialogClass", "36", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->verticalHeaderItem(37);
        ___qtablewidgetitem38->setText(QApplication::translate("KMapDialogClass", "37", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->verticalHeaderItem(38);
        ___qtablewidgetitem39->setText(QApplication::translate("KMapDialogClass", "38", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->verticalHeaderItem(39);
        ___qtablewidgetitem40->setText(QApplication::translate("KMapDialogClass", "39", 0));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->verticalHeaderItem(40);
        ___qtablewidgetitem41->setText(QApplication::translate("KMapDialogClass", "40", 0));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->verticalHeaderItem(41);
        ___qtablewidgetitem42->setText(QApplication::translate("KMapDialogClass", "41", 0));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->verticalHeaderItem(42);
        ___qtablewidgetitem43->setText(QApplication::translate("KMapDialogClass", "42", 0));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->verticalHeaderItem(43);
        ___qtablewidgetitem44->setText(QApplication::translate("KMapDialogClass", "43", 0));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->verticalHeaderItem(44);
        ___qtablewidgetitem45->setText(QApplication::translate("KMapDialogClass", "44", 0));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->verticalHeaderItem(45);
        ___qtablewidgetitem46->setText(QApplication::translate("KMapDialogClass", "45", 0));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->verticalHeaderItem(46);
        ___qtablewidgetitem47->setText(QApplication::translate("KMapDialogClass", "46", 0));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->verticalHeaderItem(47);
        ___qtablewidgetitem48->setText(QApplication::translate("KMapDialogClass", "47", 0));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->verticalHeaderItem(48);
        ___qtablewidgetitem49->setText(QApplication::translate("KMapDialogClass", "48", 0));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->verticalHeaderItem(49);
        ___qtablewidgetitem50->setText(QApplication::translate("KMapDialogClass", "49", 0));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->verticalHeaderItem(50);
        ___qtablewidgetitem51->setText(QApplication::translate("KMapDialogClass", "50", 0));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->verticalHeaderItem(51);
        ___qtablewidgetitem52->setText(QApplication::translate("KMapDialogClass", "51", 0));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->verticalHeaderItem(52);
        ___qtablewidgetitem53->setText(QApplication::translate("KMapDialogClass", "52", 0));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->verticalHeaderItem(53);
        ___qtablewidgetitem54->setText(QApplication::translate("KMapDialogClass", "53", 0));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget->verticalHeaderItem(54);
        ___qtablewidgetitem55->setText(QApplication::translate("KMapDialogClass", "54", 0));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget->verticalHeaderItem(55);
        ___qtablewidgetitem56->setText(QApplication::translate("KMapDialogClass", "55", 0));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget->verticalHeaderItem(56);
        ___qtablewidgetitem57->setText(QApplication::translate("KMapDialogClass", "56", 0));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget->verticalHeaderItem(57);
        ___qtablewidgetitem58->setText(QApplication::translate("KMapDialogClass", "57", 0));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget->verticalHeaderItem(58);
        ___qtablewidgetitem59->setText(QApplication::translate("KMapDialogClass", "58", 0));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget->verticalHeaderItem(59);
        ___qtablewidgetitem60->setText(QApplication::translate("KMapDialogClass", "59", 0));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget->verticalHeaderItem(60);
        ___qtablewidgetitem61->setText(QApplication::translate("KMapDialogClass", "60", 0));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget->verticalHeaderItem(61);
        ___qtablewidgetitem62->setText(QApplication::translate("KMapDialogClass", "61", 0));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget->verticalHeaderItem(62);
        ___qtablewidgetitem63->setText(QApplication::translate("KMapDialogClass", "62", 0));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget->verticalHeaderItem(63);
        ___qtablewidgetitem64->setText(QApplication::translate("KMapDialogClass", "63", 0));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget->verticalHeaderItem(64);
        ___qtablewidgetitem65->setText(QApplication::translate("KMapDialogClass", "64", 0));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget->verticalHeaderItem(65);
        ___qtablewidgetitem66->setText(QApplication::translate("KMapDialogClass", "65", 0));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget->verticalHeaderItem(66);
        ___qtablewidgetitem67->setText(QApplication::translate("KMapDialogClass", "66", 0));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget->verticalHeaderItem(67);
        ___qtablewidgetitem68->setText(QApplication::translate("KMapDialogClass", "67", 0));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget->verticalHeaderItem(68);
        ___qtablewidgetitem69->setText(QApplication::translate("KMapDialogClass", "68", 0));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidget->verticalHeaderItem(69);
        ___qtablewidgetitem70->setText(QApplication::translate("KMapDialogClass", "69", 0));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidget->verticalHeaderItem(70);
        ___qtablewidgetitem71->setText(QApplication::translate("KMapDialogClass", "70", 0));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidget->verticalHeaderItem(71);
        ___qtablewidgetitem72->setText(QApplication::translate("KMapDialogClass", "71", 0));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidget->verticalHeaderItem(72);
        ___qtablewidgetitem73->setText(QApplication::translate("KMapDialogClass", "72", 0));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidget->verticalHeaderItem(73);
        ___qtablewidgetitem74->setText(QApplication::translate("KMapDialogClass", "73", 0));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidget->verticalHeaderItem(74);
        ___qtablewidgetitem75->setText(QApplication::translate("KMapDialogClass", "74", 0));
        QTableWidgetItem *___qtablewidgetitem76 = tableWidget->verticalHeaderItem(75);
        ___qtablewidgetitem76->setText(QApplication::translate("KMapDialogClass", "75", 0));
        QTableWidgetItem *___qtablewidgetitem77 = tableWidget->verticalHeaderItem(76);
        ___qtablewidgetitem77->setText(QApplication::translate("KMapDialogClass", "76", 0));
        QTableWidgetItem *___qtablewidgetitem78 = tableWidget->verticalHeaderItem(77);
        ___qtablewidgetitem78->setText(QApplication::translate("KMapDialogClass", "77", 0));
        QTableWidgetItem *___qtablewidgetitem79 = tableWidget->verticalHeaderItem(78);
        ___qtablewidgetitem79->setText(QApplication::translate("KMapDialogClass", "78", 0));
        QTableWidgetItem *___qtablewidgetitem80 = tableWidget->verticalHeaderItem(79);
        ___qtablewidgetitem80->setText(QApplication::translate("KMapDialogClass", "79", 0));
        QTableWidgetItem *___qtablewidgetitem81 = tableWidget->verticalHeaderItem(80);
        ___qtablewidgetitem81->setText(QApplication::translate("KMapDialogClass", "80", 0));
        QTableWidgetItem *___qtablewidgetitem82 = tableWidget->verticalHeaderItem(81);
        ___qtablewidgetitem82->setText(QApplication::translate("KMapDialogClass", "81", 0));
        QTableWidgetItem *___qtablewidgetitem83 = tableWidget->verticalHeaderItem(82);
        ___qtablewidgetitem83->setText(QApplication::translate("KMapDialogClass", "82", 0));
        QTableWidgetItem *___qtablewidgetitem84 = tableWidget->verticalHeaderItem(83);
        ___qtablewidgetitem84->setText(QApplication::translate("KMapDialogClass", "83", 0));
        QTableWidgetItem *___qtablewidgetitem85 = tableWidget->verticalHeaderItem(84);
        ___qtablewidgetitem85->setText(QApplication::translate("KMapDialogClass", "84", 0));
        QTableWidgetItem *___qtablewidgetitem86 = tableWidget->verticalHeaderItem(85);
        ___qtablewidgetitem86->setText(QApplication::translate("KMapDialogClass", "85", 0));
        QTableWidgetItem *___qtablewidgetitem87 = tableWidget->verticalHeaderItem(86);
        ___qtablewidgetitem87->setText(QApplication::translate("KMapDialogClass", "86", 0));
        QTableWidgetItem *___qtablewidgetitem88 = tableWidget->verticalHeaderItem(87);
        ___qtablewidgetitem88->setText(QApplication::translate("KMapDialogClass", "87", 0));
        QTableWidgetItem *___qtablewidgetitem89 = tableWidget->verticalHeaderItem(88);
        ___qtablewidgetitem89->setText(QApplication::translate("KMapDialogClass", "88", 0));
        QTableWidgetItem *___qtablewidgetitem90 = tableWidget->verticalHeaderItem(89);
        ___qtablewidgetitem90->setText(QApplication::translate("KMapDialogClass", "89", 0));
        QTableWidgetItem *___qtablewidgetitem91 = tableWidget->verticalHeaderItem(90);
        ___qtablewidgetitem91->setText(QApplication::translate("KMapDialogClass", "90", 0));
        QTableWidgetItem *___qtablewidgetitem92 = tableWidget->verticalHeaderItem(91);
        ___qtablewidgetitem92->setText(QApplication::translate("KMapDialogClass", "91", 0));
        QTableWidgetItem *___qtablewidgetitem93 = tableWidget->verticalHeaderItem(92);
        ___qtablewidgetitem93->setText(QApplication::translate("KMapDialogClass", "92", 0));
        QTableWidgetItem *___qtablewidgetitem94 = tableWidget->verticalHeaderItem(93);
        ___qtablewidgetitem94->setText(QApplication::translate("KMapDialogClass", "93", 0));
        QTableWidgetItem *___qtablewidgetitem95 = tableWidget->verticalHeaderItem(94);
        ___qtablewidgetitem95->setText(QApplication::translate("KMapDialogClass", "94", 0));
        QTableWidgetItem *___qtablewidgetitem96 = tableWidget->verticalHeaderItem(95);
        ___qtablewidgetitem96->setText(QApplication::translate("KMapDialogClass", "95", 0));
        QTableWidgetItem *___qtablewidgetitem97 = tableWidget->verticalHeaderItem(96);
        ___qtablewidgetitem97->setText(QApplication::translate("KMapDialogClass", "96", 0));
        QTableWidgetItem *___qtablewidgetitem98 = tableWidget->verticalHeaderItem(97);
        ___qtablewidgetitem98->setText(QApplication::translate("KMapDialogClass", "97", 0));
        QTableWidgetItem *___qtablewidgetitem99 = tableWidget->verticalHeaderItem(98);
        ___qtablewidgetitem99->setText(QApplication::translate("KMapDialogClass", "98", 0));
        QTableWidgetItem *___qtablewidgetitem100 = tableWidget->verticalHeaderItem(99);
        ___qtablewidgetitem100->setText(QApplication::translate("KMapDialogClass", "99", 0));
        QTableWidgetItem *___qtablewidgetitem101 = tableWidget->verticalHeaderItem(100);
        ___qtablewidgetitem101->setText(QApplication::translate("KMapDialogClass", "100", 0));
        QTableWidgetItem *___qtablewidgetitem102 = tableWidget->verticalHeaderItem(101);
        ___qtablewidgetitem102->setText(QApplication::translate("KMapDialogClass", "101", 0));
        QTableWidgetItem *___qtablewidgetitem103 = tableWidget->verticalHeaderItem(102);
        ___qtablewidgetitem103->setText(QApplication::translate("KMapDialogClass", "102", 0));
        QTableWidgetItem *___qtablewidgetitem104 = tableWidget->verticalHeaderItem(103);
        ___qtablewidgetitem104->setText(QApplication::translate("KMapDialogClass", "103", 0));
        QTableWidgetItem *___qtablewidgetitem105 = tableWidget->verticalHeaderItem(104);
        ___qtablewidgetitem105->setText(QApplication::translate("KMapDialogClass", "104", 0));
        QTableWidgetItem *___qtablewidgetitem106 = tableWidget->verticalHeaderItem(105);
        ___qtablewidgetitem106->setText(QApplication::translate("KMapDialogClass", "105", 0));
        QTableWidgetItem *___qtablewidgetitem107 = tableWidget->verticalHeaderItem(106);
        ___qtablewidgetitem107->setText(QApplication::translate("KMapDialogClass", "106", 0));
        QTableWidgetItem *___qtablewidgetitem108 = tableWidget->verticalHeaderItem(107);
        ___qtablewidgetitem108->setText(QApplication::translate("KMapDialogClass", "107", 0));
        QTableWidgetItem *___qtablewidgetitem109 = tableWidget->verticalHeaderItem(108);
        ___qtablewidgetitem109->setText(QApplication::translate("KMapDialogClass", "108", 0));
        QTableWidgetItem *___qtablewidgetitem110 = tableWidget->verticalHeaderItem(109);
        ___qtablewidgetitem110->setText(QApplication::translate("KMapDialogClass", "109", 0));
        QTableWidgetItem *___qtablewidgetitem111 = tableWidget->verticalHeaderItem(110);
        ___qtablewidgetitem111->setText(QApplication::translate("KMapDialogClass", "110", 0));
        QTableWidgetItem *___qtablewidgetitem112 = tableWidget->verticalHeaderItem(111);
        ___qtablewidgetitem112->setText(QApplication::translate("KMapDialogClass", "111", 0));
        QTableWidgetItem *___qtablewidgetitem113 = tableWidget->verticalHeaderItem(112);
        ___qtablewidgetitem113->setText(QApplication::translate("KMapDialogClass", "112", 0));
        QTableWidgetItem *___qtablewidgetitem114 = tableWidget->verticalHeaderItem(113);
        ___qtablewidgetitem114->setText(QApplication::translate("KMapDialogClass", "113", 0));
        QTableWidgetItem *___qtablewidgetitem115 = tableWidget->verticalHeaderItem(114);
        ___qtablewidgetitem115->setText(QApplication::translate("KMapDialogClass", "114", 0));
        QTableWidgetItem *___qtablewidgetitem116 = tableWidget->verticalHeaderItem(115);
        ___qtablewidgetitem116->setText(QApplication::translate("KMapDialogClass", "115", 0));
        QTableWidgetItem *___qtablewidgetitem117 = tableWidget->verticalHeaderItem(116);
        ___qtablewidgetitem117->setText(QApplication::translate("KMapDialogClass", "116", 0));
        QTableWidgetItem *___qtablewidgetitem118 = tableWidget->verticalHeaderItem(117);
        ___qtablewidgetitem118->setText(QApplication::translate("KMapDialogClass", "117", 0));
        QTableWidgetItem *___qtablewidgetitem119 = tableWidget->verticalHeaderItem(118);
        ___qtablewidgetitem119->setText(QApplication::translate("KMapDialogClass", "118", 0));
        QTableWidgetItem *___qtablewidgetitem120 = tableWidget->verticalHeaderItem(119);
        ___qtablewidgetitem120->setText(QApplication::translate("KMapDialogClass", "119", 0));
        QTableWidgetItem *___qtablewidgetitem121 = tableWidget->verticalHeaderItem(120);
        ___qtablewidgetitem121->setText(QApplication::translate("KMapDialogClass", "120", 0));
        QTableWidgetItem *___qtablewidgetitem122 = tableWidget->verticalHeaderItem(121);
        ___qtablewidgetitem122->setText(QApplication::translate("KMapDialogClass", "121", 0));
        QTableWidgetItem *___qtablewidgetitem123 = tableWidget->verticalHeaderItem(122);
        ___qtablewidgetitem123->setText(QApplication::translate("KMapDialogClass", "122", 0));
        QTableWidgetItem *___qtablewidgetitem124 = tableWidget->verticalHeaderItem(123);
        ___qtablewidgetitem124->setText(QApplication::translate("KMapDialogClass", "123", 0));
        QTableWidgetItem *___qtablewidgetitem125 = tableWidget->verticalHeaderItem(124);
        ___qtablewidgetitem125->setText(QApplication::translate("KMapDialogClass", "124", 0));
        QTableWidgetItem *___qtablewidgetitem126 = tableWidget->verticalHeaderItem(125);
        ___qtablewidgetitem126->setText(QApplication::translate("KMapDialogClass", "125", 0));
        QTableWidgetItem *___qtablewidgetitem127 = tableWidget->verticalHeaderItem(126);
        ___qtablewidgetitem127->setText(QApplication::translate("KMapDialogClass", "126", 0));
        QTableWidgetItem *___qtablewidgetitem128 = tableWidget->verticalHeaderItem(127);
        ___qtablewidgetitem128->setText(QApplication::translate("KMapDialogClass", "127", 0));
#ifndef QT_NO_WHATSTHIS
        tableWidget->setWhatsThis(QApplication::translate("KMapDialogClass", "This is the list of the PC keyboard mappings. Each row has a number corresponding to the MIDI note number, and you can type an alphanumeric Key name that will be translated to the given note", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class KMapDialogClass: public Ui_KMapDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KMAPDIALOG_H
