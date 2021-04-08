#include "evenement.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

Evenement::Evenement()
{
    /*codeevenement=0;
    nom=" ";
    lieu=" ";
    date_events=" ";*/
    }

    Evenement::Evenement(int codeevenement,QString nom,QString lieu,QString date_events)
        {
        this->codeevenement=codeevenement;
        this->nom=nom;
        this->lieu=lieu;
        this->date_events=date_events;

        }


    bool Evenement::ajouter()
    {
        QString res=QString::number(codeevenement);
        QSqlQuery query;
        query.prepare("INSERT INTO evenement(codeevenement,nom,lieu,date_events)"
                      "VALUES (:codeevenement, :nom, :lieu, :date_events)");
        query.bindValue(":codeevenement", res);
        query.bindValue(":nom", nom);
        query.bindValue(":lieu", lieu);
        query.bindValue(":date_events", date_events);
        return query.exec();
    }


    bool Evenement::supprimer(int codeevenement)
    {

          QString res=QString::number(codeevenement);
        QSqlQuery query;
        query.prepare("Delete from evenement where codeevenement=:codeevenement") ;

        query.bindValue(":codeevenement", res);
        return query.exec();

    }

    QSqlQueryModel* Evenement::afficher()
    {

        QSqlQueryModel *model = new QSqlQueryModel();

        model->setQuery("SELECT* FROM evenement");


        model->setHeaderData(0, Qt::Horizontal,QObject::tr("codeevenement"));
        model->setHeaderData(1, Qt::Horizontal,QObject::tr("nom"));
        model->setHeaderData(2, Qt::Horizontal,QObject::tr("lieu"));
        model->setHeaderData(3, Qt::Horizontal,QObject::tr("date_events"));





        return model;

    }


    bool Evenement::modifier()
     {
            QSqlQuery query;

            QString res=QString::number(codeevenement);



            query.prepare("UPDATE evenement SET codeevenement=:codeevenement,nom=:nom,lieu=:lieu,date_events=:date_events WHERE codeevenement=:codeevenement");



             query.bindValue(":codeevenement", res );
             query.bindValue(":nom", nom );
             query.bindValue(":lieu", lieu);
             query.bindValue(":date_events", date_events);

              return query.exec();



        }




