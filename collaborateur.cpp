#include "collaborateur.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

Colloborateur::Colloborateur()
{
/*codecolloborateur=0;
nom=" ";
prenom=" ";
company=" ";*/
}

Colloborateur::Colloborateur(int codecolloborateur,QString nom,QString prenom,QString company)
    {
    this->codecolloborateur=codecolloborateur;
    this->nom=nom;
    this->prenom=prenom;
    this->company=company;

    }


bool Colloborateur::ajouter()
{
    QString res=QString::number(codecolloborateur);
    QSqlQuery query;
    query.prepare("INSERT INTO colloborateur(codecolloborateur,nom,prenom,company)"
                  "VALUES (:codecolloborateur, :nom, :prenom, :company)");
    query.bindValue(":codecolloborateur", res);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":company", company);
    return query.exec();
}


bool Colloborateur::supprimer(int codecolloborateur)
{

      QString res=QString::number(codecolloborateur);
    QSqlQuery query;
    query.prepare("Delete from colloborateur where codecolloborateur=:codecolloborateur") ;

    query.bindValue(":codecolloborateur", res);
    return query.exec();

}

QSqlQueryModel* Colloborateur::afficher()
{

    QSqlQueryModel *model = new QSqlQueryModel();

    model->setQuery("SELECT* FROM colloborateur");


    model->setHeaderData(0, Qt::Horizontal,QObject::tr("codecolloborateur"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("company"));





    return model;

}


bool Colloborateur::modifier()
 {
        QSqlQuery query;

        QString res=QString::number(codecolloborateur);



        query.prepare("UPDATE colloborateur SET codecolloborateur=:codecolloborateur,nom=:nom,prenom=:prenom,company=:company WHERE codecolloborateur=:codecolloborateur");



         query.bindValue(":codecolloborateur", res );
         query.bindValue(":nom", nom );
         query.bindValue(":prenom", prenom);
         query.bindValue(":company", company);

          return query.exec();



    }


