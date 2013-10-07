#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#if defined(WIN32)
#include "../VS2008/VS2008/ui_mainwindow.h"
#else
#include "ui_mainwindow.h"
#endif



/**********************************************************************************
	主視窗物件
***********************************************************************************/
class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);		// constructor
    ~MainWindow();									// destructor

	void	setup_connections();					// 設定連結

private:
   

protected:
	signals:


protected	slots:



};










#endif // MAINWINDOW_H
