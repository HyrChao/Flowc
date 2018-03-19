//2018/03/03
//Chao

#include "MainGUI.h"
#include <QtWidgets/QApplication>
//#include <QTextCodec>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	//QFont font("ZYSong18030", 12);
	//a.setFont(font);
	//QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

	MainGUI w;
	w.show();
	return a.exec();
}
