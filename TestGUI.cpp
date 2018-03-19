//2018/03/06
//Chao

#include "TestGUI.h"
#include "Test_Cpp_01.h"
#include "Test_1.h"
#include "Test_StackedWidget.h"

TestGUI::TestGUI(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.test1, SIGNAL(clicked()), this, SLOT(Test1()));
	connect(ui.test2, SIGNAL(clicked()), this, SLOT(Test2()));
	connect(ui.test3, SIGNAL(clicked()), this, SLOT(Test3()));
}

TestGUI::~TestGUI()
{
}

void TestGUI::Test1()
{
	Test_Cpp_01 *testGui = new Test_Cpp_01(this);
	testGui->show();
}

void TestGUI::Test2()
{
	Test_1 *test1 = new Test_1(this);
	//Qt::WindowFlags flag = Qt::WindowStaysOnTopHint;
	//test1->setWindowFlags(flag);
	test1->show();
}

void TestGUI::Test3()
{
	Test_StackedWidget *testStackedWidget = new Test_StackedWidget(this);
	testStackedWidget->setWindowFlag(Qt::Window);
	testStackedWidget->show();

}
