#-------------------------------------------------
#
# Project created by QtCreator 2013-09-21T10:51:51
#
#-------------------------------------------------

QT       	+=	core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

Debug:TARGET	=	../../Debug/QT_test.exe
Release:TARGET	=	../../Release/QT_test.exe

TEMPLATE		=	app

DEFINES			+=	# �置����
DEPENDPATH		+=	. \
					../QT_src \
					../QT_ui \
				

INCLUDEPATH		+=	. # include path 引用���庫使

SOURCES			+=	main.cpp\
					mainwindow.cpp \
    ../QT_src/mainwindow.cpp

HEADERS  		+=	mainwindow.h \
    ../QT_src/mainwindow.h

FORMS			+=	mainwindow.ui \
    ../QT_ui/mainwindow.ui
