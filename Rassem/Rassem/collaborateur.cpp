#include "collaborateur.h"
#include <QDebug>
#include "connexion.h"
Collaborateur::Collaborateur()
{
nom="";


}
Collaborateur::Collaborateur(QString nom,QString prenom,QString email,QString company)
{
  this->nom=nom;
  this->prenom=prenom;
  this->email=email;
  this->company=company;

}
QString Collaborateur::get_nom(){return  nom;}
QString Collaborateur::get_prenom(){return prenom;}
QString Collaborateur::get_email(){return  email;}
QString Collaborateur::get_company(){return  company;}



bool Collaborateur::ajouter()
{
QSqlQuery query;
query.prepare("INSERT INTO Collaborateur (NOM,PRENOM,EMAIL,COMPANY) "
                    "VALUES (:nom, :prenom,:email,:company)");
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":email", email);
query.bindValue(":company", company);



return    query.exec();
}

QSqlQueryModel * Collaborateur::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from Collaborateur");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Email"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Company"));


    return model;
}

bool Collaborateur::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from Collaborateur where CODE = :id ");
query.bindValue(":id", res);
return    query.exec();
}

bool Collaborateur::modifier(int id,Collaborateur end)
{   QSqlQuery query;
    QString res= QString::number(id);

    query.prepare( "UPDATE Collaborateur SET CODE=:id,nom=:nom,prenom=:prenom,email=:email,company=:company WHERE CODE=:id");
    query.bindValue(":id",res);
    query.bindValue(":nom",end.nom);
    query.bindValue(":prenom",end.prenom);
    query.bindValue(":email",end.email);
    query.bindValue(":company", end.company);



 return query.exec();
}



QSqlQueryModel *Collaborateur::displayClause(QString cls)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM Collaborateur " +cls);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Company"));

    return model;
}


QSqlQueryModel * Collaborateur::tricroissant()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * FROM Collaborateur ORDER BY CODE ASC");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Email"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Company"));

    return model;
}
QSqlQueryModel * Collaborateur::trideccroissant()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * FROM Collaborateur ORDER BY CODE DESC");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Email"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Company"));

    return model;
}

bool Collaborateur::testmail(QString mail){
    int test=0;
    for(int i = 0; i < mail.size(); i++) {
if(mail[i]=="@")
{test++;

}}
    for(int i = 0; i < mail.size(); i++) {
if((test==1)&&(mail[i]=="."))
{if(mail.size()>i+1)
    return true;
}}
return false;}

QSqlQueryModel * Collaborateur::afficherEmail()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select Email from Collaborateur");
    return model;
}


QString Collaborateur::recup_nom(int id){


    QSqlQuery query;
    QString nom="";
    QString res= QString::number(id);

    query.prepare("Select * from Collaborateur where CODE = :id ");
    query.bindValue(":id", res);

    if (query.exec())
             {
              while (query.next())
              {             nom =query.value(1).toString()+" "+query.value(2).toString();

               }}

    qDebug("hey" + nom.toLatin1());




              return nom;

}



