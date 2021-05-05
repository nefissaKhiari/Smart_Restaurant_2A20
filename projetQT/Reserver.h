
//#ifndef Reserver_H
#define Reserver_H

#include"RESERVATION.h"
#include <QDialog>
#include<QLabel>
#include "client.h"
#include <QPropertyAnimation>
#include <QMediaPlayer>
#include <QTcpSocket>
#include <QSqlTableModel>
#include <QSound>




namespace Ui {
class Reserver;
}

class Reserver : public QDialog
{
    Q_OBJECT

public:
    explicit Reserver(QWidget *parent = nullptr);
    ~Reserver();

private slots:
    void on_Boutonajouter_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_recherche_clicked();

    void on_pushButton_8_clicked();


    void on_Boutonajouter_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_recherche_2_clicked();


    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();
    private slots:

    // This function gets called when a user clicks on the
    // loginButton on the front page (which you placed there
    // with Designer)

    // This gets called when you click the sayButton on
    // the chat page.

    // This is a function we'll connect to a socket's readyRead()
    // signal, which tells us there's text to be read from the chat
    // server.

    // This function gets called when the socket tells us it's connected.
    void pushButton_11();



private:

    // This is the socket that will let us communitate with the server.
    QTcpSocket *socket;

private:
    Ui::Reserver *ui;
    RESERVATION tmpRESERVATION  ;
      Client tmpc;
      QPropertyAnimation *animation ;
           QPropertyAnimation *animation2 ;
           QString lng="fr";
           QMediaPlayer *click;
           QSqlTableModel *model;
           QSound *son;



};
