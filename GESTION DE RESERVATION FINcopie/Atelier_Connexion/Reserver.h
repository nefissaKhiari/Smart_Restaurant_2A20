#ifndef Reserver_H
#define Reserver_H
#include"RESERVATION.h"
#include <QDialog>
#include<QLabel>
#include "client.h"


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

    void on_imprimerbt_clicked();


    void on_Boutonajouter_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_recherche_2_clicked();

    void on_Boutonajouter_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Reserver *ui;
    RESERVATION tmpRESERVATION  ;
      Client tmpc;

};

#endif // Reserver_H
