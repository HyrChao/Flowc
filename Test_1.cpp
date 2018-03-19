#include "Test_1.h"

Test_1::Test_1(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.lineEdit, SIGNAL(textChanged(QString)), this, SLOT(OnTextUpdated()));
	connect(ui.okButton, SIGNAL(clicked()), this, SLOT(accept()));
	connect(ui.cancelButton, SIGNAL(clicked()), this, SLOT(reject()));

}

Test_1::~Test_1()
{

}

void Test_1::OnTextUpdated()
{
	if (ui.lineEdit->hasAcceptableInput()&&ui.lineEdit->text()!=QString(""))
	{
		ui.okButton->setEnabled(true);
	}
	else
	{
		ui.okButton->setDisabled(true);
	}
}

//void Test_1::Accept()
//{
//
//}
//
//void Test_1::Reject()
//{
//
//}