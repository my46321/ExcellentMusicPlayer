/*

    MIDI Virtual Piano Keyboard
    Copyright (C) 2008-2013, Pedro Lopez-Cabanillas
    Copyright (C) 2005-2013, rncbc aka Rui Nuno Capela. All rights reserved.

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
** Form generated from reading UI file 'shortcutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTDIALOG_H
#define UI_SHORTCUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShortcutDialog
{
public:
    QVBoxLayout *vboxLayout;
    QTableWidget *ShortcutTable;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *ShortcutDialog)
    {
        if (ShortcutDialog->objectName().isEmpty())
            ShortcutDialog->setObjectName(QStringLiteral("ShortcutDialog"));
        ShortcutDialog->resize(520, 360);
        QIcon icon;
        icon.addFile(QStringLiteral(":/vpiano/vmpk_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        ShortcutDialog->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(ShortcutDialog);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        ShortcutTable = new QTableWidget(ShortcutDialog);
        if (ShortcutTable->columnCount() < 3)
            ShortcutTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ShortcutTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ShortcutTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ShortcutTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        ShortcutTable->setObjectName(QStringLiteral("ShortcutTable"));
        ShortcutTable->setTabKeyNavigation(false);
        ShortcutTable->setProperty("showDropIndicator", QVariant(false));
        ShortcutTable->setDragDropOverwriteMode(false);
        ShortcutTable->setAlternatingRowColors(true);
        ShortcutTable->setSelectionMode(QAbstractItemView::SingleSelection);
        ShortcutTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ShortcutTable->setColumnCount(3);

        vboxLayout->addWidget(ShortcutTable);

        DialogButtonBox = new QDialogButtonBox(ShortcutDialog);
        DialogButtonBox->setObjectName(QStringLiteral("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        vboxLayout->addWidget(DialogButtonBox);

        QWidget::setTabOrder(ShortcutTable, DialogButtonBox);

        retranslateUi(ShortcutDialog);

        QMetaObject::connectSlotsByName(ShortcutDialog);
    } // setupUi

    void retranslateUi(QDialog *ShortcutDialog)
    {
        ShortcutDialog->setWindowTitle(QApplication::translate("ShortcutDialog", "Keyboard Shortcuts", 0));
        QTableWidgetItem *___qtablewidgetitem = ShortcutTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ShortcutDialog", "Action", 0));
        QTableWidgetItem *___qtablewidgetitem1 = ShortcutTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ShortcutDialog", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem2 = ShortcutTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ShortcutDialog", "Shortcut", 0));
    } // retranslateUi

};

namespace Ui {
    class ShortcutDialog: public Ui_ShortcutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTDIALOG_H
