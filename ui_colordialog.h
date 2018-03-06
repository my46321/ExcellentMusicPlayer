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
** Form generated from reading UI file 'colordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORDIALOG_H
#define UI_COLORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *paletteNames;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *paletteText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorDialog)
    {
        if (ColorDialog->objectName().isEmpty())
            ColorDialog->setObjectName(QStringLiteral("ColorDialog"));
        ColorDialog->resize(320, 380);
        ColorDialog->setMinimumSize(QSize(320, 380));
        QIcon icon;
        icon.addFile(QStringLiteral("../data/vmpk_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        ColorDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ColorDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        paletteNames = new QComboBox(ColorDialog);
        paletteNames->setObjectName(QStringLiteral("paletteNames"));
        paletteNames->setMinimumSize(QSize(200, 0));

        verticalLayout->addWidget(paletteNames);

        groupBox = new QGroupBox(ColorDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        verticalLayout->addWidget(groupBox);

        paletteText = new QLabel(ColorDialog);
        paletteText->setObjectName(QStringLiteral("paletteText"));
        paletteText->setMaximumSize(QSize(16777215, 50));
        paletteText->setWordWrap(true);
        paletteText->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(paletteText);

        buttonBox = new QDialogButtonBox(ColorDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ColorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ColorDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorDialog)
    {
        ColorDialog->setWindowTitle(QApplication::translate("ColorDialog", "Color Palette", 0));
        groupBox->setTitle(QApplication::translate("ColorDialog", "Colors", 0));
    } // retranslateUi

};

namespace Ui {
    class ColorDialog: public Ui_ColorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORDIALOG_H
