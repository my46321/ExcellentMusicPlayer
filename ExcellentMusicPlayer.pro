#-------------------------------------------------
#
# Project created by QtCreator 2015-05-03T20:53:35
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
QT       += multimediawidgets
QT       += network
QT       += winextras
QT += webkitwidgets
QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExcellentMusicPlayer
TEMPLATE = app


SOURCES += main.cpp\
        mymaindlg.cpp \
    downloadinfodlg.cpp \
    mylrc.cpp \
    mymaintablewidget.cpp \
    mynetwork.cpp \
    myplaylist.cpp \
    qsingleapplication.cpp \
    searchlrcdlg.cpp \
    skinbox.cpp \
    musicmarqueewidget.cpp \
    mybutton.cpp \
    audiorecorder.cpp \
    freelisten.cpp \
    downloaddialog.cpp \
    videoplayer.cpp \
    app.cpp \
    iconhelper.cpp \
    qtweather.cpp

HEADERS  += mymaindlg.h \
    downloadinfodlg.h \
    mylrc.h \
    mymaintablewidget.h \
    mynetwork.h \
    myplaylist.h \
    qsingleapplication.h \
    searchlrcdlg.h \
    skinbox.h \
    musicmarqueewidget.h \
    mybutton.h \
    audiorecorder.h \
    freelisten.h \
    downloaddialog.h \
    videoplayer.h \
    app.h \
    iconhelper.h \
    myhelper.h \
    qtweather.h \
    ui_qtweather.h

FORMS    += mymaindlg.ui \
    downloadinfodlg.ui \
    searchlrcdlg.ui \
    skinbox.ui \
    freelisten.ui \
    downloaddialog.ui \
    qtweather.ui

RESOURCES += \
    resource.qrc \
    rc.qrc
RC_FILE = image/sysicon.rc
