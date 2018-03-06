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
** Form generated from reading UI file 'vpiano.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VPIANO_H
#define UI_VPIANO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "pianokeybd.h"

QT_BEGIN_NAMESPACE

class Ui_VPiano
{
public:
    QAction *actionExit;
    QAction *actionPreferences;
    QAction *actionConnections;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionNotes;
    QAction *actionControllers;
    QAction *actionBender;
    QAction *actionPrograms;
    QAction *actionStatusBar;
    QAction *actionPanic;
    QAction *actionResetAll;
    QAction *actionReset;
    QAction *actionEditKM;
    QAction *actionContents;
    QAction *actionWebSite;
    QAction *actionImportSoundFont;
    QAction *actionExtraControls;
    QAction *actionEditExtra;
    QAction *actionEditPrograms;
    QAction *actionEditExtraControls;
    QAction *actionNoteNames;
    QAction *actionShortcuts;
    QAction *actionOctaveUp;
    QAction *actionOctaveDown;
    QAction *actionTransposeUp;
    QAction *actionTransposeDown;
    QAction *actionChannelUp;
    QAction *actionChannelDown;
    QAction *actionNextController;
    QAction *actionPreviousController;
    QAction *actionControllerUp;
    QAction *actionControllerDown;
    QAction *actionNextBank;
    QAction *actionPreviousBank;
    QAction *actionNextProgram;
    QAction *actionPreviousProgram;
    QAction *actionVelocityUp;
    QAction *actionVelocityDown;
    QAction *actionAboutTranslation;
    QAction *actionKeyboardInput;
    QAction *actionMouseInput;
    QAction *actionTouchScreenInput;
    QAction *actionColorPalette;
    QAction *actionColorScale;
    QAction *actionRecorder;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    PianoKeybd *pianokeybd;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuLanguage;
    QMenu *menuView;
    QMenu *menuTools;
    QMenu *menuNotes;
    QMenu *menuControllers;
    QMenu *menuPrograms;
    QMenu *menuNote_Input;
    QStatusBar *statusBar;
    QToolBar *toolBarNotes;
    QToolBar *toolBarControllers;
    QToolBar *toolBarBender;
    QToolBar *toolBarPrograms;
    QToolBar *toolBarExtra;

