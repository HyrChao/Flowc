//2018/03/10
//Chao

#include "Test_Cpp_01.h"
#include <QSplitter>
#include <QTextEdit>
#include <QTextCodec>

const static double PI = 3.14159;

Test_Cpp_01::Test_Cpp_01(QWidget *parent)
	: QDialog(parent)
{

	label1 = new QLabel(this);
	label1->setText(tr("Please input radius"));
	label2 = new QLabel(this);
	lineEdit = new QLineEdit(this);
	btn = new QPushButton(this);
	btn->setText(tr("Calc"));
	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(label1, 0, 0);
	mainLayout->addWidget(lineEdit, 0, 1);
	mainLayout->addWidget(label2, 1, 0);
	mainLayout->addWidget(btn, 1, 1);
	mainLayout->setHorizontalSpacing(10);
	mainLayout->setVerticalSpacing(10);

	QSplitter *splitterMain = new QSplitter(Qt::Horizontal, 0);
	QTextEdit *textLeft = new QTextEdit(QObject::tr("Left Widget"), splitterMain);
	textLeft->setAlignment(Qt::AlignCenter);
	QSplitter *splitterRight = new QSplitter(Qt::Vertical, splitterMain);
	//splitterRight->setOpaqueResize(false);
	QTextEdit *textUp = new QTextEdit(QObject::tr("Top Widget"), splitterRight);
	textUp->setAlignment(Qt::AlignCenter);
	QTextEdit *textBottom = new QTextEdit(QObject::tr("Bottom Widget"), splitterRight);
	textBottom->setAlignment(Qt::AlignCenter);
	splitterMain->setStretchFactor(1, 1);
	splitterMain->setWindowTitle(QObject::tr("Splitter"));
	splitterMain->show();

	//connect(btn, SIGNAL(clicked()), this, SLOT(ShowCalc()));
	connect(lineEdit, SIGNAL(textChanged(QString)), this, SLOT(ShowCalc()));

}

Test_Cpp_01::~Test_Cpp_01()
{
}

void Test_Cpp_01::ShowCalc()
{
	bool validStr;
	QString textStr;
	QString valueStr = lineEdit->text();
	int value = valueStr.toInt(&validStr);
	double area = value * value*PI;
	label2->setText(textStr.setNum(area));
}
