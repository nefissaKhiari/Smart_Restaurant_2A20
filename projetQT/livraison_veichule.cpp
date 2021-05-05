#include "livraison_veichule.h"
#include "ui_Livraison_veichule.h"

Livraison_veichule::Livraison_veichule(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Livraison_veichule)
{
    ui->setupUi(this);


    ui->tableveh->setModel(tmpvehicule.afficher());
    ui->tablelivraison->setModel(tmplivraison.afficher2());
ui->tablelsaber->setModel((tmplivraison.stat1()));
ui->tablelaziz->setModel((tmplivraison.stat2()));
ui->tableali->setModel((tmplivraison.stat3()));
    ui->stackedWidget->setCurrentIndex(1);
    ui->comboBox->addItem("Aziz");
    ui->comboBox->addItem("Saber");
    ui->comboBox->addItem("Ali");

    ui->comboBox2->addItem("Aziz");
    ui->comboBox2->addItem("Saber");
    ui->comboBox2->addItem("Ali");



    model = new QSqlTableModel;
    model->select();
}

Livraison_veichule::~Livraison_veichule()
{
    delete ui;
}


void Livraison_veichule::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void Livraison_veichule::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}



void Livraison_veichule::afficher()
{

    Connexion c;
    QSqlQueryModel* modal = new QSqlQueryModel();
    QSqlQuery* qry=new QSqlQuery(c.get_db());
    qry->prepare("SELECT* from VEHICLE");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableveh->setModel(modal);
}

void Livraison_veichule::afficher2()
{

    Connexion c;
    QSqlQueryModel* modal = new QSqlQueryModel();

    QSqlQuery* qry=new QSqlQuery(c.get_db());
    qry->prepare("SELECT* from LIVRAISON");
    qry->exec();
    modal->setQuery(*qry);
    ui->tablelivraison->setModel(modal);

}
void Livraison_veichule::notif()
{
    Connexion c;
    QSqlQueryModel* modal = new QSqlQueryModel();

    QSqlQuery* qry=new QSqlQuery(c.get_db());
    qry->prepare("SELECT MAT WHERE disp=0");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableveh2->setModel(modal);


}




