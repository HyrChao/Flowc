//2018/03/13
//Chao

#pragma once

#include <QWidget>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>

class Test_StackedWidget : public QWidget
{

	Q_OBJECT

public:

	Test_StackedWidget(QWidget *parent);
	~Test_StackedWidget();

private:

	QListWidget * list;
	QStackedWidget *stack;
	QLabel *label1, *label2, *label3;

};