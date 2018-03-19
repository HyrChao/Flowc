//2018/03/03
//Chao

#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainGUI.h"

class MainGUI : public QMainWindow
{
	Q_OBJECT

public:

	MainGUI(QWidget *parent = nullptr);
	~MainGUI();

private:

	Ui::MainGUIClass ui;
	QWidget mainWidget;

private slots:

	void StartTestGUI();
	void StartTestDialog();
	void Debug();

};
