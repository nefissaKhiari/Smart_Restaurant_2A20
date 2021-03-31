#include "RESERVATION.h"

RESERVATION::RESERVATION()
{
    id="";
    nom="";
    prenom="";
    type="";
    date="";

}

RESERVATION::RESERVATION(QString id ,QString nom ,QString prenom ,QString type,  QString date   )
{
    this->id=id;
    this->nom=nom ;
    this->prenom=prenom ;
    this->type=type;
    this->date=date;

}
void RESERVATION::setid(QString ide) {id =ide ;}
void RESERVATION::setnom(QString t) { nom = t ;}
void RESERVATION::setprenom(QString m) {prenom=m;}






QString RESERVATION::getid(){return id  ; }
QString RESERVATION::getnom() {return nom;}
QString RESERVATION ::getprenom() {return prenom;}

bool RESERVATION::ajouter_fact()
{
QSqlQuery query ;
query.prepare("INSERT INTO RESERVATION(IDR,NOMR,PRENOM,TYPE,DATER )VALUES(:id,:nom,:prenom,:type,:date)");
query.bindValue(":id",id) ;
query.bindValue(":nom",nom) ;
query.bindValue(":prenom",prenom) ;
query.bindValue(":type",type) ;
query.bindValue(":date",date) ;

return query.exec();

}
QSqlQueryModel * RESERVATION::afficher_fact()
{
    QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM RESERVATION ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("TYPE"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE"));



return model ;
}
bool RESERVATION::supprimer(QString ide)
{
    QSqlQuery querry ;
    querry.prepare("delete from RESERVATION where IDR= :id");
    querry.bindValue(":id", ide);
    return  querry.exec();

}
QSqlQueryModel *RESERVATION::tri(QString n )
{


    {
        QSqlQueryModel * model= new QSqlQueryModel();

        if(n=="IDR")
            model->setQuery("SELECT * FROM RESERVATION ORDER BY IDR ");
        else if(n=="NOMR")
            model->setQuery("SELECT * FROM RESERVATION ORDER BY NOMR ");
        else if (n=="PRENOM")
            model->setQuery("SELECT * FROM RESERVATION ORDER BY PRENOM");

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDR"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMR"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));

            return model;
    }



}

bool RESERVATION::modifier(QString ident , QString nom, QString prenom)
{
QSqlQuery query;
query.prepare("UPDATE RESERVATION SET IDR='"+ident+"',PRENOM='"+prenom+"',NOMR='"+nom+"'WHERE IDR='"+ident+"' ");
query.bindValue(":identifiant",ident);
query.bindValue(":prenom",prenom);
query.bindValue(":nom",nom);
return  query.exec();
}


QSqlQueryModel *RESERVATION::chercher_matpar_id(QString id)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM RESERVATION WHERE IDR='"+id+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDR"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMR"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
        return model ;
    }
}
QSqlQueryModel * RESERVATION::chercher_matpar_nom(QString nom)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM RESERVATION WHERE NOMR='"+nom+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDR"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMR"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
        return model ;
    }

 }
QSqlQueryModel * RESERVATION::chercher_matpar_prenom(QString prenom)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM RESERVATION WHERE PRENOM='"+prenom+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDR"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMR"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
        return model ;
    }

 }
