#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <typeinfo>
#include <windows.h>


using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int i = 10;
    while(i>0){
        i/=2;
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    setlocale (LC_ALL, "rus");
    string link =ui->links->text().toStdString();
    string access =ui->dostups->text().toStdString();
    string date =ui->dates->text().toStdString();



    std::ofstream out("data.csv", ios_base::app);

    int h =2;

    if(!out)
    {
        return;
    }
    else
    {
        if (date == "" or access == "" or link == ""){
            ui->message->setText("Заполните все поля");
            ui->message->setStyleSheet("color: rgb(200, 0, 0)");
        }
        else {
            out << link + ";" + access +";" + date + "\n";
            ui->message->setText("Запись успешно создана");
            ui->message->setStyleSheet("color: rgb(0, 179, 0)");
            cout << typeid(h).name() << endl;
        }
    }
    out.close();
}

int counter(int i){
    i += 1;
    return i;
}

void MainWindow::on_Delete_clicked()
{

    string line;

    ifstream file("data.csv");

    string text[10000];
    int i = 0;

    if (file.is_open()){
        while (getline(file, line))
        {
            cout << line << std::endl;
            text[i] = line;
            i = counter(i);
        }
    }
    i--;

    std::ofstream out("data.csv");
    out << "";

    std::ofstream in("data.csv", ios_base::app);

    if(!out)
    {
        return;
    }
    else
    {
        if (i == -1){
            ui->message->setText("Нет записей для удаления");
            ui->message->setStyleSheet("color: rgb(235, 0, 5)");
        }
        else {
            for (int j=0;  j<i; j++)
            {
                in << text[j] + "\n";
            }
            ui->message->setText("Запись успешно удалена");
            ui->message->setStyleSheet("color: rgb(189, 1, 0)");
        }
    }




}