void Livraison_veichule::on_ajouter_liv_clicked()
{

    bool test ;
    int idliv = ui->lineEdit_idliv->text().toInt();
    QString livreur=ui->comboBox->currentText();
    QString dest = ui->lineEdit_dest->text();
    QDateTime jour=ui->dateEdit_3->dateTime();
    livraison i(idliv,livreur,dest,jour);
   // controle de saisie
   if(!(ui->lineEdit_idliv->text().isEmpty() || ui->lineEdit_dest->text().isEmpty() || ui->comboBox->currentText().isEmpty() ))

    { test=i.ajouter2();}

    if(test)
    {

        ui->tablelivraison->setModel(tmplivraison.afficher2());//refresh
       QMessageBox::information(nullptr, QObject::tr("Ajouter un livraison"),
                                QObject::tr("livaison ajouté.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

   }
    //error
   else
        QMessageBox::critical(nullptr, QObject::tr("Ajouter une livraison"),
                             QObject::tr("Erreur !.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);

}

void Livraison_veichule::on_modifier_2_clicked()
{
    int idliv = ui->lineEdit_idliv_modifier->text().toInt();
    QString dest=ui->lineEdit_nouv_dest->text();
    QString livreur=ui->comboBox2->currentText(); //comboBox2
    QDateTime jour=ui->dateEdit_4->dateTime();
    livraison i(idliv,livreur,dest,jour);
    bool test=i.modifier2(idliv,livreur,dest,jour);
    if(test)
    {
        ui->tablelivraison->setModel(tmplivraison.afficher2());//refresh
        QMessageBox::information(nullptr, QObject::tr("Modifier une livraison !"),
                                 QObject::tr(" livraison modifiée ! \n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Modifier une livraison"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void Livraison_veichule::on_supprimer_2_clicked()
{
        int idliv = ui->lineEdit_idliv_supp->text().toInt();
        bool test = tmplivraison.supprimer2(idliv);
        if (test)
        {
            ui->tablelivraison->setModel(tmplivraison.afficher2());
            QMessageBox::information(nullptr, QObject::tr("Supprimer une livraison !"),
                                     QObject::tr(" livraison supprimé ! \n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
        }

        else
        {
            QMessageBox::critical(nullptr, QObject::tr("Suppimer un livraison"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
        }
    }



void Livraison_veichule::on_ajouter_vehicule_clicked()
{
    bool test;
    int mat = ui->lineEdit_mat->text().toInt();
    QString type=ui->lineEdit_type->text();
    int disp=ui->lineEdit_disp->text().toInt();
    QDateTime jours=ui->dateEdit->dateTime();
    vehicule p(mat,type,disp,jours);
    if(!(ui->lineEdit_mat->text().isEmpty()||ui->lineEdit_type->text().isEmpty()||ui->lineEdit_mat->text().isEmpty()||ui->dateEdit->date().isNull()))

    {test=p.ajouter();}
    if(test)
    {

        ui->tableveh->setModel(tmpvehicule.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Ajouter une vehicule"),
                                 QObject::tr("vehicule ajouté.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else{
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un vehicule"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void Livraison_veichule::on_modifierveh_clicked()
{
    QString type= ui->lineEdit_typemodif->text();  //lineEdit_nouv_nom
    int mat = ui->lineEdit_mat_modif->text().toInt(); //lineEdit_id_eventmodif
    int disp=ui->lineEdit_nouvdisp->text().toInt(); //lineEdit_nouv_idsalle
    QDateTime jours=ui->dateEdit_2->dateTime();
    vehicule p(mat,type,disp,jours);
    bool test=p.modifier(mat,type,disp,jours);
    if(test)
    {
        ui->tableveh->setModel(tmpvehicule.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Modifier une vehicule !"),
                                 QObject::tr(" vehicule modifiée ! \n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }

    else {

        QMessageBox::critical(nullptr, QObject::tr("Modifier une vehicule"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }

}

void Livraison_veichule::on_supprimerveh_clicked()
{
    int mat = ui->lineEdit_matsupp->text().toInt();
    bool test = tmpvehicule.supprimer(mat);
    if (test)
    {
        ui->tableveh->setModel(tmpvehicule.afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer une vehicule !"),
                                 QObject::tr(" vehicule suprimé ! \n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }

    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Suppimer une vehicule"),
                              QObject::tr("Erreur !\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }

}
void Livraison_veichule::on_pushButton_trie_clicked(){
    ui->tablelivraison->setModel(tmplivraison.trier_of());
}
void Livraison_veichule::on_pushButton_search_liv_clicked()
{
    int idliv = ui->lineEdit_sr->text().toInt();
    ui->tablelivraison->setModel(tmplivraison.chercher(idliv));
}
void Livraison_veichule::stat1()
{

    Connexion c;
    QSqlQueryModel* modal = new QSqlQueryModel();

    QSqlQuery* qry=new QSqlQuery(c.get_db());
    qry->prepare("SELECT* from LIVRAISON where livreur='Saber'");
    qry->exec();
    modal->setQuery(*qry);
    ui->tablelsaber->setModel(modal);

}
void Livraison_veichule::stat2()
{

    Connexion c;
    QSqlQueryModel* modal = new QSqlQueryModel();

    QSqlQuery* qry=new QSqlQuery(c.get_db());
    qry->prepare("SELECT* from LIVRAISON where livreur='Aziz'");
    qry->exec();
    modal->setQuery(*qry);
    ui->tablelaziz->setModel(modal);

}
void Livraison_veichule::stat3()
{

    Connexion c;
    QSqlQueryModel* modal = new QSqlQueryModel();

    QSqlQuery* qry=new QSqlQuery(c.get_db());
    qry->prepare("SELECT* from LIVRAISON where livreur='Ali'");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableali->setModel(modal);


}
