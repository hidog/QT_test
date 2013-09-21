#include "mainwindow.h"
#include "ui_mainwindow.h"


/**********************************************************************************
	constructor
***********************************************************************************/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);

	setup_connections();		// �إ߳s��
}



/**********************************************************************************
	destructor
***********************************************************************************/
MainWindow::~MainWindow()
{}





/**********************************************************************************
	�]�w�s��
***********************************************************************************/
void	MainWindow::setup_connections()
{
	connect( testButton,		SIGNAL(clicked()),		this,			SLOT(label_test())				);
	//connect( testButton,		SIGNAL(clicked()),		testLabel,		SLOT(setText(QString("test")))	);
}


void	MainWindow::label_test()
{
	int		a;
	int		b;

	for( a = 0; a < 10; a++ )
		b	+=	a;

	testLabel->setText("test");

}