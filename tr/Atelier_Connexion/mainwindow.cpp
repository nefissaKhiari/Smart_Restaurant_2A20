#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "paiement.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->hide();
     paiement *s = new paiement(this) ;
    s->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
