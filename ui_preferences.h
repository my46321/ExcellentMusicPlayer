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
** Form generated from reading UI file 'preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesClass
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *lblNumOctaves;
    QLabel *lblKeyPressColor;
    QPushButton *btnColor;
    QLabel *lblFileInstrument;
    QLineEdit *txtFileInstrument;
    QPushButton *btnInstrument;
    QLabel *lblInstrument;
    QLabel *lblKmap;
    QLineEdit *txtFileKmap;
    QPushButton *btnKmap;
    QLabel *lblRawKmap;
    QLineEdit *txtFileRawKmap;
    QPushButton *btnRawKmap;
    QLabel *lblDrumsChannel;
    QComboBox *cboDrumsChannel;
    QLabel *lblNetworkPort;
    QLineEdit *txtNetworkPort;
    QCheckBox *chkStyledKnobs;
    QCheckBox *chkAlwaysOnTop;
    QCheckBox *chkRawKeyboard;
    QCheckBox *chkVelocityColor;
    QCheckBox *chkGrabKb;
    QLabel *lblNetworkIface;
    QComboBox *cboNetworkIface;
    QLabel *lblMIDIDriver;
    QComboBox *cboMIDIDriver;
    QCheckBox *chkEnforceChannelState;
    QCheckBox *chkEnableTouch;
    QCheckBox *chkEnableMouse;
    QCheckBox *chkEnableKeyboard;
    QComboBox *cboColorPolicy;
    QSpinBox *spinNumOctaves;
    QComboBox *cboInstrument;

    void setupUi(QDialog *PreferencesClass)
    {
        if (PreferencesClass->objectName().isEmpty())
            PreferencesClass->setObjectName(QStringLiteral("PreferencesClass"));
        PreferencesClass->resize(401, 437);
        QIcon icon;
        icon.addFile(QStringLiteral(":/vpiano/vmpk_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        PreferencesClass->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(PreferencesClass);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        buttonBox = new QDialogButtonBox(PreferencesClass);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        gridLayout_2->addWidget(buttonBox, 3, 0, 1, 1);

        scrollArea = new QScrollArea(PreferencesClass);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 395, 404));
        scrollAreaWidgetContents->setMinimumSize(QSize(382, 394));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(1);
        gridLayout->setContentsMargins(3, 1, 3, 1);
        lblNumOctaves = new QLabel(scrollAreaWidgetContents);
        lblNumOctaves->setObjectName(QStringLiteral("lblNumOctaves"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblNumOctaves->sizePolicy().hasHeightForWidth());
        lblNumOctaves->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblNumOctaves, 0, 0, 1, 1);

        lblKeyPressColor = new QLabel(scrollAreaWidgetContents);
        lblKeyPressColor->setObjectName(QStringLiteral("lblKeyPressColor"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblKeyPressColor->sizePolicy().hasHeightForWidth());
        lblKeyPressColor->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lblKeyPressColor, 2, 0, 1, 1);

        btnColor = new QPushButton(scrollAreaWidgetContents);
        btnColor->setObjectName(QStringLiteral("btnColor"));

        gridLayout->addWidget(btnColor, 2, 2, 1, 1);

        lblFileInstrument = new QLabel(scrollAreaWidgetContents);
        lblFileInstrument->setObjectName(QStringLiteral("lblFileInstrument"));
        sizePolicy1.setHeightForWidth(lblFileInstrument->sizePolicy().hasHeightForWidth());
        lblFileInstrument->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lblFileInstrument, 3, 0, 1, 1);

        txtFileInstrument = new QLineEdit(scrollAreaWidgetContents);
        txtFileInstrument->setObjectName(QStringLiteral("txtFileInstrument"));
        txtFileInstrument->setMinimumSize(QSize(120, 0));
        txtFileInstrument->setReadOnly(true);

        gridLayout->addWidget(txtFileInstrument, 3, 1, 1, 1);

        btnInstrument = new QPushButton(scrollAreaWidgetContents);
        btnInstrument->setObjectName(QStringLiteral("btnInstrument"));

        gridLayout->addWidget(btnInstrument, 3, 2, 1, 1);

        lblInstrument = new QLabel(scrollAreaWidgetContents);
        lblInstrument->setObjectName(QStringLiteral("lblInstrument"));
        sizePolicy1.setHeightForWidth(lblInstrument->sizePolicy().hasHeightForWidth());
        lblInstrument->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lblInstrument, 4, 0, 2, 1);

        lblKmap = new QLabel(scrollAreaWidgetContents);
        lblKmap->setObjectName(QStringLiteral("lblKmap"));

        gridLayout->addWidget(lblKmap, 6, 0, 1, 1);

        txtFileKmap = new QLineEdit(scrollAreaWidgetContents);
        txtFileKmap->setObjectName(QStringLiteral("txtFileKmap"));

        gridLayout->addWidget(txtFileKmap, 6, 1, 1, 1);

        btnKmap = new QPushButton(scrollAreaWidgetContents);
        btnKmap->setObjectName(QStringLiteral("btnKmap"));

        gridLayout->addWidget(btnKmap, 6, 2, 1, 1);

        lblRawKmap = new QLabel(scrollAreaWidgetContents);
        lblRawKmap->setObjectName(QStringLiteral("lblRawKmap"));

        gridLayout->addWidget(lblRawKmap, 7, 0, 1, 1);

        txtFileRawKmap = new QLineEdit(scrollAreaWidgetContents);
        txtFileRawKmap->setObjectName(QStringLiteral("txtFileRawKmap"));

        gridLayout->addWidget(txtFileRawKmap, 7, 1, 1, 1);

        btnRawKmap = new QPushButton(scrollAreaWidgetContents);
        btnRawKmap->setObjectName(QStringLiteral("btnRawKmap"));

        gridLayout->addWidget(btnRawKmap, 7, 2, 1, 1);

        lblDrumsChannel = new QLabel(scrollAreaWidgetContents);
        lblDrumsChannel->setObjectName(QStringLiteral("lblDrumsChannel"));

        gridLayout->addWidget(lblDrumsChannel, 8, 0, 1, 1);

        cboDrumsChannel = new QComboBox(scrollAreaWidgetContents);
        cboDrumsChannel->setObjectName(QStringLiteral("cboDrumsChannel"));

        gridLayout->addWidget(cboDrumsChannel, 8, 1, 1, 1);

        lblNetworkPort = new QLabel(scrollAreaWidgetContents);
        lblNetworkPort->setObjectName(QStringLiteral("lblNetworkPort"));

        gridLayout->addWidget(lblNetworkPort, 10, 0, 1, 1);

        txtNetworkPort = new QLineEdit(scrollAreaWidgetContents);
        txtNetworkPort->setObjectName(QStringLiteral("txtNetworkPort"));

        gridLayout->addWidget(txtNetworkPort, 10, 1, 1, 1);

        chkStyledKnobs = new QCheckBox(scrollAreaWidgetContents);
        chkStyledKnobs->setObjectName(QStringLiteral("chkStyledKnobs"));
        chkStyledKnobs->setChecked(true);

        gridLayout->addWidget(chkStyledKnobs, 12, 0, 1, 3);

        chkAlwaysOnTop = new QCheckBox(scrollAreaWidgetContents);
        chkAlwaysOnTop->setObjectName(QStringLiteral("chkAlwaysOnTop"));

        gridLayout->addWidget(chkAlwaysOnTop, 13, 0, 1, 3);

        chkRawKeyboard = new QCheckBox(scrollAreaWidgetContents);
        chkRawKeyboard->setObjectName(QStringLiteral("chkRawKeyboard"));

        gridLayout->addWidget(chkRawKeyboard, 16, 0, 1, 3);

        chkVelocityColor = new QCheckBox(scrollAreaWidgetContents);
        chkVelocityColor->setObjectName(QStringLiteral("chkVelocityColor"));
        chkVelocityColor->setChecked(true);

        gridLayout->addWidget(chkVelocityColor, 17, 0, 1, 3);

        chkGrabKb = new QCheckBox(scrollAreaWidgetContents);
        chkGrabKb->setObjectName(QStringLiteral("chkGrabKb"));

        gridLayout->addWidget(chkGrabKb, 15, 0, 1, 3);

        lblNetworkIface = new QLabel(scrollAreaWidgetContents);
        lblNetworkIface->setObjectName(QStringLiteral("lblNetworkIface"));

        gridLayout->addWidget(lblNetworkIface, 11, 0, 1, 1);

        cboNetworkIface = new QComboBox(scrollAreaWidgetContents);
        cboNetworkIface->setObjectName(QStringLiteral("cboNetworkIface"));

        gridLayout->addWidget(cboNetworkIface, 11, 1, 1, 1);

        lblMIDIDriver = new QLabel(scrollAreaWidgetContents);
        lblMIDIDriver->setObjectName(QStringLiteral("lblMIDIDriver"));

        gridLayout->addWidget(lblMIDIDriver, 9, 0, 1, 1);

        cboMIDIDriver = new QComboBox(scrollAreaWidgetContents);
        cboMIDIDriver->setObjectName(QStringLiteral("cboMIDIDriver"));

        gridLayout->addWidget(cboMIDIDriver, 9, 1, 1, 1);

        chkEnforceChannelState = new QCheckBox(scrollAreaWidgetContents);
        chkEnforceChannelState->setObjectName(QStringLiteral("chkEnforceChannelState"));

        gridLayout->addWidget(chkEnforceChannelState, 18, 0, 1, 3);

        chkEnableTouch = new QCheckBox(scrollAreaWidgetContents);
        chkEnableTouch->setObjectName(QStringLiteral("chkEnableTouch"));
        chkEnableTouch->setChecked(true);

        gridLayout->addWidget(chkEnableTouch, 21, 0, 1, 3);

        chkEnableMouse = new QCheckBox(scrollAreaWidgetContents);
        chkEnableMouse->setObjectName(QStringLiteral("chkEnableMouse"));
        chkEnableMouse->setChecked(true);

        gridLayout->addWidget(chkEnableMouse, 20, 0, 1, 3);

        chkEnableKeyboard = new QCheckBox(scrollAreaWidgetContents);
        chkEnableKeyboard->setObjectName(QStringLiteral("chkEnableKeyboard"));
        chkEnableKeyboard->setChecked(true);

        gridLayout->addWidget(chkEnableKeyboard, 14, 0, 1, 3);

        cboColorPolicy = new QComboBox(scrollAreaWidgetContents);
        cboColorPolicy->setObjectName(QStringLiteral("cboColorPolicy"));

        gridLayout->addWidget(cboColorPolicy, 2, 1, 1, 1);

        spinNumOctaves = new QSpinBox(scrollAreaWidgetContents);
        spinNumOctaves->setObjectName(QStringLiteral("spinNumOctaves"));
        spinNumOctaves->setMinimum(1);
        spinNumOctaves->setMaximum(9);

        gridLayout->addWidget(spinNumOctaves, 0, 1, 1, 1);

        cboInstrument = new QComboBox(scrollAreaWidgetContents);
        cboInstrument->setObjectName(QStringLiteral("cboInstrument"));

        gridLayout->addWidget(cboInstrument, 4, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        lblNumOctaves->setBuddy(spinNumOctaves);
        lblKeyPressColor->setBuddy(cboColorPolicy);
        lblFileInstrument->setBuddy(txtFileInstrument);
        lblInstrument->setBuddy(cboInstrument);
        lblKmap->setBuddy(txtFileKmap);
        lblRawKmap->setBuddy(txtFileRawKmap);
        lblDrumsChannel->setBuddy(cboDrumsChannel);
        lblNetworkPort->setBuddy(txtNetworkPort);
        lblNetworkIface->setBuddy(cboNetworkIface);
        lblMIDIDriver->setBuddy(cboMIDIDriver);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, btnColor);
        QWidget::setTabOrder(btnColor, txtFileInstrument);
        QWidget::setTabOrder(txtFileInstrument, btnInstrument);
        QWidget::setTabOrder(btnInstrument, txtFileKmap);
        QWidget::setTabOrder(txtFileKmap, btnKmap);
        QWidget::setTabOrder(btnKmap, txtFileRawKmap);
        QWidget::setTabOrder(txtFileRawKmap, btnRawKmap);
        QWidget::setTabOrder(btnRawKmap, cboDrumsChannel);
        QWidget::setTabOrder(cboDrumsChannel, cboMIDIDriver);
        QWidget::setTabOrder(cboMIDIDriver, txtNetworkPort);
        QWidget::setTabOrder(txtNetworkPort, cboNetworkIface);
        QWidget::setTabOrder(cboNetworkIface, chkStyledKnobs);
        QWidget::setTabOrder(chkStyledKnobs, chkAlwaysOnTop);
        QWidget::setTabOrder(chkAlwaysOnTop, chkGrabKb);
        QWidget::setTabOrder(chkGrabKb, chkRawKeyboard);
        QWidget::setTabOrder(chkRawKeyboard, chkVelocityColor);
        QWidget::setTabOrder(chkVelocityColor, buttonBox);

        retranslateUi(PreferencesClass);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesClass, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesClass, SLOT(reject()));
        QObject::connect(chkEnableKeyboard, SIGNAL(toggled(bool)), chkGrabKb, SLOT(setEnabled(bool)));
        QObject::connect(chkEnableKeyboard, SIGNAL(toggled(bool)), chkRawKeyboard, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(PreferencesClass);
    } // setupUi

    void retranslateUi(QDialog *PreferencesClass)
    {
        PreferencesClass->setWindowTitle(QApplication::translate("PreferencesClass", "Preferences", 0));
        lblNumOctaves->setText(QApplication::translate("PreferencesClass", "Number of octaves", 0));
        lblKeyPressColor->setText(QApplication::translate("PreferencesClass", "Note highlight color", 0));
#ifndef QT_NO_WHATSTHIS
        btnColor->setWhatsThis(QApplication::translate("PreferencesClass", "Press this button to change the highligh color used to paint the keys that are being activated.", 0));
#endif // QT_NO_WHATSTHIS
        btnColor->setText(QApplication::translate("PreferencesClass", "colors...", 0));
        lblFileInstrument->setText(QApplication::translate("PreferencesClass", "Instruments file", 0));
#ifndef QT_NO_WHATSTHIS
        txtFileInstrument->setWhatsThis(QApplication::translate("PreferencesClass", "The instruments definition file currently loaded", 0));
#endif // QT_NO_WHATSTHIS
        txtFileInstrument->setText(QApplication::translate("PreferencesClass", "default", 0));
#ifndef QT_NO_WHATSTHIS
        btnInstrument->setWhatsThis(QApplication::translate("PreferencesClass", "Press this button to load an instruments definition file from disk.", 0));
#endif // QT_NO_WHATSTHIS
        btnInstrument->setText(QApplication::translate("PreferencesClass", "load...", 0));
        lblInstrument->setText(QApplication::translate("PreferencesClass", "Instrument", 0));
        lblKmap->setText(QApplication::translate("PreferencesClass", "Keyboard Map", 0));
        btnKmap->setText(QApplication::translate("PreferencesClass", "Load...", 0));
        lblRawKmap->setText(QApplication::translate("PreferencesClass", "Raw Keyboard Map", 0));
        btnRawKmap->setText(QApplication::translate("PreferencesClass", "Load...", 0));
        lblDrumsChannel->setText(QApplication::translate("PreferencesClass", "Drums Channel", 0));
        cboDrumsChannel->clear();
        cboDrumsChannel->insertItems(0, QStringList()
         << QApplication::translate("PreferencesClass", "None", 0)
         << QApplication::translate("PreferencesClass", "1", 0)
         << QApplication::translate("PreferencesClass", "2", 0)
         << QApplication::translate("PreferencesClass", "3", 0)
         << QApplication::translate("PreferencesClass", "4", 0)
         << QApplication::translate("PreferencesClass", "5", 0)
         << QApplication::translate("PreferencesClass", "6", 0)
         << QApplication::translate("PreferencesClass", "7", 0)
         << QApplication::translate("PreferencesClass", "8", 0)
         << QApplication::translate("PreferencesClass", "9", 0)
         << QApplication::translate("PreferencesClass", "10", 0)
         << QApplication::translate("PreferencesClass", "11", 0)
         << QApplication::translate("PreferencesClass", "12", 0)
         << QApplication::translate("PreferencesClass", "13", 0)
         << QApplication::translate("PreferencesClass", "14", 0)
         << QApplication::translate("PreferencesClass", "15", 0)
        );
        lblNetworkPort->setText(QApplication::translate("PreferencesClass", "Network Port", 0));
#ifndef QT_NO_WHATSTHIS
        chkStyledKnobs->setWhatsThis(QApplication::translate("PreferencesClass", "Change the widget (knobs, switches) style, either using the custom look or reverting to the style selected in qtconfig.", 0));
#endif // QT_NO_WHATSTHIS
        chkStyledKnobs->setText(QApplication::translate("PreferencesClass", "Styled Widgets", 0));
#ifndef QT_NO_WHATSTHIS
        chkAlwaysOnTop->setWhatsThis(QApplication::translate("PreferencesClass", "Check this box to keep the keyboard window always visible, on top of other windows.", 0));
#endif // QT_NO_WHATSTHIS
        chkAlwaysOnTop->setText(QApplication::translate("PreferencesClass", "Always On Top", 0));
#ifndef QT_NO_WHATSTHIS
        chkRawKeyboard->setWhatsThis(QApplication::translate("PreferencesClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Check this box to use low level PC keyboard events. This system has several advantages:</p>\n"
"<ul style=\"-qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">It is possible to use \"dead keys\" (accent marks, diacritics)</li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mapping definitions are independent of the language (but hardware and OS specific)</li>\n"
"<li style=\" margin-top:0px"
                        "; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Faster processing</li></ul></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        chkRawKeyboard->setText(QApplication::translate("PreferencesClass", "Raw Computer Keyboard", 0));
        chkVelocityColor->setText(QApplication::translate("PreferencesClass", "Translate MIDI velocity to key pressed color tint", 0));
#ifndef QT_NO_WHATSTHIS
        chkGrabKb->setWhatsThis(QApplication::translate("PreferencesClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Check this box to grab the PC keyboard, even when the keyboard control has not the focus. <span style=\" font-weight:600;\">Note for Linux users:</span> this option works well in standard KDE desktops, but fails in window managers like metacity and compiz. It is also known that using this option breaks drop down menus on GTK applications.</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        chkGrabKb->setText(QApplication::translate("PreferencesClass", "Grab Computer Keyboard", 0));
        lblNetworkIface->setText(QApplication::translate("PreferencesClass", "Network Interface", 0));
        lblMIDIDriver->setText(QApplication::translate("PreferencesClass", "MIDI Driver", 0));
        chkEnforceChannelState->setText(QApplication::translate("PreferencesClass", "MIDI channel state consistency", 0));
        chkEnableTouch->setText(QApplication::translate("PreferencesClass", "Enable Touch Screen Input", 0));
        chkEnableMouse->setText(QApplication::translate("PreferencesClass", "Enable Mouse Input", 0));
        chkEnableKeyboard->setText(QApplication::translate("PreferencesClass", "Enable Computer Keyboard Input", 0));
#ifndef QT_NO_WHATSTHIS
        spinNumOctaves->setWhatsThis(QApplication::translate("PreferencesClass", "The number of octaves, from 1 to 10. Each octave has 12 keys: 7 white and 5 black. The MIDI standard has 128 notes, but not all instruments can play all of them.", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        cboInstrument->setWhatsThis(QApplication::translate("PreferencesClass", "Change the instrument definition being currently used. Each instruments definition file may hold several instruments on it.", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class PreferencesClass: public Ui_PreferencesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
