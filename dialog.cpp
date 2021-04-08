#include "dialog.h"
#include "ui_dialog.h"
#include <QApplication>

#include "collaborateur.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_ajouter_clicked()
{

    int codecolloborateur=ui->le_codecolloborateur_2->text().toInt();
    QString nom=ui->le_nom_2->text();
    QString prenom=ui->le_prenom_2->text();
    QString company=ui->le_company_2->text();

 Colloborateur C(codecolloborateur,nom,prenom,company);

bool test=C.ajouter();

        QMessageBox msgBox;

        if(test)
        {

            ui->tableView->setModel(tmp.afficher()) ;
            QMessageBox::information(nullptr,QObject::tr("OK"),
                       QObject::tr("Ajout effectué\n"
                "Click Cancel to exit"),QMessageBox::Cancel);
            }

            else
             QMessageBox::critical(nullptr,QObject::tr("Not OK"), QObject::tr("Ajout non effectué.\n" "Clic Cancel to exit."),QMessageBox::Cancel);
}

void Dialog::on_supprimer_clicked()


{

    int codecolloborateur=ui->le_codecolloborateur_supp->text().toInt();
    bool test=tmp.supprimer(codecolloborateur) ;

    if(test)
    {

        ui->tableView->setModel(tmp.afficher()) ;
        QMessageBox::information(nullptr,QObject::tr("OK"),
                   QObject::tr("suppression effectué\n"
            "Click Cancel to exit"),QMessageBox::Cancel);
        }

        else
         QMessageBox::critical(nullptr,QObject::tr("Not OK"), QObject::tr("suppression non effectué.\n" "Clic Cancel to exit."),QMessageBox::Cancel);
}





void Dialog::on_btn_mod_clicked()
{
    int codecolloborateur=ui->le_codecolloborateur_2->text().toInt();

    QString nom=ui->le_nom_2->text();
    QString prenom=ui->le_prenom_2->text();
    QString company=ui->le_company_2->text();





    Colloborateur C(codecolloborateur,nom,prenom,company);

       bool test=C.modifier() ;

       if (test)

       {
           ui->tableView->setModel(Ctmp.afficher());
           QMessageBox::information(nullptr, QObject::tr("ok"),
                       QObject::tr("modification effectué.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

   }
       else
           QMessageBox::critical(nullptr, QObject::tr("not ok"),
                       QObject::tr("modification non effectué.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);




}

