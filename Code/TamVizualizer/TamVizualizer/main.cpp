#include "mainwindow.h"
#include "drawArea.h"
#include "debug.h"
#include <ctime>
#include <cstdlib>
#include <QtWidgets/QApplication>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Debug d ;
	d.showWin32Console();
	AllocConsole();
	MainWindow w;
	w.showMaximized();
	
	return a.exec();
}
