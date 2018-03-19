//2018/03/10
//Chao

#pragma once

#include <QWindow>
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

class Test_Cpp_01 : public QDialog
{
	Q_OBJECT

public:
	Test_Cpp_01(QWidget *parent = nullptr);
	~Test_Cpp_01();

private:
	QLabel *label1, *label2;
	QLineEdit *lineEdit;
	QPushButton *btn;
	QGridLayout *mainLayout;


private slots :

	void ShowCalc();

};
