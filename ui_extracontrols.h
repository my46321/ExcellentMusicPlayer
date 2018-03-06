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
** Form generated from reading UI file 'extracontrols.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRACONTROLS_H
#define UI_EXTRACONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogExtraControls
{
public:
    QGridLayout *gridLayout_6;
    QListWidget *extraList;
    QFrame *commonFrame;
    QGridLayout *gridLayout_3;
    QLabel *lblLabel;
    QLineEdit *txtLabel;
    QLabel *lblController;
    QSpinBox *spinController;
    QFrame *frameButtons;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QPushButton *btnUp;
    QPushButton *btnDown;
    QSpacerItem *verticalSpacer;
    QComboBox *cboControlType;
    QStackedWidget *stackedPanel;
    QWidget *pageSwitch;
    QGridLayout *gridLayout_2;
    QCheckBox *chkSwitchDefOn;
    QLabel *lblvalueOn;
    QSpinBox *spinValueOn;
    QLabel *lblValueOff;
    QSpinBox *spinValueOff;
    QWidget *pageKnob;
    QGridLayout *gridLayout;
    QLabel *lblKnobMin;
    QSpinBox *spinKnobMin;
    QLabel *lblKnobMax;
    QSpinBox *spinKnobMax;
    QLabel *labelKnobDef;
    QSpinBox *spinKnobDef;
    QWidget *pageSpinbox;
    QGridLayout *gridLayout_4;
    QLabel *lblSpinMin;
    QSpinBox *spinSpinMin;
    QLabel *lblSpinMax;
    QSpinBox *spinSpinMax;
    QLabel *lblSpinDef;
    QSpinBox *spinSpinDef;
    QWidget *pageSlider;
    QGridLayout *gridLayout_5;
    QLabel *lblSliderSize;
    QSpinBox *spinSliderSize;
    QLabel *lblSliderMin;
    QSpinBox *spinSliderMin;
    QLabel *lblSliderMax;
    QSpinBox *spinSliderMax;
    QLabel *lblSliderDef;
    QSpinBox *spinSliderDef;
    QWidget *pageButtonCtl;
    QGridLayout *gridLayout_7;
    QLabel *lblvalue;
    QSpinBox *spinValue;
    QSpacerItem *verticalSpacer_3;
    QWidget *pageButtonSyx;
    QGridLayout *gridLayout_8;
    QLabel *lblFileName;
    QLineEdit *edtFileSyx;
    QToolButton *btnFileSyx;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogExtraControls)
    {
        if (DialogExtraControls->objectName().isEmpty())
            DialogExtraControls->setObjectName(QStringLiteral("DialogExtraControls"));
        DialogExtraControls->resize(376, 267);
        QIcon icon;
        icon.addFile(QStringLiteral(":/vpiano/vmpk_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogExtraControls->setWindowIcon(icon);
        gridLayout_6 = new QGridLayout(DialogExtraControls);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        extraList = new QListWidget(DialogExtraControls);
        extraList->setObjectName(QStringLiteral("extraList"));
        extraList->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(extraList, 0, 0, 3, 1);

        commonFrame = new QFrame(DialogExtraControls);
        commonFrame->setObjectName(QStringLiteral("commonFrame"));
        commonFrame->setEnabled(false);
        commonFrame->setFrameShape(QFrame::StyledPanel);
        commonFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(commonFrame);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lblLabel = new QLabel(commonFrame);
        lblLabel->setObjectName(QStringLiteral("lblLabel"));

        gridLayout_3->addWidget(lblLabel, 0, 0, 1, 1);

        txtLabel = new QLineEdit(commonFrame);
        txtLabel->setObjectName(QStringLiteral("txtLabel"));

        gridLayout_3->addWidget(txtLabel, 0, 1, 1, 2);

        lblController = new QLabel(commonFrame);
        lblController->setObjectName(QStringLiteral("lblController"));

        gridLayout_3->addWidget(lblController, 1, 0, 1, 2);

        spinController = new QSpinBox(commonFrame);
        spinController->setObjectName(QStringLiteral("spinController"));
        spinController->setMaximum(127);

        gridLayout_3->addWidget(spinController, 1, 2, 1, 1);


        gridLayout_6->addWidget(commonFrame, 0, 1, 1, 1);

        frameButtons = new QFrame(DialogExtraControls);
        frameButtons->setObjectName(QStringLiteral("frameButtons"));
        frameButtons->setFrameShape(QFrame::NoFrame);
        verticalLayout = new QVBoxLayout(frameButtons);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnAdd = new QPushButton(frameButtons);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/vpiano/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon1);

        verticalLayout->addWidget(btnAdd);

        btnRemove = new QPushButton(frameButtons);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));
        btnRemove->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/vpiano/list-remove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemove->setIcon(icon2);

        verticalLayout->addWidget(btnRemove);

        btnUp = new QPushButton(frameButtons);
        btnUp->setObjectName(QStringLiteral("btnUp"));
        btnUp->setEnabled(false);

        verticalLayout->addWidget(btnUp);

        btnDown = new QPushButton(frameButtons);
        btnDown->setObjectName(QStringLiteral("btnDown"));
        btnDown->setEnabled(false);

        verticalLayout->addWidget(btnDown);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_6->addWidget(frameButtons, 0, 2, 3, 1);

        cboControlType = new QComboBox(DialogExtraControls);
        cboControlType->setObjectName(QStringLiteral("cboControlType"));
        cboControlType->setEnabled(false);

        gridLayout_6->addWidget(cboControlType, 1, 1, 1, 1);

        stackedPanel = new QStackedWidget(DialogExtraControls);
        stackedPanel->setObjectName(QStringLiteral("stackedPanel"));
        stackedPanel->setEnabled(false);
        stackedPanel->setFrameShape(QFrame::StyledPanel);
        stackedPanel->setFrameShadow(QFrame::Raised);
        pageSwitch = new QWidget();
        pageSwitch->setObjectName(QStringLiteral("pageSwitch"));
        gridLayout_2 = new QGridLayout(pageSwitch);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        chkSwitchDefOn = new QCheckBox(pageSwitch);
        chkSwitchDefOn->setObjectName(QStringLiteral("chkSwitchDefOn"));

        gridLayout_2->addWidget(chkSwitchDefOn, 0, 0, 1, 2);

        lblvalueOn = new QLabel(pageSwitch);
        lblvalueOn->setObjectName(QStringLiteral("lblvalueOn"));

        gridLayout_2->addWidget(lblvalueOn, 1, 0, 1, 1);

        spinValueOn = new QSpinBox(pageSwitch);
        spinValueOn->setObjectName(QStringLiteral("spinValueOn"));
        spinValueOn->setMaximum(127);

        gridLayout_2->addWidget(spinValueOn, 1, 1, 1, 1);

        lblValueOff = new QLabel(pageSwitch);
        lblValueOff->setObjectName(QStringLiteral("lblValueOff"));

        gridLayout_2->addWidget(lblValueOff, 2, 0, 1, 1);

        spinValueOff = new QSpinBox(pageSwitch);
        spinValueOff->setObjectName(QStringLiteral("spinValueOff"));
        spinValueOff->setMaximum(127);

        gridLayout_2->addWidget(spinValueOff, 2, 1, 1, 1);

        stackedPanel->addWidget(pageSwitch);
        pageKnob = new QWidget();
        pageKnob->setObjectName(QStringLiteral("pageKnob"));
        gridLayout = new QGridLayout(pageKnob);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblKnobMin = new QLabel(pageKnob);
        lblKnobMin->setObjectName(QStringLiteral("lblKnobMin"));

        gridLayout->addWidget(lblKnobMin, 0, 0, 1, 1);

        spinKnobMin = new QSpinBox(pageKnob);
        spinKnobMin->setObjectName(QStringLiteral("spinKnobMin"));
        spinKnobMin->setMaximum(127);

        gridLayout->addWidget(spinKnobMin, 0, 1, 1, 1);

        lblKnobMax = new QLabel(pageKnob);
        lblKnobMax->setObjectName(QStringLiteral("lblKnobMax"));

        gridLayout->addWidget(lblKnobMax, 1, 0, 1, 1);

        spinKnobMax = new QSpinBox(pageKnob);
        spinKnobMax->setObjectName(QStringLiteral("spinKnobMax"));
        spinKnobMax->setMaximum(127);

        gridLayout->addWidget(spinKnobMax, 1, 1, 1, 1);

        labelKnobDef = new QLabel(pageKnob);
        labelKnobDef->setObjectName(QStringLiteral("labelKnobDef"));

        gridLayout->addWidget(labelKnobDef, 2, 0, 1, 1);

        spinKnobDef = new QSpinBox(pageKnob);
        spinKnobDef->setObjectName(QStringLiteral("spinKnobDef"));
        spinKnobDef->setMaximum(127);

        gridLayout->addWidget(spinKnobDef, 2, 1, 1, 1);

        stackedPanel->addWidget(pageKnob);
        pageSpinbox = new QWidget();
        pageSpinbox->setObjectName(QStringLiteral("pageSpinbox"));
        gridLayout_4 = new QGridLayout(pageSpinbox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        lblSpinMin = new QLabel(pageSpinbox);
        lblSpinMin->setObjectName(QStringLiteral("lblSpinMin"));

        gridLayout_4->addWidget(lblSpinMin, 0, 0, 1, 1);

        spinSpinMin = new QSpinBox(pageSpinbox);
        spinSpinMin->setObjectName(QStringLiteral("spinSpinMin"));
        spinSpinMin->setMaximum(127);

        gridLayout_4->addWidget(spinSpinMin, 0, 1, 1, 1);

        lblSpinMax = new QLabel(pageSpinbox);
        lblSpinMax->setObjectName(QStringLiteral("lblSpinMax"));

        gridLayout_4->addWidget(lblSpinMax, 1, 0, 1, 1);

        spinSpinMax = new QSpinBox(pageSpinbox);
        spinSpinMax->setObjectName(QStringLiteral("spinSpinMax"));
        spinSpinMax->setMaximum(127);

        gridLayout_4->addWidget(spinSpinMax, 1, 1, 1, 1);

        lblSpinDef = new QLabel(pageSpinbox);
        lblSpinDef->setObjectName(QStringLiteral("lblSpinDef"));

        gridLayout_4->addWidget(lblSpinDef, 2, 0, 1, 1);

        spinSpinDef = new QSpinBox(pageSpinbox);
        spinSpinDef->setObjectName(QStringLiteral("spinSpinDef"));
        spinSpinDef->setMaximum(127);

        gridLayout_4->addWidget(spinSpinDef, 2, 1, 1, 1);

        stackedPanel->addWidget(pageSpinbox);
        pageSlider = new QWidget();
        pageSlider->setObjectName(QStringLiteral("pageSlider"));
        gridLayout_5 = new QGridLayout(pageSlider);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        lblSliderSize = new QLabel(pageSlider);
        lblSliderSize->setObjectName(QStringLiteral("lblSliderSize"));

        gridLayout_5->addWidget(lblSliderSize, 0, 0, 1, 1);

        spinSliderSize = new QSpinBox(pageSlider);
        spinSliderSize->setObjectName(QStringLiteral("spinSliderSize"));
        spinSliderSize->setMaximum(9999);

        gridLayout_5->addWidget(spinSliderSize, 0, 1, 1, 1);

        lblSliderMin = new QLabel(pageSlider);
        lblSliderMin->setObjectName(QStringLiteral("lblSliderMin"));

        gridLayout_5->addWidget(lblSliderMin, 1, 0, 1, 1);

        spinSliderMin = new QSpinBox(pageSlider);
        spinSliderMin->setObjectName(QStringLiteral("spinSliderMin"));
        spinSliderMin->setMaximum(127);

        gridLayout_5->addWidget(spinSliderMin, 1, 1, 1, 1);

        lblSliderMax = new QLabel(pageSlider);
        lblSliderMax->setObjectName(QStringLiteral("lblSliderMax"));

        gridLayout_5->addWidget(lblSliderMax, 2, 0, 1, 1);

        spinSliderMax = new QSpinBox(pageSlider);
        spinSliderMax->setObjectName(QStringLiteral("spinSliderMax"));
        spinSliderMax->setMaximum(127);

        gridLayout_5->addWidget(spinSliderMax, 2, 1, 1, 1);

        lblSliderDef = new QLabel(pageSlider);
        lblSliderDef->setObjectName(QStringLiteral("lblSliderDef"));

        gridLayout_5->addWidget(lblSliderDef, 3, 0, 1, 1);

        spinSliderDef = new QSpinBox(pageSlider);
        spinSliderDef->setObjectName(QStringLiteral("spinSliderDef"));
        spinSliderDef->setMaximum(127);

        gridLayout_5->addWidget(spinSliderDef, 3, 1, 1, 1);

        stackedPanel->addWidget(pageSlider);
        pageButtonCtl = new QWidget();
        pageButtonCtl->setObjectName(QStringLiteral("pageButtonCtl"));
        gridLayout_7 = new QGridLayout(pageButtonCtl);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        lblvalue = new QLabel(pageButtonCtl);
        lblvalue->setObjectName(QStringLiteral("lblvalue"));

        gridLayout_7->addWidget(lblvalue, 0, 0, 1, 1);

        spinValue = new QSpinBox(pageButtonCtl);
        spinValue->setObjectName(QStringLiteral("spinValue"));
        spinValue->setMaximum(127);

        gridLayout_7->addWidget(spinValue, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 1, 0, 1, 1);

        stackedPanel->addWidget(pageButtonCtl);
        pageButtonSyx = new QWidget();
        pageButtonSyx->setObjectName(QStringLiteral("pageButtonSyx"));
        gridLayout_8 = new QGridLayout(pageButtonSyx);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        lblFileName = new QLabel(pageButtonSyx);
        lblFileName->setObjectName(QStringLiteral("lblFileName"));
        lblFileName->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_8->addWidget(lblFileName, 0, 0, 1, 1);

        edtFileSyx = new QLineEdit(pageButtonSyx);
        edtFileSyx->setObjectName(QStringLiteral("edtFileSyx"));
        edtFileSyx->setReadOnly(true);

        gridLayout_8->addWidget(edtFileSyx, 1, 0, 1, 1);

        btnFileSyx = new QToolButton(pageButtonSyx);
        btnFileSyx->setObjectName(QStringLiteral("btnFileSyx"));

        gridLayout_8->addWidget(btnFileSyx, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_2, 2, 0, 1, 1);

        stackedPanel->addWidget(pageButtonSyx);

        gridLayout_6->addWidget(stackedPanel, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(DialogExtraControls);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_6->addWidget(buttonBox, 3, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        lblLabel->setBuddy(txtLabel);
        lblController->setBuddy(spinController);
        lblvalueOn->setBuddy(spinValueOn);
        lblValueOff->setBuddy(spinValueOff);
        lblKnobMin->setBuddy(spinKnobMin);
        lblKnobMax->setBuddy(spinKnobMax);
        labelKnobDef->setBuddy(spinKnobDef);
        lblSpinMin->setBuddy(spinSpinMin);
        lblSpinMax->setBuddy(spinSpinMax);
        lblSpinDef->setBuddy(spinSpinDef);
        lblSliderSize->setBuddy(spinSliderSize);
        lblSliderMin->setBuddy(spinSliderMin);
        lblSliderMax->setBuddy(spinSliderMax);
        lblSliderDef->setBuddy(spinSliderDef);
        lblvalue->setBuddy(spinValueOn);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(extraList, txtLabel);
        QWidget::setTabOrder(txtLabel, spinController);
        QWidget::setTabOrder(spinController, chkSwitchDefOn);
        QWidget::setTabOrder(chkSwitchDefOn, spinValueOn);
        QWidget::setTabOrder(spinValueOn, spinValueOff);
        QWidget::setTabOrder(spinValueOff, spinKnobMin);
        QWidget::setTabOrder(spinKnobMin, spinKnobMax);
        QWidget::setTabOrder(spinKnobMax, spinKnobDef);
        QWidget::setTabOrder(spinKnobDef, spinSpinMin);
        QWidget::setTabOrder(spinSpinMin, spinSpinMax);
        QWidget::setTabOrder(spinSpinMax, spinSpinDef);
        QWidget::setTabOrder(spinSpinDef, spinSliderSize);
        QWidget::setTabOrder(spinSliderSize, spinSliderMin);
        QWidget::setTabOrder(spinSliderMin, spinSliderMax);
        QWidget::setTabOrder(spinSliderMax, spinSliderDef);
        QWidget::setTabOrder(spinSliderDef, btnAdd);
        QWidget::setTabOrder(btnAdd, btnRemove);
        QWidget::setTabOrder(btnRemove, btnUp);
        QWidget::setTabOrder(btnUp, btnDown);
        QWidget::setTabOrder(btnDown, buttonBox);

        retranslateUi(DialogExtraControls);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogExtraControls, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogExtraControls, SLOT(reject()));
        QObject::connect(cboControlType, SIGNAL(currentIndexChanged(int)), stackedPanel, SLOT(setCurrentIndex(int)));
        QObject::connect(stackedPanel, SIGNAL(currentChanged(int)), cboControlType, SLOT(setCurrentIndex(int)));

        stackedPanel->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogExtraControls);
    } // setupUi

    void retranslateUi(QDialog *DialogExtraControls)
    {
        DialogExtraControls->setWindowTitle(QApplication::translate("DialogExtraControls", "Extra Controls Editor", 0));
        lblLabel->setText(QApplication::translate("DialogExtraControls", "Label:", 0));
        lblController->setText(QApplication::translate("DialogExtraControls", "MIDI Controller:", 0));
        btnAdd->setText(QApplication::translate("DialogExtraControls", "Add", 0));
        btnRemove->setText(QApplication::translate("DialogExtraControls", "Remove", 0));
        btnUp->setText(QApplication::translate("DialogExtraControls", "Up", 0));
        btnDown->setText(QApplication::translate("DialogExtraControls", "Down", 0));
        cboControlType->clear();
        cboControlType->insertItems(0, QStringList()
         << QApplication::translate("DialogExtraControls", "Switch", 0)
         << QApplication::translate("DialogExtraControls", "Knob", 0)
         << QApplication::translate("DialogExtraControls", "Spin box", 0)
         << QApplication::translate("DialogExtraControls", "Slider", 0)
         << QApplication::translate("DialogExtraControls", "Button Ctl", 0)
         << QApplication::translate("DialogExtraControls", "Button SysEx", 0)
        );
        chkSwitchDefOn->setText(QApplication::translate("DialogExtraControls", "Default ON", 0));
        lblvalueOn->setText(QApplication::translate("DialogExtraControls", "value ON:", 0));
        lblValueOff->setText(QApplication::translate("DialogExtraControls", "value OFF:", 0));
        lblKnobMin->setText(QApplication::translate("DialogExtraControls", "Min. value:", 0));
        lblKnobMax->setText(QApplication::translate("DialogExtraControls", "Max. value:", 0));
        labelKnobDef->setText(QApplication::translate("DialogExtraControls", "Default value:", 0));
        lblSpinMin->setText(QApplication::translate("DialogExtraControls", "Min. value:", 0));
        lblSpinMax->setText(QApplication::translate("DialogExtraControls", "Max. value:", 0));
        lblSpinDef->setText(QApplication::translate("DialogExtraControls", "Default value:", 0));
        lblSliderSize->setText(QApplication::translate("DialogExtraControls", "Display size:", 0));
        lblSliderMin->setText(QApplication::translate("DialogExtraControls", "Min. value:", 0));
        lblSliderMax->setText(QApplication::translate("DialogExtraControls", "Max. value:", 0));
        lblSliderDef->setText(QApplication::translate("DialogExtraControls", "Default value:", 0));
        lblvalue->setText(QApplication::translate("DialogExtraControls", "value:", 0));
        lblFileName->setText(QApplication::translate("DialogExtraControls", "File name:", 0));
        btnFileSyx->setText(QApplication::translate("DialogExtraControls", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogExtraControls: public Ui_DialogExtraControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRACONTROLS_H
