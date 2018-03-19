//2018/03/14
//Chao

#pragma once

#include <QDialog>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>
#include <QFrame>


class TestDialog : public QDialog
{
	Q_OBJECT

public:

	~TestDialog();
	TestDialog(QWidget *parent);

private:
	QPushButton *fileBtn;
	QPushButton *colorBtn;
	QPushButton *fontBtn;
	QFrame *colorFrame;
	QLineEdit *fileLineEdit;
	QLineEdit *fontLineEdit;
	QGridLayout *mainLayout;

private slots:
	void ShowFile();
	void ShowColor();
	void ShowFont();
};
