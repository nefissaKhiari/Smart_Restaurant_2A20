#include "Evenement_Collaborateur.h"
#include "ui_Evenement_Collaborateur.h"
#include "evenement.h"
#include<QMessageBox>
#include <QComboBox>
#include <QPainter>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QUrl>
#include <QPrinter>
#include <QPrintDialog>
#include <QPieSlice>
#include <QPieSeries>
#include <QtCharts/QChartView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include"QSortFilterProxyModel"
#include <QtNetwork>
#include <QSslSocket>
QT_CHARTS_USE_NAMESPACE

#include "smtp.h"




Evenement_Collaborateur::Evenement_Collaborateur(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Evenement_Collaborateur)
{
ui->setupUi(this);

refresh();


}
void Evenement_Collaborateur::refresh(){
    ui->Evenement_affichage->setModel(tmp_Evenement.afficher());
    ui->Collaborateur_affichage->setModel(tmp_Collaborateur.afficher());
    ui->combobox_email->setModel(tmp_Collaborateur.afficherEmail());
    ui->comboBox_affecter->setModel(tmp_Collaborateur.afficher());
    ui->affectation_affichage->setModel(tmp_affectation.afficher());




}

Evenement_Collaborateur::~Evenement_Collaborateur()
{
    delete ui;
}


