#-------------------------------------------------
#
# Project created by QtCreator 2013-09-25T14:37:20
#
#-------------------------------------------------

QT       += core gui

TARGET = neya
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    image_thresholder.cpp \
    sliders_group.cpp \
    control_panel.cpp

HEADERS  += mainwindow.h \
    image_thresholder.h \
    sliders_group.h \
    control_panel.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    head2.png \
    head.png
