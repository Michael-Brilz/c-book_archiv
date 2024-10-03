#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <array>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


std::string name_text;
std::string number_text;
std::array<std::string, 2> book_info;


void MainWindow::on_pushButton_clicked()
{
    book_info[0] = ui->name_text->toPlainText().toStdString();
    book_info[1] = ui->number_text->toPlainText().toStdString();

    std::string result = "Name: " + book_info[0] + " " + "Number: " + book_info[1];

    ui->list_result->addItem(QString::fromStdString(result));
}

