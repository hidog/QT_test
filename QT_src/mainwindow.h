#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../VS2008/VS2008/ui_mainwindow.h"





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
