#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Reserver.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->hide();
     Reserver *s = new Reserver(this) ;

    s->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
