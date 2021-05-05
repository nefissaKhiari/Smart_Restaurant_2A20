#include "Reserver.h"
#include "ui_Reserver.h"
#include"RESERVATION.h"
#include "client.h"
#include<QDialog>
#include <QPrinter>
#include<QPrintDialog>
#include<QtCharts>
#include<QBarSet>
#include<QBarSeries>
#include <QPropertyAnimation>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QDesktopServices>
#include <QUrl>
#include <QDebug>
#include <QTextBrowser>
#include <QFileDialog>
#include <QTextBlock>
#include <cstdlib>
#include <QRadioButton>
#include<QLineEdit>
#include <QIntValidator>





Reserver::Reserver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reserver)
{
    ui->setupUi(this);

    ui->tableView->setModel(tmpRESERVATION.afficher_fact());
   // ui->tableIng->setModel(tmpingredient.afficher2());
    ui->tabWidget->setCurrentIndex(0);

    model = new QSqlTableModel;
    model->select();


    son=new QSound("C:/Users/Fakher/Desktop/GestionReservation/GestionReservationn/GESTION DE RESERVATION FINcopie/Atelier_Connexion/Electric  - 5 Minute Countdown.wav");

    son->play();




    QPixmap pix("C:/Users/Fakher/Desktop/GestionReservation/GestionReservationn/GESTION DE RESERVATION FINcopie/Atelier_Connexion/bkg.jpg");
        ui->img->setPixmap(pix);
        QPixmap pic("C:/Users/Fakher/Desktop/GestionReservation/GestionReservationn/GESTION DE RESERVATION FINcopie/Atelier_Connexion/bkg.jpg");
            ui->img2 -> setPixmap(pic);

            QPixmap pik("C:/Users/Fakher/Desktop/GestionReservation/GestionReservationn/GESTION DE RESERVATION FINcopie/Atelier_Connexion/restau.png");
                ui-> imageresto -> setPixmap(pik);
                QPixmap pia("C:/Users/Fakher/Desktop/GestionReservation/GestionReservationn/GESTION DE RESERVATION FINcopie/Atelier_Connexion/restau.png");
                    ui-> imagerestoo -> setPixmap(pia);


           animation = new QPropertyAnimation (ui ->imagerestoo,"geometry" );
               // animation = new QPropertyAnimation (ui ->text_2,"geometry" );
                animation->setDuration(10000) ;
                animation->setStartValue(ui->label_12->geometry());
                animation->setEndValue(QRect(1,20,30,40)) ;
                animation->start() ;

                // animation2 = new QPropertyAnimation (ui ->text,"geometry" );
                    animation2 = new QPropertyAnimation (ui ->imageresto,"geometry" );
                    animation2->setDuration(10000) ;
                    animation2->setStartValue(ui->label_11->geometry());
                    animation2->setEndValue(QRect(1,20,30,40)) ;
                    animation2->start() ;
                    //ui->tableView_2->setModel(tmpc.afficher_client());




}

Reserver::~Reserver()
{
    delete ui;
}

void Reserver::on_Boutonajouter_clicked()
{

    QString id =ui->ajoutid->text() ;
    QString nom =ui->ajoutmontant->text() ;
    QString prenom = ui->ajoutdate->text();
    QString date = ui->ajoutdate2->text();
     QString type = ui->ajoutype->text();
    RESERVATION m(id,nom,prenom,date,type) ;
    bool test = m.ajouter_fact();



    if (test)

    {

  ui->tableView->setModel(tmpRESERVATION.afficher_fact()) ;
    }

     }


 void Reserver::on_pushButton_clicked()
{

    ui->tableView->setModel(tmpRESERVATION.afficher_fact()) ;
}

void Reserver::on_pushButton_2_clicked()
{
    QString id = ui->delete_2->text();
    bool test = tmpRESERVATION.supprimer(id);
    if (test)
    {
       ui->tableView->setModel(tmpRESERVATION.afficher_fact()) ;

}
}

void Reserver::on_pushButton_3_clicked()
{
    QString l=ui->comboBox->currentText();
        ui->tableView->setModel(tmpRESERVATION.tri(l));
}

void Reserver::on_pushButton_7_clicked()
{
    QString id =ui->mod2->text();
    QString montant =ui->mod1->text();
    QString date =ui->mod3->text();
    bool test=tmpRESERVATION.modifier(id,montant,date);

    if(test)
    {
       ui->tableView->setModel(tmpRESERVATION.afficher_fact()) ;

    }

}

