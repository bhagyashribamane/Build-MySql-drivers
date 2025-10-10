#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSqlDatabase>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList drivers = QSqlDatabase::drivers();
    qDebug() << "Available SQL Drivers:" << drivers;
}

MainWindow::~MainWindow()
{
    delete ui;
}
