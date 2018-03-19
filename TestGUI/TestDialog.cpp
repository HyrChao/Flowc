//2018/03/14
//Chao

#pragma execution_character_set("utf-8") //utf-8 encode for Qt5

#include "TestDialog.h"
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>

TestDialog::TestDialog(QWidget *parent)
	: QDialog(parent)
{
	//QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
	setWindowTitle(tr("Dialog Instances"));

	fileBtn = new QPushButton;
	fileBtn->setText(tr("File Dialog"));
	fileLineEdit = new QLineEdit;

	colorBtn = new QPushButton;
	colorBtn->setText(tr("Color Dialog"));
	colorFrame = new QFrame;
	colorFrame->setFrameShape(QFrame::Box);
	colorFrame->setAutoFillBackground(true);

	fontBtn = new QPushButton;
	fontBtn->setText(tr("Font Dialog"));
	fontLineEdit = new QLineEdit;
	fontLineEdit->setText(tr("Ahahahaha"));

	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(fileBtn, 0, 0);
	mainLayout->addWidget(fileLineEdit, 0, 1);
	mainLayout->addWidget(colorBtn, 1, 0);
	mainLayout->addWidget(colorFrame, 1, 1);
	mainLayout->addWidget(fontBtn, 2, 0);
	mainLayout->addWidget(fontLineEdit, 2, 1);

	connect(fileBtn, SIGNAL(clicked()), this, SLOT(ShowFile()));
	connect(colorBtn, SIGNAL(clicked()), this, SLOT(ShowColor()));
	connect(fontBtn, SIGNAL(cliced()), this, SLOT(ShowFont()));

}

TestDialog::~TestDialog()
{

}

void TestDialog::ShowFile()
{
	QString s = QFileDialog::getOpenFileName(this, "Open file dialog", "/","C++ files(*.cpp)::C files(*.c)::Head files(*.h)");
	fileLineEdit->setText(s);
}

void TestDialog::ShowColor()
{
	QColor c = QColorDialog::getColor(Qt::blue);
	if (c.isValid())
	{
		colorFrame->setPalette(QPalette(c));
	}
}

void TestDialog::ShowFont()
{
	bool ok;
	QFont f = QFontDialog::getFont(&ok);
	if (ok)
	{
		fontLineEdit->setFont(f);
	}
}
