//2018/03/03
//Chao

#include "MainGUI.h"
#include "TestGUI.h"
#include "Test_Cpp_01.h"
#include "TestDialog.h"
#include <QTextEdit>
#include <QDockWidget>

MainGUI::MainGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.actionTest, SIGNAL(triggered()), this, SLOT(StartTestGUI()));
	connect(ui.actionTestDialog, SIGNAL(triggered()), this, SLOT(StartTestDialog()));
	//connect(ui.debugBtn, SIGNAL(clicked()), this, SLOT(Debug()));

	QTextEdit *te = new QTextEdit(this);
	te->setText(tr("Main Window"));
	te->setAlignment(Qt::AlignCenter);
	setCentralWidget(te);

	QDockWidget *dock = new QDockWidget(tr("DockWindow1"), this);
	dock->setFeatures(QDockWidget::DockWidgetMovable);
	dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
	QTextEdit *tel = new QTextEdit();
	tel->setText(tr("Window1,The dock can be moved between docks by the user" ""));
	dock->setWidget(tel);
	addDockWidget(Qt::LeftDockWidgetArea, dock);

	dock = new QDockWidget(tr("DockWindow2"), this);
	dock->setFeatures(QDockWidget::DockWidgetClosable | QDockWidget::DockWidgetFloatable);
	dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
	QTextEdit *te2 = new QTextEdit();
	te2->setText(tr("Window2, The dock widget can be detached from the main window,""and floated as an independent window, and can be closed"));
	dock->setWidget(te2);
	addDockWidget(Qt::RightDockWidgetArea, dock);

	dock = new QDockWidget(tr("DockWindow3"),this);
	dock->setFeatures(QDockWidget::AllDockWidgetFeatures);
	QTextEdit *te3 = new QTextEdit();
	te3->setText(tr("Window3, The dock widget can be closed, moved, and floated"));
	dock->setWidget(te3);
	addDockWidget(Qt::BottomDockWidgetArea, dock);
}

MainGUI::~MainGUI()
{

}

void MainGUI::StartTestGUI()
{
	//QString valueStr = "Debug";
	//ui.debugLabel->setText(valueStr);
	//TestGUI test = new TestGUI();
	//test.show();

	TestGUI *test = new TestGUI(this);
	test->show();

	//Test_Cpp_01 testcpp = new Test_Cpp_01;
	//testcpp.show();
}

void MainGUI::StartTestDialog()
{
	TestDialog *testDialog = new TestDialog(this);
	testDialog->show();
}

void MainGUI::Debug()
{
	QString valueStr = "Debug";
	//ui.debugLabel->setText(valueStr);
	//debugLabel
}