    void setupUi(QMainWindow *VPiano)
    {
        if (VPiano->objectName().isEmpty())
            VPiano->setObjectName(QStringLiteral("VPiano"));
        VPiano->resize(622, 364);
        VPiano->setWindowTitle(QStringLiteral("Virtual MIDI Piano Keyboard"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/vpiano/vmpk_32x32.png"), QSize(), QIcon::Normal, QIcon::Off);
        VPiano->setWindowIcon(icon);
        actionExit = new QAction(VPiano);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionPreferences = new QAction(VPiano);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionConnections = new QAction(VPiano);
        actionConnections->setObjectName(QStringLiteral("actionConnections"));
        actionAbout = new QAction(VPiano);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAboutQt = new QAction(VPiano);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionNotes = new QAction(VPiano);
        actionNotes->setObjectName(QStringLiteral("actionNotes"));
        actionNotes->setCheckable(true);
        actionControllers = new QAction(VPiano);
        actionControllers->setObjectName(QStringLiteral("actionControllers"));
        actionControllers->setCheckable(true);
        actionBender = new QAction(VPiano);
        actionBender->setObjectName(QStringLiteral("actionBender"));
        actionBender->setCheckable(true);
        actionPrograms = new QAction(VPiano);
        actionPrograms->setObjectName(QStringLiteral("actionPrograms"));
        actionPrograms->setCheckable(true);
        actionStatusBar = new QAction(VPiano);
        actionStatusBar->setObjectName(QStringLiteral("actionStatusBar"));
        actionStatusBar->setCheckable(true);
        actionStatusBar->setChecked(true);
        actionPanic = new QAction(VPiano);
        actionPanic->setObjectName(QStringLiteral("actionPanic"));
        actionPanic->setCheckable(false);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        actionPanic->setFont(font);
        actionPanic->setShortcut(QStringLiteral("Esc"));
        actionPanic->setAutoRepeat(true);
        actionPanic->setVisible(true);
        actionPanic->setIconVisibleInMenu(false);
        actionPanic->setPriority(QAction::HighPriority);
        actionResetAll = new QAction(VPiano);
        actionResetAll->setObjectName(QStringLiteral("actionResetAll"));
        actionResetAll->setFont(font);
        actionReset = new QAction(VPiano);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        actionReset->setFont(font);
        actionEditKM = new QAction(VPiano);
        actionEditKM->setObjectName(QStringLiteral("actionEditKM"));
        actionContents = new QAction(VPiano);
        actionContents->setObjectName(QStringLiteral("actionContents"));
        actionContents->setShortcut(QStringLiteral("F1"));
        actionWebSite = new QAction(VPiano);
        actionWebSite->setObjectName(QStringLiteral("actionWebSite"));
        actionImportSoundFont = new QAction(VPiano);
        actionImportSoundFont->setObjectName(QStringLiteral("actionImportSoundFont"));
        actionExtraControls = new QAction(VPiano);
        actionExtraControls->setObjectName(QStringLiteral("actionExtraControls"));
        actionExtraControls->setCheckable(true);
        actionEditExtra = new QAction(VPiano);
        actionEditExtra->setObjectName(QStringLiteral("actionEditExtra"));
        actionEditExtra->setFont(font);
        actionEditPrograms = new QAction(VPiano);
        actionEditPrograms->setObjectName(QStringLiteral("actionEditPrograms"));
        actionEditPrograms->setEnabled(false);
        actionEditPrograms->setFont(font);
        actionEditPrograms->setVisible(false);
        actionEditPrograms->setIconVisibleInMenu(false);
        actionEditExtraControls = new QAction(VPiano);
        actionEditExtraControls->setObjectName(QStringLiteral("actionEditExtraControls"));
        actionNoteNames = new QAction(VPiano);
        actionNoteNames->setObjectName(QStringLiteral("actionNoteNames"));
        actionNoteNames->setCheckable(true);
        actionShortcuts = new QAction(VPiano);
        actionShortcuts->setObjectName(QStringLiteral("actionShortcuts"));
        actionOctaveUp = new QAction(VPiano);
        actionOctaveUp->setObjectName(QStringLiteral("actionOctaveUp"));
        actionOctaveUp->setShortcut(QStringLiteral("Right"));
        actionOctaveDown = new QAction(VPiano);
        actionOctaveDown->setObjectName(QStringLiteral("actionOctaveDown"));
        actionOctaveDown->setShortcut(QStringLiteral("Left"));
        actionTransposeUp = new QAction(VPiano);
        actionTransposeUp->setObjectName(QStringLiteral("actionTransposeUp"));
        actionTransposeUp->setShortcut(QStringLiteral("Ctrl+Right"));
        actionTransposeDown = new QAction(VPiano);
        actionTransposeDown->setObjectName(QStringLiteral("actionTransposeDown"));
        actionTransposeDown->setShortcut(QStringLiteral("Ctrl+Left"));
        actionChannelUp = new QAction(VPiano);
        actionChannelUp->setObjectName(QStringLiteral("actionChannelUp"));
        actionChannelUp->setShortcut(QStringLiteral("Up"));
        actionChannelDown = new QAction(VPiano);
        actionChannelDown->setObjectName(QStringLiteral("actionChannelDown"));
        actionChannelDown->setShortcut(QStringLiteral("Down"));
        actionNextController = new QAction(VPiano);
        actionNextController->setObjectName(QStringLiteral("actionNextController"));
        actionNextController->setShortcut(QStringLiteral("Ctrl++"));
        actionPreviousController = new QAction(VPiano);
        actionPreviousController->setObjectName(QStringLiteral("actionPreviousController"));
        actionPreviousController->setShortcut(QStringLiteral("Ctrl+-"));
        actionControllerUp = new QAction(VPiano);
        actionControllerUp->setObjectName(QStringLiteral("actionControllerUp"));
        actionControllerUp->setShortcut(QStringLiteral("+"));
        actionControllerDown = new QAction(VPiano);
        actionControllerDown->setObjectName(QStringLiteral("actionControllerDown"));
        actionControllerDown->setShortcut(QStringLiteral("-"));
        actionNextBank = new QAction(VPiano);
        actionNextBank->setObjectName(QStringLiteral("actionNextBank"));
        actionNextBank->setShortcut(QStringLiteral("Ctrl+PgUp"));
        actionPreviousBank = new QAction(VPiano);
        actionPreviousBank->setObjectName(QStringLiteral("actionPreviousBank"));
        actionPreviousBank->setShortcut(QStringLiteral("Ctrl+PgDown"));
        actionNextProgram = new QAction(VPiano);
        actionNextProgram->setObjectName(QStringLiteral("actionNextProgram"));
        actionNextProgram->setShortcut(QStringLiteral("PgUp"));
        actionPreviousProgram = new QAction(VPiano);
        actionPreviousProgram->setObjectName(QStringLiteral("actionPreviousProgram"));
        actionPreviousProgram->setShortcut(QStringLiteral("PgDown"));
        actionVelocityUp = new QAction(VPiano);
        actionVelocityUp->setObjectName(QStringLiteral("actionVelocityUp"));
        actionVelocityUp->setShortcut(QStringLiteral("End"));
        actionVelocityDown = new QAction(VPiano);
        actionVelocityDown->setObjectName(QStringLiteral("actionVelocityDown"));
        actionVelocityDown->setShortcut(QStringLiteral("Home"));
        actionAboutTranslation = new QAction(VPiano);
        actionAboutTranslation->setObjectName(QStringLiteral("actionAboutTranslation"));
        actionKeyboardInput = new QAction(VPiano);
        actionKeyboardInput->setObjectName(QStringLiteral("actionKeyboardInput"));
        actionKeyboardInput->setCheckable(true);
        actionKeyboardInput->setChecked(true);
        actionMouseInput = new QAction(VPiano);
        actionMouseInput->setObjectName(QStringLiteral("actionMouseInput"));
        actionMouseInput->setCheckable(true);
        actionMouseInput->setChecked(true);
        actionTouchScreenInput = new QAction(VPiano);
        actionTouchScreenInput->setObjectName(QStringLiteral("actionTouchScreenInput"));
        actionTouchScreenInput->setCheckable(true);
        actionTouchScreenInput->setChecked(true);
        actionColorPalette = new QAction(VPiano);
        actionColorPalette->setObjectName(QStringLiteral("actionColorPalette"));
        actionColorScale = new QAction(VPiano);
        actionColorScale->setObjectName(QStringLiteral("actionColorScale"));
        actionColorScale->setCheckable(true);
        actionRecorder = new QAction(VPiano);
        actionRecorder->setObjectName(QStringLiteral("actionRecorder"));
        centralwidget = new QWidget(VPiano);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pianokeybd = new PianoKeybd(centralwidget);
        pianokeybd->setObjectName(QStringLiteral("pianokeybd"));

        gridLayout->addWidget(pianokeybd, 1, 0, 1, 1);

        VPiano->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VPiano);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 622, 31));
        QPalette palette;
        QBrush brush(QColor(0, 179, 139, 255));
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
        menubar->setPalette(palette);
        menubar->setFont(font);
        menubar->setAutoFillBackground(false);
        menubar->setStyleSheet(QLatin1String("color:rgb(0, 179, 139)\n"
""));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setStyleSheet(QLatin1String("color:rgb(0, 179, 139)\n"
""));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuLanguage = new QMenu(menuHelp);
        menuLanguage->setObjectName(QStringLiteral("menuLanguage"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuNotes = new QMenu(menuTools);
        menuNotes->setObjectName(QStringLiteral("menuNotes"));
        menuControllers = new QMenu(menuTools);
        menuControllers->setObjectName(QStringLiteral("menuControllers"));
        menuPrograms = new QMenu(menuTools);
        menuPrograms->setObjectName(QStringLiteral("menuPrograms"));
        menuNote_Input = new QMenu(menuTools);
        menuNote_Input->setObjectName(QStringLiteral("menuNote_Input"));
        VPiano->setMenuBar(menubar);
        statusBar = new QStatusBar(VPiano);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setSizeGripEnabled(true);
        VPiano->setStatusBar(statusBar);
        toolBarNotes = new QToolBar(VPiano);
        toolBarNotes->setObjectName(QStringLiteral("toolBarNotes"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBarNotes->sizePolicy().hasHeightForWidth());
        toolBarNotes->setSizePolicy(sizePolicy);
        toolBarNotes->setStyleSheet(QLatin1String("color:rgb(0, 179, 139)\n"
""));
        toolBarNotes->setToolButtonStyle(Qt::ToolButtonTextOnly);
        VPiano->addToolBar(Qt::TopToolBarArea, toolBarNotes);
        toolBarControllers = new QToolBar(VPiano);
        toolBarControllers->setObjectName(QStringLiteral("toolBarControllers"));
        sizePolicy.setHeightForWidth(toolBarControllers->sizePolicy().hasHeightForWidth());
        toolBarControllers->setSizePolicy(sizePolicy);
        toolBarControllers->setStyleSheet(QLatin1String("color:rgb(0, 179, 139)\n"
""));
        toolBarControllers->setToolButtonStyle(Qt::ToolButtonTextOnly);
        VPiano->addToolBar(Qt::TopToolBarArea, toolBarControllers);
        VPiano->insertToolBarBreak(toolBarControllers);
        toolBarBender = new QToolBar(VPiano);
        toolBarBender->setObjectName(QStringLiteral("toolBarBender"));
        sizePolicy.setHeightForWidth(toolBarBender->sizePolicy().hasHeightForWidth());
        toolBarBender->setSizePolicy(sizePolicy);
        toolBarBender->setStyleSheet(QLatin1String("color:rgb(0, 179, 139)\n"
""));
        toolBarBender->setToolButtonStyle(Qt::ToolButtonTextOnly);
        VPiano->addToolBar(Qt::TopToolBarArea, toolBarBender);
        VPiano->insertToolBarBreak(toolBarBender);
        toolBarPrograms = new QToolBar(VPiano);
        toolBarPrograms->setObjectName(QStringLiteral("toolBarPrograms"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBarPrograms->sizePolicy().hasHeightForWidth());
        toolBarPrograms->setSizePolicy(sizePolicy1);
        toolBarPrograms->setStyleSheet(QLatin1String("color:rgb(0, 179, 139)\n"
""));
        toolBarPrograms->setToolButtonStyle(Qt::ToolButtonTextOnly);
        VPiano->addToolBar(Qt::TopToolBarArea, toolBarPrograms);
        VPiano->insertToolBarBreak(toolBarPrograms);
        toolBarExtra = new QToolBar(VPiano);
        toolBarExtra->setObjectName(QStringLiteral("toolBarExtra"));
        sizePolicy.setHeightForWidth(toolBarExtra->sizePolicy().hasHeightForWidth());
        toolBarExtra->setSizePolicy(sizePolicy);
        toolBarExtra->setStyleSheet(QLatin1String("color:rgb(0, 179, 139)\n"
""));
        toolBarExtra->setToolButtonStyle(Qt::ToolButtonTextOnly);
        VPiano->addToolBar(Qt::TopToolBarArea, toolBarExtra);
        VPiano->insertToolBarBreak(toolBarExtra);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionImportSoundFont);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionConnections);
        menuEdit->addAction(actionPreferences);
        menuEdit->addAction(actionEditKM);
        menuEdit->addAction(actionEditExtraControls);
        menuEdit->addAction(actionShortcuts);
        menuEdit->addAction(actionColorPalette);
        menuHelp->addAction(actionContents);
        menuHelp->addAction(actionWebSite);
        menuHelp->addAction(menuLanguage->menuAction());
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutTranslation);
        menuHelp->addAction(actionAboutQt);
        menuView->addAction(actionNotes);
        menuView->addAction(actionControllers);
        menuView->addAction(actionBender);
        menuView->addAction(actionPrograms);
        menuView->addAction(actionExtraControls);
        menuView->addSeparator();
        menuView->addAction(actionNoteNames);
        menuView->addAction(actionColorScale);
        menuView->addAction(actionStatusBar);
        menuTools->addAction(actionChannelUp);
        menuTools->addAction(actionChannelDown);
        menuTools->addAction(menuNotes->menuAction());
        menuTools->addAction(menuControllers->menuAction());
        menuTools->addAction(menuPrograms->menuAction());
        menuTools->addAction(menuNote_Input->menuAction());
        menuTools->addAction(actionRecorder);
        menuNotes->addAction(actionOctaveUp);
        menuNotes->addAction(actionOctaveDown);
        menuNotes->addAction(actionTransposeUp);
        menuNotes->addAction(actionTransposeDown);
        menuNotes->addAction(actionVelocityUp);
        menuNotes->addAction(actionVelocityDown);
        menuControllers->addAction(actionNextController);
        menuControllers->addAction(actionPreviousController);
        menuControllers->addAction(actionControllerUp);
        menuControllers->addAction(actionControllerDown);
        menuPrograms->addAction(actionNextBank);
        menuPrograms->addAction(actionPreviousBank);
        menuPrograms->addAction(actionNextProgram);
        menuPrograms->addAction(actionPreviousProgram);
        menuNote_Input->addAction(actionKeyboardInput);
        menuNote_Input->addAction(actionMouseInput);
        menuNote_Input->addAction(actionTouchScreenInput);
        toolBarNotes->addAction(actionPanic);
        toolBarNotes->addSeparator();
        toolBarControllers->addAction(actionResetAll);
        toolBarControllers->addSeparator();
        toolBarBender->addAction(actionReset);
        toolBarBender->addSeparator();
        toolBarExtra->addAction(actionEditPrograms);
        toolBarExtra->addAction(actionEditExtra);
        toolBarExtra->addSeparator();

        retranslateUi(VPiano);
        QObject::connect(actionExit, SIGNAL(triggered()), VPiano, SLOT(close()));
        QObject::connect(actionNotes, SIGNAL(toggled(bool)), toolBarNotes, SLOT(setVisible(bool)));
        QObject::connect(actionControllers, SIGNAL(toggled(bool)), toolBarControllers, SLOT(setVisible(bool)));
        QObject::connect(actionBender, SIGNAL(toggled(bool)), toolBarBender, SLOT(setVisible(bool)));
        QObject::connect(actionPrograms, SIGNAL(toggled(bool)), toolBarPrograms, SLOT(setVisible(bool)));
        QObject::connect(actionStatusBar, SIGNAL(toggled(bool)), statusBar, SLOT(setVisible(bool)));
        QObject::connect(actionExtraControls, SIGNAL(toggled(bool)), toolBarExtra, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(VPiano);
    } // setupUi

    void retranslateUi(QMainWindow *VPiano)
    {
        actionExit->setText(QApplication::translate("VPiano", "&Quit", 0));
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("VPiano", "Exit the program", 0));
#endif // QT_NO_STATUSTIP
        actionPreferences->setText(QApplication::translate("VPiano", "&Preferences", 0));
#ifndef QT_NO_STATUSTIP
        actionPreferences->setStatusTip(QApplication::translate("VPiano", "Edit the program settings", 0));
#endif // QT_NO_STATUSTIP
        actionConnections->setText(QApplication::translate("VPiano", "MIDI &Connections", 0));
#ifndef QT_NO_STATUSTIP
        actionConnections->setStatusTip(QApplication::translate("VPiano", "Edit the MIDI connections", 0));
#endif // QT_NO_STATUSTIP
        actionAbout->setText(QApplication::translate("VPiano", "&About", 0));
#ifndef QT_NO_STATUSTIP
        actionAbout->setStatusTip(QApplication::translate("VPiano", "Show the About box", 0));
#endif // QT_NO_STATUSTIP
        actionAboutQt->setText(QApplication::translate("VPiano", "About &Qt", 0));
#ifndef QT_NO_STATUSTIP
        actionAboutQt->setStatusTip(QApplication::translate("VPiano", "Show the Qt about box", 0));
#endif // QT_NO_STATUSTIP
        actionNotes->setText(QApplication::translate("VPiano", "&Notes", 0));
#ifndef QT_NO_STATUSTIP
        actionNotes->setStatusTip(QApplication::translate("VPiano", "Show or hide the Notes toolbar", 0));
#endif // QT_NO_STATUSTIP
        actionControllers->setText(QApplication::translate("VPiano", "&Controllers", 0));
#ifndef QT_NO_STATUSTIP
        actionControllers->setStatusTip(QApplication::translate("VPiano", "Show or hide the Controller toolbar", 0));
#endif // QT_NO_STATUSTIP
        actionBender->setText(QApplication::translate("VPiano", "Pitch &Bender", 0));
#ifndef QT_NO_STATUSTIP
        actionBender->setStatusTip(QApplication::translate("VPiano", "Show or hide the Pitch Bender toolbar", 0));
#endif // QT_NO_STATUSTIP
        actionPrograms->setText(QApplication::translate("VPiano", "&Programs", 0));
#ifndef QT_NO_STATUSTIP
        actionPrograms->setStatusTip(QApplication::translate("VPiano", "Show or hide the Programs toolbar", 0));
#endif // QT_NO_STATUSTIP
        actionStatusBar->setText(QApplication::translate("VPiano", "&Status Bar", 0));
#ifndef QT_NO_STATUSTIP
        actionStatusBar->setStatusTip(QApplication::translate("VPiano", "Show or hide the Status Bar", 0));
#endif // QT_NO_STATUSTIP
        actionPanic->setText(QApplication::translate("VPiano", "panic", 0));
#ifndef QT_NO_STATUSTIP
        actionPanic->setStatusTip(QApplication::translate("VPiano", "Stops all active notes", 0));
#endif // QT_NO_STATUSTIP
        actionResetAll->setText(QApplication::translate("VPiano", "Reset All", 0));
#ifndef QT_NO_STATUSTIP
        actionResetAll->setStatusTip(QApplication::translate("VPiano", "Resets all the controllers", 0));
#endif // QT_NO_STATUSTIP
        actionReset->setText(QApplication::translate("VPiano", "Reset", 0));
#ifndef QT_NO_STATUSTIP
        actionReset->setStatusTip(QApplication::translate("VPiano", "Resets the Bender value", 0));
#endif // QT_NO_STATUSTIP
        actionEditKM->setText(QApplication::translate("VPiano", "&Keyboard Map", 0));
#ifndef QT_NO_STATUSTIP
        actionEditKM->setStatusTip(QApplication::translate("VPiano", "Edit the current keyboard layout", 0));
#endif // QT_NO_STATUSTIP
        actionContents->setText(QApplication::translate("VPiano", "&Contents", 0));
#ifndef QT_NO_STATUSTIP
        actionContents->setStatusTip(QApplication::translate("VPiano", "Open the index of the help document", 0));
#endif // QT_NO_STATUSTIP
        actionWebSite->setText(QApplication::translate("VPiano", "VMPK &Web site", 0));
#ifndef QT_NO_STATUSTIP
        actionWebSite->setStatusTip(QApplication::translate("VPiano", "Open the VMPK web site address using a web browser", 0));
#endif // QT_NO_STATUSTIP
        actionImportSoundFont->setText(QApplication::translate("VPiano", "&Import SoundFont...", 0));
#ifndef QT_NO_STATUSTIP
        actionImportSoundFont->setStatusTip(QApplication::translate("VPiano", "Import SoundFont", 0));
#endif // QT_NO_STATUSTIP
        actionExtraControls->setText(QApplication::translate("VPiano", "&Extra Controls", 0));
#ifndef QT_NO_STATUSTIP
        actionExtraControls->setStatusTip(QApplication::translate("VPiano", "Show or hide the Extra Controls toolbar", 0));
#endif // QT_NO_STATUSTIP
        actionEditExtra->setText(QApplication::translate("VPiano", "Edit", 0));
#ifndef QT_NO_STATUSTIP
        actionEditExtra->setStatusTip(QApplication::translate("VPiano", "Open the Extra Controls editor", 0));
#endif // QT_NO_STATUSTIP
        actionEditPrograms->setText(QApplication::translate("VPiano", "Edit", 0));
#ifndef QT_NO_STATUSTIP
        actionEditPrograms->setStatusTip(QApplication::translate("VPiano", "Open the Banks/Programs editor", 0));
#endif // QT_NO_STATUSTIP
        actionEditExtraControls->setText(QApplication::translate("VPiano", "&Extra Controllers", 0));
#ifndef QT_NO_STATUSTIP
        actionEditExtraControls->setStatusTip(QApplication::translate("VPiano", "Open the Extra Controls editor", 0));
#endif // QT_NO_STATUSTIP
        actionNoteNames->setText(QApplication::translate("VPiano", "N&ote Names", 0));
#ifndef QT_NO_STATUSTIP
        actionNoteNames->setStatusTip(QApplication::translate("VPiano", "Show or hide the note names", 0));
#endif // QT_NO_STATUSTIP
        actionShortcuts->setText(QApplication::translate("VPiano", "&Shortcuts", 0));
#ifndef QT_NO_STATUSTIP
        actionShortcuts->setStatusTip(QApplication::translate("VPiano", "Open the Shortcuts editor", 0));
#endif // QT_NO_STATUSTIP
        actionOctaveUp->setText(QApplication::translate("VPiano", "Octave Up", 0));
#ifndef QT_NO_STATUSTIP
        actionOctaveUp->setStatusTip(QApplication::translate("VPiano", "Play one octave higher", 0));
#endif // QT_NO_STATUSTIP
        actionOctaveDown->setText(QApplication::translate("VPiano", "Octave Down", 0));
#ifndef QT_NO_STATUSTIP
        actionOctaveDown->setStatusTip(QApplication::translate("VPiano", "Play one octave lower", 0));
#endif // QT_NO_STATUSTIP
        actionTransposeUp->setText(QApplication::translate("VPiano", "Transpose Up", 0));
#ifndef QT_NO_STATUSTIP
        actionTransposeUp->setStatusTip(QApplication::translate("VPiano", "Transpose one semitone higher", 0));
#endif // QT_NO_STATUSTIP
        actionTransposeDown->setText(QApplication::translate("VPiano", "Transpose Down", 0));
#ifndef QT_NO_STATUSTIP
        actionTransposeDown->setStatusTip(QApplication::translate("VPiano", "Transpose one semitone lower", 0));
#endif // QT_NO_STATUSTIP
        actionChannelUp->setText(QApplication::translate("VPiano", "Next  Channel", 0));
#ifndef QT_NO_STATUSTIP
        actionChannelUp->setStatusTip(QApplication::translate("VPiano", "Play and listen next channel", 0));
#endif // QT_NO_STATUSTIP
        actionChannelDown->setText(QApplication::translate("VPiano", "Previous Channel", 0));
#ifndef QT_NO_STATUSTIP
        actionChannelDown->setStatusTip(QApplication::translate("VPiano", "Play and listen previous channel", 0));
#endif // QT_NO_STATUSTIP
        actionNextController->setText(QApplication::translate("VPiano", "Next Controller", 0));
#ifndef QT_NO_STATUSTIP
        actionNextController->setStatusTip(QApplication::translate("VPiano", "Select the next controller", 0));
#endif // QT_NO_STATUSTIP
        actionPreviousController->setText(QApplication::translate("VPiano", "Previous Controller", 0));
#ifndef QT_NO_STATUSTIP
        actionPreviousController->setStatusTip(QApplication::translate("VPiano", "Select the previous controller", 0));
#endif // QT_NO_STATUSTIP
        actionControllerUp->setText(QApplication::translate("VPiano", "Controller Up", 0));
#ifndef QT_NO_STATUSTIP
        actionControllerUp->setStatusTip(QApplication::translate("VPiano", "Increment the controller value", 0));
#endif // QT_NO_STATUSTIP
        actionControllerDown->setText(QApplication::translate("VPiano", "Controller Down", 0));
#ifndef QT_NO_STATUSTIP
        actionControllerDown->setStatusTip(QApplication::translate("VPiano", "Decrement the controller value", 0));
#endif // QT_NO_STATUSTIP
        actionNextBank->setText(QApplication::translate("VPiano", "Next Bank", 0));
#ifndef QT_NO_STATUSTIP
        actionNextBank->setStatusTip(QApplication::translate("VPiano", "Select the next instrument bank", 0));
#endif // QT_NO_STATUSTIP
        actionPreviousBank->setText(QApplication::translate("VPiano", "Previous Bank", 0));
#ifndef QT_NO_STATUSTIP
        actionPreviousBank->setStatusTip(QApplication::translate("VPiano", "Select the previous instrument bank", 0));
#endif // QT_NO_STATUSTIP
        actionNextProgram->setText(QApplication::translate("VPiano", "Next Program", 0));
#ifndef QT_NO_STATUSTIP
        actionNextProgram->setStatusTip(QApplication::translate("VPiano", "Select the next instrument program", 0));
#endif // QT_NO_STATUSTIP
        actionPreviousProgram->setText(QApplication::translate("VPiano", "Previous Program", 0));
#ifndef QT_NO_STATUSTIP
        actionPreviousProgram->setStatusTip(QApplication::translate("VPiano", "Select the previous instrument program", 0));
#endif // QT_NO_STATUSTIP
        actionVelocityUp->setText(QApplication::translate("VPiano", "Velocity Up", 0));
#ifndef QT_NO_STATUSTIP
        actionVelocityUp->setStatusTip(QApplication::translate("VPiano", "Increment note velocity", 0));
#endif // QT_NO_STATUSTIP
        actionVelocityDown->setText(QApplication::translate("VPiano", "Velocity Down", 0));
#ifndef QT_NO_STATUSTIP
        actionVelocityDown->setStatusTip(QApplication::translate("VPiano", "Decrement note velocity", 0));
#endif // QT_NO_STATUSTIP
        actionAboutTranslation->setText(QApplication::translate("VPiano", "About &Translation", 0));
#ifndef QT_NO_STATUSTIP
        actionAboutTranslation->setStatusTip(QApplication::translate("VPiano", "Show information about the program language translation", 0));
#endif // QT_NO_STATUSTIP
        actionKeyboardInput->setText(QApplication::translate("VPiano", "Computer Keyboard", 0));
#ifndef QT_NO_STATUSTIP
        actionKeyboardInput->setStatusTip(QApplication::translate("VPiano", "Enable computer keyboard triggered note input", 0));
#endif // QT_NO_STATUSTIP
        actionMouseInput->setText(QApplication::translate("VPiano", "Mouse", 0));
#ifndef QT_NO_STATUSTIP
        actionMouseInput->setStatusTip(QApplication::translate("VPiano", "Enable mouse triggered note input", 0));
#endif // QT_NO_STATUSTIP
        actionTouchScreenInput->setText(QApplication::translate("VPiano", "Touch Screen", 0));
#ifndef QT_NO_STATUSTIP
        actionTouchScreenInput->setStatusTip(QApplication::translate("VPiano", "Enable screen touch triggered note input", 0));
#endif // QT_NO_STATUSTIP
        actionColorPalette->setText(QApplication::translate("VPiano", "Color Palette", 0));
#ifndef QT_NO_STATUSTIP
        actionColorPalette->setStatusTip(QApplication::translate("VPiano", "Open the color palette editor", 0));
#endif // QT_NO_STATUSTIP
        actionColorScale->setText(QApplication::translate("VPiano", "Color Scale", 0));
#ifndef QT_NO_STATUSTIP
        actionColorScale->setStatusTip(QApplication::translate("VPiano", "Show or hide the colorized keys", 0));
#endif // QT_NO_STATUSTIP
        actionRecorder->setText(QApplication::translate("VPiano", "Recorder", 0));
        menuFile->setTitle(QApplication::translate("VPiano", "&File", 0));
        menuEdit->setTitle(QApplication::translate("VPiano", "&Edit", 0));
        menuHelp->setTitle(QApplication::translate("VPiano", "&Help", 0));
        menuLanguage->setTitle(QApplication::translate("VPiano", "&Language", 0));
        menuView->setTitle(QApplication::translate("VPiano", "&View", 0));
        menuTools->setTitle(QApplication::translate("VPiano", "&Tools", 0));
        menuNotes->setTitle(QApplication::translate("VPiano", "Notes", 0));
        menuControllers->setTitle(QApplication::translate("VPiano", "Controllers", 0));
        menuPrograms->setTitle(QApplication::translate("VPiano", "Programs", 0));
        menuNote_Input->setTitle(QApplication::translate("VPiano", "Note Input", 0));
        toolBarNotes->setWindowTitle(QApplication::translate("VPiano", "&Notes", 0));
        toolBarControllers->setWindowTitle(QApplication::translate("VPiano", "&Controllers", 0));
        toolBarBender->setWindowTitle(QApplication::translate("VPiano", "Pitch &Bender", 0));
        toolBarPrograms->setWindowTitle(QApplication::translate("VPiano", "&Programs", 0));
        toolBarExtra->setWindowTitle(QApplication::translate("VPiano", "&Extra Controls", 0));
        Q_UNUSED(VPiano);
    } // retranslateUi

};

namespace Ui {
    class VPiano: public Ui_VPiano {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VPIANO_H