//Crud Evenement
void Evenement_Collaborateur::on_pb_ajouter_clicked()
{
    QString nom= ui->lineEdit_nom->text();
    QDate date= ui->dateEdit_event->date();
    QString lieu= ui->lineEdit_lieu->text();
  Evenement e(nom,lieu,date);



  if (nom==NULL)
       {

           QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP nom!!!!") ;
           QMessageBox::critical(0, qApp->tr("Ajout"),

                           qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

       }

    else if (lieu==NULL)
     {

         QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP lieu!!!!") ;
         QMessageBox::critical(0, qApp->tr("Ajout"),

                         qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

     }










  else{

  bool test=e.ajouter();
  if(test)
{

     refresh();
            N.notification_ajoutEvenement();
            QMessageBox::information(nullptr, QObject::tr("Ajouter un Evenement"),
                        QObject::tr("Evenement Ajouter !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un Evenement"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}}
void Evenement_Collaborateur::on_pb_supprimer_clicked()
{

    if(ui->Evenement_affichage->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Suppression"),
                          QObject::tr("Veuillez Choisir une Evenement du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {   int id=ui->Evenement_affichage->model()->data(ui->Evenement_affichage->model()->index(ui->Evenement_affichage->currentIndex().row(),0)).toInt();



            QString str = " Vous voulez vraiment supprimer \n la Evenement :";
                              int ret = QMessageBox::question(this, tr("Evenement"),str,QMessageBox::Ok|QMessageBox::Cancel);

                              switch (ret) {
                                case QMessageBox::Ok:
                                    if (tmp_Evenement.supprimer(id)){
                                       N.notification_supprimerEvenement();
                                            refresh();

                                    }
                                    else
                                      {

                                          QMessageBox::critical(0, qApp->tr("Suppression"),
                                              qApp->tr("Evenement non trouvé "), QMessageBox::Cancel);
      }



                                  break;
                                case QMessageBox::Cancel:

                                    break;
                                default:
                                    // should never be reached
                                    break;
                              }


}
}
void Evenement_Collaborateur::on_modifier_Evenement_clicked()
{
      int id=ui->lineEdit_id_m->text().toInt();

    QString nom= ui->lineEdit_nom_m->text();
    QDate date= ui->dateEdit_event_m->date();
    QString lieu= ui->lineEdit_lieu_m->text();

    Evenement m(nom,lieu,date);



        if (nom==NULL)
             {

                 QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP nom!!!!") ;
                 QMessageBox::critical(0, qApp->tr("Ajout"),

                                 qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

             }


        else if (lieu==NULL)
         {

             QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP lieu!!!!") ;
             QMessageBox::critical(0, qApp->tr("Ajout"),

                             qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

         }
        else if (id==NULL)
         {

             QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP code !!!!") ;
             QMessageBox::critical(0, qApp->tr("Ajout"),

                             qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

         }









        else{






        bool test=tmp_Evenement.modifier(m,id);
        if(test)
        {



           N.notification_modifierEvenement();
           QMessageBox::information(nullptr, QObject::tr("Modifer un Evenement"),
                       QObject::tr("Evenement Modifié !.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
                refresh();


        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("Modifier Evenement"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }


      ui->lineEdit_id_m->clear();

        ui->lineEdit_nom_m->clear();
        ui->lineEdit_lieu_m->clear();





}}
void Evenement_Collaborateur::on_Evenement_affichage_activated(const QModelIndex &index)
{
    QString id=ui->Evenement_affichage->model()->data(index).toString();
        QSqlQuery query;
        query.prepare("SELECT * FROM Evenement WHERE CODE='"+id+"'");
        if(query.exec())
        {
            while(query.next())
            {
                ui->lineEdit_id_m->setText(query.value(0).toString());
                ui->lineEdit_nom_m->setText(query.value(1).toString());
                ui->lineEdit_lieu_m->setText(query.value(2).toString());
                ui->dateEdit_event_m->setDate(query.value(3).toDate());



            }

        }
        else
        {
            QObject::tr("Veuillez Choisir Un ID Du Tableau SVP");
        }
}
//Fin Crud Evenement



//Crud Collaborateur

void Evenement_Collaborateur::on_pb_ajouter_col_clicked()
{
    QString nom= ui->lineEdit_nom_col->text();
    QString prenom= ui->lineEdit_prenom_col->text();
    QString email =ui->lineEdit_email_col->text();
    QString company= ui->lineEdit_company_col->text();
  Collaborateur col(nom,prenom,email,company);



     if (nom==NULL)
     {

         QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP nom!!!!") ;
         QMessageBox::critical(0, qApp->tr("Ajout"),

                         qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

     }

  else if (prenom==NULL)
   {

       QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP prenom!!!!") ;
       QMessageBox::critical(0, qApp->tr("Ajout"),

                       qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

   }
  else if (email==NULL ||col.testmail(email)==false)

   {

       QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP Email!!!!") ;
       QMessageBox::critical(0, qApp->tr("Ajout"),

                       qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

   }
  else if (company==NULL)
   {

       QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP Company!!!!") ;
       QMessageBox::critical(0, qApp->tr("Ajout"),

                       qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

   }







  else{
  bool test=col.ajouter();
  if(test)
{

    refresh();
    N.notification_ajoutCollaborateur();
QMessageBox::information(nullptr, QObject::tr("Ajouter un Collaborateur"),
                  QObject::tr("Collaborateur ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un Collaborateur"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}}

void Evenement_Collaborateur::on_pb_modifier_col_clicked()
{
    int id = ui->lineEdit_id_col_m->text().toInt();
    QString nom= ui->lineEdit_nom_col_m->text();
    QString prenom= ui->lineEdit_prenom_col_m->text();
    QString email =ui->lineEdit_email_col_m->text();
    QString company= ui->lineEdit_company_col_m->text();
  Collaborateur col(nom,prenom,email,company);


    if (id==NULL)
         {

             QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP Code!!!!") ;
             QMessageBox::critical(0, qApp->tr("Ajout"),

                             qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

         }

      else if (nom==NULL)
       {

           QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP nom!!!!") ;
           QMessageBox::critical(0, qApp->tr("Ajout"),

                           qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

       }
            else if (prenom==NULL)
             {

                 QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP prenom!!!!") ;
                 QMessageBox::critical(0, qApp->tr("Ajout"),

                                 qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

             }
             else if (email==NULL ||col.testmail(email)==false)

             {

                 QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP Email!!!!") ;
                 QMessageBox::critical(0, qApp->tr("Ajout"),

                                 qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

             }
    else if (company==NULL)
             {

                 QMessageBox::information(this," ERREUR "," VEUILLEZ VERIFIER CHAMP Company!!!!") ;
                 QMessageBox::critical(0, qApp->tr("Ajout"),

                                 qApp->tr("Probleme d'ajout"), QMessageBox::Cancel);

             }






    else{




    bool test=col.modifier(id,col);
    if(test)
    {



        N.notification_modifierCollaborateur();
        refresh();
        QMessageBox::information(nullptr, QObject::tr("Modifier un Collaborateur"),
                          QObject::tr("Collaborateur modifiee.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);



    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Modifier Collaborateur"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }


     ui->lineEdit_id_col_m->clear();
     ui->lineEdit_nom_col_m->clear();
     ui->lineEdit_prenom_col_m->clear();
    ui->lineEdit_email_col_m->clear();
     ui->lineEdit_company_col_m->clear();
}}

void Evenement_Collaborateur::on_pb_supprimer_col_clicked()
{
    if(ui->Collaborateur_affichage->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Suppression"),
                          QObject::tr("Veuillez Choisir un Collaborateur du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {   int id=ui->Collaborateur_affichage->model()->data(ui->Collaborateur_affichage->model()->index(ui->Collaborateur_affichage->currentIndex().row(),0)).toInt();










            QString str = " Vous voulez vraiment supprimer \n la Collaborateur :";
                              int ret = QMessageBox::question(this, tr("Collaborateur"),str,QMessageBox::Ok|QMessageBox::Cancel);

                              switch (ret) {
                                case QMessageBox::Ok:
                                    if (tmp_Collaborateur.supprimer(id)){
                                       N.notification_supprimerCollaborateur();
                                            refresh();

                                    }
                                    else
                                      {

                                          QMessageBox::critical(0, qApp->tr("Suppression"),
                                              qApp->tr("Collaborateur non trouvé "), QMessageBox::Cancel);
      }



                                  break;
                                case QMessageBox::Cancel:

                                    break;
                                default:
                                    // should never be reached
                                    break;
                              }


}

}

void Evenement_Collaborateur::on_Collaborateur_affichage_activated(const QModelIndex &index)
{
    QString id=ui->Collaborateur_affichage->model()->data(index).toString();
        QSqlQuery query;
        query.prepare("SELECT * FROM Collaborateur WHERE CODE='"+id+"'");
        if(query.exec())
        {
            while(query.next())
            {
                ui->lineEdit_id_col_m->setText(query.value(0).toString());
                ui->lineEdit_nom_col_m->setText(query.value(1).toString());
                ui->lineEdit_prenom_col_m->setText(query.value(2).toString());
                ui->lineEdit_email_col_m->setText(query.value(3).toString());
                ui->lineEdit_company_col_m->setText(query.value(4).toString());






            }

        }
        else
        {
            QObject::tr("Veuillez Choisir Un ID Du Tableau SVP");
        }

}


//Fin Crud Collaborateur


void Evenement_Collaborateur::on_recherche_Collaborateur_textChanged()
{
    if(ui->recherche_Collaborateur->text()!="")
        {        QString b=ui->comboBox_recherche_Collaborateur->currentText();
                QString a=ui->recherche_Collaborateur->text();
                ui->Collaborateur_affichage->setModel(tmp_Collaborateur.displayClause("WHERE ("+b+" LIKE '%"+a+"%')"));
            }
             else
             ui->Collaborateur_affichage->setModel(tmp_Collaborateur.afficher());

}

void Evenement_Collaborateur::on_recherche_Evenement_textChanged()
{
    if(ui->recherche_Evenement->text()!="")
        {        QString b=ui->comboBox_recherche_Evenement->currentText();
                QString a=ui->recherche_Evenement->text();
                ui->Evenement_affichage->setModel(tmp_Evenement.displayClause("WHERE ("+b+" LIKE '%"+a+"%')"));
            }
             else
             ui->Evenement_affichage->setModel(tmp_Evenement.afficher());

}

void Evenement_Collaborateur::on_tri_croissant_Collaborateur_clicked()
{
    ui->Collaborateur_affichage->setModel(tmp_Collaborateur.tricroissant());

}

void Evenement_Collaborateur::on_tri_deccroissant_Collaborateur_clicked()
{
    ui->Collaborateur_affichage->setModel(tmp_Collaborateur.trideccroissant());

}

void Evenement_Collaborateur::on_tri_croissant_Evenement_clicked()
{
    ui->Evenement_affichage->setModel(tmp_Evenement.tricroissant());

}

void Evenement_Collaborateur::on_tri_deccroissant_Evenement_clicked()
{
    ui->Evenement_affichage->setModel(tmp_Evenement.trideccroissant());

}



void Evenement_Collaborateur::on_pdf_Evenement_clicked()
{
    QPdfWriter pdf("PdfEvenement.pdf");
                  QPainter painter(&pdf);
                 int i = 4000;
                      painter.setPen(Qt::blue);
                      painter.setFont(QFont("Arial", 30));
                      painter.drawText(2300,1200,"Liste Des Evenements");
                      painter.setPen(Qt::black);
                      painter.setFont(QFont("Arial", 50));
                     // painter.drawText(1100,2000,afficheDC);
                      painter.drawRect(1500,200,7300,2600);
                      //painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/RH/Desktop/projecpp/imdate/logopdf.png"));
                      painter.drawRect(0,3000,9600,500);
                      painter.setFont(QFont("Arial", 9));
                      painter.drawText(300,3300,"CODE");
                      painter.drawText(2300,3300,"nom");
                      painter.drawText(4300,3300,"lieu");
                      painter.drawText(6300,3300,"date");



                      QSqlQuery query;
                      query.prepare("select * from Evenement");
                      query.exec();
                      while (query.next())
                      {
                          painter.drawText(300,i,query.value(0).toString());
                          painter.drawText(2300,i,query.value(1).toString());
                          painter.drawText(4300,i,query.value(2).toString());
                          painter.drawText(6300,i,query.value(3).toString());



                         i = i +500;
                      }
                      int reponse = QMessageBox::question(this, "Génerer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);
                          if (reponse == QMessageBox::Yes)
                          {
                              QDesktopServices::openUrl(QUrl::fromLocalFile("PdfEvenement.pdf"));

                              painter.end();
                          }
                          if (reponse == QMessageBox::No)
                          {
                               painter.end();
                          }
}




void Evenement_Collaborateur::mailSent(QString status)
{
    if(status == "Message sent")
        N.mail_Evenement();
}

void Evenement_Collaborateur::on_send_mail_clicked()
{

    Smtp* smtp = new Smtp("aura.forgetPass@gmail.com","Service100a","smtp.gmail.com",465);
       connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

       smtp->sendMail("aura.forgetPass@gmail.com",ui->combobox_email->currentText(),ui->subject->text(),ui->msg->toPlainText());
}








void Evenement_Collaborateur::on_affecter_clicked()
{
    if(ui->Evenement_affichage->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Affectation"),
                          QObject::tr("Veuillez Choisir une Evenement du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {   int code_event=ui->Evenement_affichage->model()->data(ui->Evenement_affichage->model()->index(ui->Evenement_affichage->currentIndex().row(),0)).toInt();
         int code_col=ui->comboBox_affecter->currentText().toInt();
         QString nom_col=tmp_Collaborateur.recup_nom(code_col);
         QString nom_event=tmp_Evenement.recup_nom(code_event);


         Affectation affectation =Affectation(code_event,code_col,nom_event,nom_col);




            QString str = " Vous voulez vraiment affecter ce collaborateur a cet evenement:";
                              int ret = QMessageBox::question(this, tr("Evenement"),str,QMessageBox::Ok|QMessageBox::Cancel);

                              switch (ret) {
                                case QMessageBox::Ok:
                                    if (tmp_affectation.affecter(affectation)){
                                            N.affecter();
                                            refresh();

                                    }
                                    else
                                      {

                                          QMessageBox::critical(0, qApp->tr("Affectation"),
                                              qApp->tr("Evenement non trouvé "), QMessageBox::Cancel);
      }



                                  break;
                                case QMessageBox::Cancel:

                                    break;
                                default:
                                    // should never be reached
                                    break;
                              }


}
}

void Evenement_Collaborateur::on_pb_supprimer_affectation_clicked()
{
    if(ui->affectation_affichage->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Suppression"),
                          QObject::tr("Veuillez Choisir une affectation du Tableau.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
    else
    {   int id=ui->affectation_affichage->model()->data(ui->affectation_affichage->model()->index(ui->affectation_affichage->currentIndex().row(),0)).toInt();










            QString str = " Vous voulez vraiment supprimer \n l'affectation :";
                              int ret = QMessageBox::question(this, tr("Affectation"),str,QMessageBox::Ok|QMessageBox::Cancel);

                              switch (ret) {
                                case QMessageBox::Ok:
                                    if (tmp_affectation.supprimer(id)){
                                      // N.notification_supprimerCollaborateur();
                                            refresh();

                                    }
                                    else
                                      {

                                          QMessageBox::critical(0, qApp->tr("Suppression"),
                                              qApp->tr("Affectation non trouvé "), QMessageBox::Cancel);
      }



                                  break;
                                case QMessageBox::Cancel:

                                    break;
                                default:
                                    // should never be reached
                                    break;
                              }


}
}



void Evenement_Collaborateur::on_tri_croissant_affectation_clicked()
{
    ui->affectation_affichage->setModel(tmp_affectation.tricroissant());

}

void Evenement_Collaborateur::on_tri_deccroissant_affectation_clicked()
{
    ui->affectation_affichage->setModel(tmp_affectation.trideccroissant());

}

void Evenement_Collaborateur::on_recherche_affectation_textChanged(const QString &arg1)
{
    if(ui->recherche_affectation->text()!="")
        {        QString b=ui->comboBox_recherche_affectation->currentText();
                QString a=ui->recherche_affectation->text();
                ui->affectation_affichage->setModel(tmp_affectation.displayClause("WHERE ("+b+" LIKE '%"+a+"%')"));
            }
             else
             ui->affectation_affichage->setModel(tmp_affectation.afficher());
}

void Evenement_Collaborateur::on_pdf_affectation_clicked()
{
    QPdfWriter pdf("PdfAffectation.pdf");
                  QPainter painter(&pdf);
                 int i = 4000;
                      painter.setPen(Qt::blue);
                      painter.setFont(QFont("Arial", 30));
                      painter.drawText(2300,1200,"Liste Des Affectations");
                      painter.setPen(Qt::black);
                      painter.setFont(QFont("Arial", 50));
                     // painter.drawText(1100,2000,afficheDC);
                      painter.drawRect(1500,200,7300,2600);
                      //painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/RH/Desktop/projecpp/imdate/logopdf.png"));
                      painter.drawRect(0,3000,9600,500);
                      painter.setFont(QFont("Arial", 9));
                      painter.drawText(300,3300,"CODE");
                      painter.drawText(2300,3300,"Nom evenement");
                      painter.drawText(4300,3300,"Nom collaborateur");



                      QSqlQuery query;
                      query.prepare("select Code,NOM_EVENT,NOM_COL from AFFECTATION");
                      query.exec();
                      while (query.next())
                      {
                          painter.drawText(300,i,query.value(0).toString());
                          painter.drawText(2300,i,query.value(1).toString());
                          painter.drawText(4300,i,query.value(2).toString());



                         i = i +500;
                      }
                      int reponse = QMessageBox::question(this, "Génerer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);
                          if (reponse == QMessageBox::Yes)
                          {
                              QDesktopServices::openUrl(QUrl::fromLocalFile("PdfAffectation.pdf"));

                              painter.end();
                          }
                          if (reponse == QMessageBox::No)
                          {
                               painter.end();
                          }
}
