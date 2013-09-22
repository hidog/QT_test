#include "mainwindow.h"
#include "ui_mainwindow.h"


/**********************************************************************************
	constructor
***********************************************************************************/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);

	setup_connections();		// 建立連結
}



/**********************************************************************************
	destructor
***********************************************************************************/
MainWindow::~MainWindow()
{}





/**********************************************************************************
	設定連結
***********************************************************************************/
void	MainWindow::setup_connections()
{
	//connect( testButton,		SIGNAL(clicked()),		this,			SLOT(label_test())				);
	//connect( testButton,		SIGNAL(clicked()),		testLabel,		SLOT(setText(QString("test")))	);
}

