#include "affectation.h"




    Affectation::Affectation()
    {
    code_col=0;
    code_event=0;

    }
    Affectation::Affectation(int code_event,int code_col,QString nom_event,QString nom_col)
    {
      this->code_event=code_event;
      this->code_col=code_col;
      this->nom_event=nom_event;
      this->nom_col=nom_col;

    }


    int Affectation::get_code_col(){return  code_col;}
    int Affectation::get_code_event(){return code_event;}
     QString Affectation::get_nom_event(){return nom_event;}
     QString Affectation::get_nom_col(){return  nom_col;}



    bool Affectation::affecter(Affectation aff)
    {
    QSqlQuery query;
    query.prepare("INSERT INTO AFFECTATION (CODE_EVENT,CODE_COL,NOM_EVENT,NOM_COL) "
                        "VALUES (:CODE_EVENT, :CODE_COL,:NOM_EVENT,:NOM_COL)");


    query.bindValue(":CODE_EVENT", aff.code_event);
    query.bindValue(":CODE_COL", aff.code_col);
    query.bindValue(":NOM_EVENT", aff.nom_event);
    query.bindValue(":NOM_COL", aff.nom_col);





    return    query.exec();
    }

    QSqlQueryModel * Affectation::afficher()
    {QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select Code,NOM_EVENT,NOM_COL from AFFECTATION");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom Evenement"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom Collaborateur"));



        return model;
    }

    bool Affectation::supprimer(int idd)
    {
    QSqlQuery query;
    QString res= QString::number(idd);
    query.prepare("Delete from Affectation where CODE = :id ");
    query.bindValue(":id", res);
    return    query.exec();
    }



    QSqlQueryModel *Affectation::displayClause(QString cls)
    {
        QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select Code,NOM_EVENT,NOM_COL from AFFECTATION " +cls);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom Evenement"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom Collaborateur"));

        return model;
    }


    QSqlQueryModel * Affectation::tricroissant()
    {QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select Code,NOM_EVENT,NOM_COL from AFFECTATION ORDER BY CODE ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom Evenement"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom Collaborateur"));

        return model;
    }
    QSqlQueryModel * Affectation::trideccroissant()
    {QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select Code,NOM_EVENT,NOM_COL from AFFECTATION ORDER BY CODE DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom Evenement"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom Collaborateur"));

        return model;
    }

