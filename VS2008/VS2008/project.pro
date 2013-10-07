#-------------------------------------------------
#
# Project created by QtCreator 2013-09-21T10:51:51
#
#-------------------------------------------------

QT       	+=	core gui

Debug:TARGET	=	../../debug/QT_test.exe
Release:TARGET	=   ../../release/QT_test.exe

TEMPLATE		=	app

DEFINES			+=	#
DEPENDPATH		+=	. \
                    ../QT_src \
                    ../QT_ui \

INCLUDEPATH		+=	. # include path

SOURCES			+=	main.cpp\
                    ../../QT_src/mainwindow.cpp \

HEADERS  		+=	../../QT_src/mainwindow.h \

FORMS			+=	../../QT_ui/mainwindow.ui \