void Reserver::on_recherche_clicked()
{

    QString m =ui->cher1->text();
    QString k = ui->che2->text();
    QString l = ui->che3->text();
    if (m != ""){
   ui->tableView->setModel(tmpRESERVATION.chercher_matpar_id(m) );}
    if (l != ""){
   ui->tableView->setModel(tmpRESERVATION.chercher_matpar_nom(k)) ;}
    if (k!= ""){
   ui->tableView->setModel(tmpRESERVATION.chercher_matpar_prenom(l)) ;}





}





void Reserver::on_Boutonajouter_2_clicked()
{


      /*  bool test;
        QString idc = ui ->ajoutid_2->text();
        QString nomc =ui->ajoutnom_2->text();
        QString prenomc = ui->ajoutprenom_2->text();
        QString adressec = ui->ajoutadresse_2->text();
        QString telc =ui->ajoutel_2->text();

       Client c(idc,nomc,prenomc,adressec,telc) ;
        if(!(ui->ajoutid_2->text().isEmpty() || ui->ajoutnom_2->text().isEmpty() || ui->ajoutprenom_2->text().isEmpty()||ui->ajoutadresse_2->text().isEmpty() ||ui->ajoutel_2->text().isEmpty()  ));

       { test=c.afficher_client();}

        if(test)
        {

            ui->tableView_2->setModel(tmpc.afficher_client());//refresh
            QMessageBox::information(nullptr, QObject::tr("Ajouter un Client"),
                                     QObject::tr("Client ajouté.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Ajouter un Client"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel); */


    QString idc =ui->ajoutid_2->text() ;
    QString nomc = ui->ajoutnom_2->text();
    QString prenomc =ui->ajoutprenom_2->text() ;
    //QString nomc = ui->ajoutnom_2->text();
    QString adressec = ui->ajoutadresse_2->text();
     QString telc = ui->ajoutel_2->text();
    Client c(idc,nomc,prenomc,adressec,telc) ;




    bool test = c.ajouter_client();
    if (test)

    {

  ui->tableView_2->setModel(tmpc.afficher_client()) ;
    }



}


void Reserver::on_pushButton_5_clicked()
{


    ui->tableView_2->setModel(tmpc.afficher_client()) ;

}



void Reserver::on_pushButton_4_clicked()
{

    QString idc = ui->delete_3->text();
    bool test = tmpc.supprimer(idc);
    if (test)
    {
       ui->tableView_2->setModel(tmpc.afficher_client()) ;
}

}

