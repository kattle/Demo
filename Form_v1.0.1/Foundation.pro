#-------------------------------------------------
#
# Project created by QtCreator 2016-07-24T17:32:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Foundation
TEMPLATE = app
DEFINES += WINDOWS
DEFINES += X86



SOURCES += main.cpp\
        foundation.cpp

HEADERS  += foundation.h

FORMS    += foundation.ui

include(./common/common.pri)
include(./iObject/iObject.pri)
include(./iHelper/iHelper.pri)

