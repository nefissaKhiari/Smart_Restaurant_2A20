#include "evenement.h"
#include <QDebug>
#include "connexion.h"
Evenement::Evenement()
{
nom="";
}
Evenement::Evenement(QString nom,QString lieu,QDate date)
{
  this->nom=nom;
  this->date=date;
  this->lieu=lieu;

}
QString Evenement::get_nom(){return  nom;}
QDate Evenement::get_date(){return date;}
QString Evenement::get_lieu(){return  lieu;}



bool Evenement::ajouter()
{
QSqlQuery query;
query.prepare("INSERT INTO Evenement (NOM,LIEU,DATEE) "
                    "VALUES (:nom, :lieu,:date)");
query.bindValue(":nom", nom);
query.bindValue(":date", date);
query.bindValue(":lieu", lieu);



return    query.exec();
}

QSqlQueryModel * Evenement::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from Evenement");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODE"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("LIEU"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE"));


    return model;
}

bool Evenement::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from Evenement where CODE = :id ");
query.bindValue(":id", res);
return    query.exec();
}

bool Evenement::modifier(Evenement e,int id)
{   QSqlQuery query;
    QString res= QString::number(id);

    query.prepare( "UPDATE Evenement SET  NOM=:nom,LIEU=:lieu,DATEE=:date WHERE CODE=:id");
    query.bindValue(":id",res);
    query.bindValue(":nom",e.nom);
    query.bindValue(":date",e.date);
    query.bindValue(":lieu", e.lieu);



 return query.exec();
}

QSqlQueryModel *Evenement::displayClause(QString cls)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM Evenement " +cls);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("LIEU"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE"));
    return model;
}



QSqlQueryModel * Evenement::tricroissant()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * FROM Evenement ORDER BY DATEE ASC");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODE"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("LIEU"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE"));

    return model;
}
QSqlQueryModel * Evenement::trideccroissant()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * FROM Evenement ORDER BY DATEE DESC");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODE"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("LIEU"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE"));
    return model;
}


QString Evenement::recup_nom(int id){


    QSqlQuery query;
    QString nom="";
    query.prepare("Select * from Evenement where CODE = :id ");
    query.bindValue(":id", id);

    if (query.exec())
             {
              while (query.next())
              {             nom =query.value(1).toString();

               }}
              return nom;

}
