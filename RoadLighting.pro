#-------------------------------------------------
#
# Project created by QtCreator 2016-01-30T13:43:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RoadLighting
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        application.cpp \
    project.cpp \
    straight_road.cpp \
    straight_pavement.cpp \
    straight_area.cpp \
    staight_area_factory.cpp

HEADERS  += mainwindow.h \
        application.h \
    project.h \
    interface.h \
    straight_road.h \
    straight_pavement.h \
    straight_area.h \
    staight_area_factory.h \
    utilities.h

FORMS    += mainwindow.ui
CONFIG   += c++11
