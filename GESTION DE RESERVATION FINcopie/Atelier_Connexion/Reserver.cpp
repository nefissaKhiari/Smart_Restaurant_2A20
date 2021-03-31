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

Reserver::Reserver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reserver)
{
    ui->setupUi(this);

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

    QString idc =ui->idm_2->text();
    QString nomc =ui->prenomm_2->text();
    QString prenomc =ui->nomm_2->text();


    bool test=tmpc.modifier_client(idc , nomc , prenomc);



    if(test)
    {
       ui->tableView_2->setModel(tmpc.afficher_client()) ;

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
       series->append("sur place",10);
       series->append("date",30);
       series->append("identifiant",20);
       series->append("nom ",20);
       series->append("prenom",40);
        series->append("livraison  ",30);
       QPieSlice *slice= series->slices().at(1);
       slice->setExploded(true);
       slice->setLabelVisible(true);
       slice->setPen(QPen(Qt::darkGreen,2));
       slice->setBrush(Qt::green);
       QChart *chart = new QChart();
       chart->addSeries(series);
       chart->setTitle("statistiques");
       QChartView *chartview=new QChartView(chart);
       chartview->setParent(ui->horizontalFrame);
        ui->tabWidget->setCurrentIndex(2);
}
