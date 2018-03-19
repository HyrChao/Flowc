//2018/03/06
//Chao

#pragma once

#include <QDialog>
#include "GeneratedFiles\ui_TestGUI.h"


class TestGUI : public QDialog
{
	Q_OBJECT

public:
	TestGUI(QWidget *parent = Q_NULLPTR);
	~TestGUI();

private:
	Ui::TestGUI ui;
	//Test_Cpp_01 *testcpp;
	//Test_1 *test1;

private slots:
	void Test3();
	void Test1();
	void Test2();

};		 
		 