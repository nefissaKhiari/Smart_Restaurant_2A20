#include "facture.h"

facture::facture()
{
 date="";
 id="";
 montant="";
}

facture::facture(QString date , QString mont , QString id  )
{
    this->date=date ;
    this->montant=mont ;
    this->id=id;
}
void facture::setmont(QString t) { montant = t ;}
void facture::setdate(QString m)
{date=m;}
void facture::setid(QString ide) {id =ide ;}
QString facture ::getdate() {return date;}
QString facture::getmont() {return montant;}
QString facture::getid(){return id  ; }
bool facture::ajouter_fact()
{
QSqlQuery query ;
query.prepare("INSERT INTO FACTURE(MONTANT,IDENTIFIANT,DATE_F )VALUES(:id,:date,:mont)");
query.bindValue(":id",id) ;
query.bindValue(":date",date) ;
query.bindValue(":mont",montant) ;

return query.exec();

}

QSqlQueryModel * facture::afficher_fact()
{
    QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM FACTURE ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE_F"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT"));

return model ;
}
bool facture::supprimer(QString ide)
{
    QSqlQuery querry ;
    querry.prepare("delete from FACTURE where IDENTIFIANT= :id");
    querry.bindValue(":id", ide);
    return  querry.exec();

}
QSqlQueryModel *facture::tri(QString n )
{


    {
        QSqlQueryModel * model= new QSqlQueryModel();

        if(n=="DATE_F")
            model->setQuery("SELECT * FROM FACTURE ORDER BY DATE_F ");
        else if(n=="MONTANT")
            model->setQuery("SELECT * FROM FACTURE ORDER BY MONTANT ");
        else if (n=="IDENTIFIANT")
            model->setQuery("SELECT * FROM FACTURE ORDER BY IDENTIFIANT");

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE_F"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT"));

            return model;
    }



}

bool facture::modifier(QString ident , QString mont, QString date)
{
QSqlQuery query;
query.prepare("UPDATE  FACTURE SET IDENTIFIANT='"+ident+"',DATE_F='"+date+"',MONTANT='"+mont+"'WHERE IDENTIFIANT='"+ident+"' ");
query.bindValue(":identifiant",ident);
query.bindValue(":date",date);
query.bindValue(":montant",mont);
return  query.exec();
}
QSqlQueryModel * facture::chercher_matpar_mont(QString mont)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM FACTURE WHERE MONTANT='"+mont+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("MONTANT"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_F"));
        return model ;
    }

 }
QSqlQueryModel * facture::chercher_matpar_date(QString date)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM FACTURE WHERE DATE_F='"+date+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("MONTANT"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_F"));
        return model ;
    }

 }
QSqlQueryModel *facture::chercher_matpar_id(QString id)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM FACTURE WHERE IDENTIFIANT='"+id+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDENTIFIANT"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("MONTANT"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_F"));
        return model ;
    }
}
