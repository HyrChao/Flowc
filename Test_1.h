#pragma once

#include <QDialog>
#include "ui_Test_1.h"

class Test_1 : public QDialog
{
	Q_OBJECT

public:
	Test_1(QWidget *parent = nullptr);
	~Test_1();

private:
	Ui::Test_1 ui;

private slots:
	void OnTextUpdated();
	//void Accept();
	//void Reject();
	
};
