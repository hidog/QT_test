#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../VS2008/VS2008/ui_mainwindow.h"





/**********************************************************************************
	�D��������
***********************************************************************************/
class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);		// constructor
    ~MainWindow();									// destructor

	void	setup_connections();					// �]�w�s��

private:
   

protected:
	signals:


protected	slots:



};










#endif // MAINWINDOW_H