void Reserver::on_pushButton_8_clicked()
{

   /* QString idc =ui->idm_2->text();
    QString nomc =ui->prenomm_2->text();
    QString prenomc =ui->nomm_2->text();


    bool test=tmpc.modifier_client(idc , nomc , prenomc);



    if(test)
    {
       ui->tableView_2->setModel(tmpc.afficher_client()) ;

    }  */

    QString idc =ui->idm_2->text();
       QString nomc =ui->prenomm_2->text();
       QString prenomc =ui->nomm_2->text();
       bool test=tmpc.modifier_client(idc , nomc , prenomc);

    if(test)
    {
        ui->tableView_2->setModel(tmpc.afficher_client());//refresh
        QMessageBox::information(nullptr, QObject::tr("Modifier un Client !"),
                                 QObject::tr(" Client modifiée ! \n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Modifier un Client"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }

}

void Reserver::on_recherche_2_clicked()
{
    QString mm =ui->cher1_2->text();
    QString km = ui->che2_2->text();
    QString lm = ui->che3_2->text();
    if (mm != ""){
   ui->tableView_2->setModel(tmpc.chercher_matpar_idc(mm) );}
    if (lm != ""){
   ui->tableView_2->setModel(tmpc.chercher_matpar_nomc(lm)) ;}
    if (km!= ""){
   ui->tableView_2->setModel(tmpc.chercher_matpar_prenomc(km)) ;}


}



void Reserver::on_pushButton_6_clicked()
{
    QPieSeries *series = new QPieSeries();
       series->append("Sur place",30);
       series->append("A emporter",20);
        series->append("Livraison  ",50);
       QPieSlice *slice= series->slices().at(1);
       slice->setExploded(true);
       slice->setLabelVisible(true);
       slice->setPen(QPen(Qt::darkGreen,2));
       slice->setBrush(Qt::red);
       QChart *chart = new QChart();
       chart->addSeries(series);
       chart->setTitle("Statistiques sur le type des réservations  ");
       QChartView *chartview=new QChartView(chart);
       chartview->setParent(ui->horizontalFrame);
        ui->tabWidget->setCurrentIndex(2);
}

void Reserver::on_pushButton_9_clicked()
{

    //click->play();
  lng="fr";

  ui->label_13->setText("ID RESERVATION ");
 // ui->l1->setStyleSheet("QLabel{color: rgb(255, 255, 255); font: 75 24pt MS Shell Dlg 2;text-decoration:underline;font-weight:600; color:#ffffff;}");
  ui->label_25->setText("NOM");
  ui->label_26->setText("PRENOM");
  ui->label_29->setText("ADRESSE");
  ui->label_28->setText("Tel");

  ui->Boutonajouter_2->setText("Ajouter");
  ui->pushButton_8->setText("Appliquer");
  ui->pushButton_8->setStyleSheet("QPushButton {border:none;background-color:#000000;background-position: left center;background-repeat: no-repeat;border-radius: 5px;border:1px solid transparent;color:rgb(255, 255, 255);text-align: center; border-left:4px solid #000000;}QPushButton:hover {background-color:rgb(0, 0, 128);}QPushButton:pressed { border:2px solid rgb(0, 0, 128); }");
  ui->pushButton_4->setText("Supprimer");
  ui->pushButton_4->setStyleSheet("QPushButton {border:none;background-color:#000000;background-position: left center;background-repeat: no-repeat;border-radius: 5px;border:1px solid transparent;color:rgb(255, 255, 255);text-align: center; border-left:4px solid #000000;}QPushButton:hover {background-color:rgb(0, 0, 128);}QPushButton:pressed { border:2px solid rgb(0, 0, 128); }");
 // ui->pushButton_rch_livre->setText("recherche");
//  ui->pushButton_tri_livre->setText("tri");


   ui->Boutonajouter_2->setStyleSheet("QPushButton {border:none;background-color:#000000;background-position: left center;background-repeat: no-repeat;border-radius: 5px;border:1px solid transparent;color:rgb(255, 255, 255);text-align: center; border-left:4px solid #000000;}QPushButton:hover {background-color:rgb(0, 0, 128);}QPushButton:pressed { border:2px solid rgb(0, 0, 128); }");
}


void Reserver::on_pushButton_10_clicked()
{
    //click->play();
  lng="Ang";

  ui->label_13->setText("ID RESERVATION ");
 // ui->l1->setStyleSheet("QLabel{color: rgb(255, 255, 255); font: 75 24pt MS Shell Dlg 2;text-decoration:underline;font-weight:600; color:#ffffff;}");
  ui->label_25->setText("Name");
  ui->label_26->setText("First Name");
  ui->label_29->setText("ADRESSE");
  ui->label_28->setText("Phone");

  ui->Boutonajouter_2->setText("ADD");
  ui->pushButton_8->setText("Update");


  ui->pushButton_8->setStyleSheet("QPushButton {border:none;background-color:#000000;background-position: left center;background-repeat: no-repeat;border-radius: 5px;border:1px solid transparent;color:rgb(255, 255, 255);text-align: center; border-left:4px solid #000000;}QPushButton:hover {background-color:rgb(0, 0, 128);}QPushButton:pressed { border:2px solid rgb(0, 0, 128); }");
  ui->pushButton_4->setText("Delete");
  ui->pushButton_4->setStyleSheet("QPushButton {border:none;background-color:#000000;background-position: left center;background-repeat: no-repeat;border-radius: 5px;border:1px solid transparent;color:rgb(255, 255, 255);text-align: center; border-left:4px solid #000000;}QPushButton:hover {background-color:rgb(0, 0, 128);}QPushButton:pressed { border:2px solid rgb(0, 0, 128); }");
 // ui->pushButton_rch_livre->setText("recherche");
//  ui->pushButton_tri_livre->setText("tri");


   ui->Boutonajouter_2->setStyleSheet("QPushButton {border:none;background-color:#000000;background-position: left center;background-repeat: no-repeat;border-radius: 5px;border:1px solid transparent;color:rgb(255, 255, 255);text-align: center; border-left:4px solid #000000;}QPushButton:hover {background-color:rgb(0, 0, 128);}QPushButton:pressed { border:2px solid rgb(0, 0, 128); }");
}


void Reserver::pushButton_11()
{
    ui->tabWidget->setCurrentIndex(1);

}

/* void Reserver::pushButton_12()
{
    close();

} */

