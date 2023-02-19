#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL, "rus");
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Лабораторная работа");
    w.setWindowIcon(QIcon("lab.png"));
    w.show();
    return a.exec();
}
