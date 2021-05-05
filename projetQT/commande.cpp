#include "commande.h"

commande::commande()
{
 date="";
 ref="";
 montant="";
 nom="";
}

commande::commande(QString ref , QString mont , QString date , QString nom  )
{
    this->ref=ref;
    this->date=date ;
    this->montant=mont ;
    this->nom=nom;
}
void commande::setmont(QString t) { montant = t ;}
void commande::setdatec(QString m){date=m;}
void commande::setref(QString ref) {ref =ref ;}
void commande::setnom(QString n) {nom =n ;}
QString commande ::getdate() {return date;}
QString commande::getmont() {return montant;}
QString commande::getref(){return ref  ; }
QString commande::getnom(){return nom  ; }
bool commande::ajouter_commande()
{
QSqlQuery query ;
query.prepare("INSERT INTO COMMANDE (REF,montant,DATE_C,nom )VALUES(:ref,:montant,:date,:nom)");

query.bindValue(":ref",ref) ;
query.bindValue(":montant",montant) ;
query.bindValue(":date",date) ;
query.bindValue(":nom",nom) ;

return query.exec();

}
QSqlQueryModel * commande::afficher_commande()
{
    QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM COMMANDE ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("REFERANCE"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("nom"));


return model ;
}
bool commande::supprimer(QString refc)
{
    QSqlQuery querry ;
    querry.prepare("delete from COMMANDE where ref= :ref");
    querry.bindValue(":ref", refc);
    return  querry.exec();

}
QSqlQueryModel *commande::tri(QString n )
{


    {
        QSqlQueryModel * model= new QSqlQueryModel();

        if(n=="DATE")
            model->setQuery("SELECT * FROM COMMANDE ORDER BY DATE ");
        else if(n=="MONTANT")
            model->setQuery("SELECT * FROM COMMANDE ORDER BY MONTANT ");
        else if (n=="IDENTIFIANT")
            model->setQuery("SELECT * FROM COMMANDE ORDER BY REF");

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("REFERANCE"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT"));

            return model;
    }



}

bool commande::modifier_commande (QString ref, QString mont, QString date, QString nom)

{
QSqlQuery query;
query.prepare("UPDATE  COMMANDE SET ref='"+ref+"',DATE_C='"+date+"',MONTANT='"+mont+"' ,nom='"+nom+"' WHERE ref='"+ref+"' ");
query.bindValue(":ref",ref);
query.bindValue(":date_c",date);
query.bindValue(":montant",mont);
query.bindValue(":nom",nom);
return  query.exec();
}
QSqlQueryModel * commande::chercher_matpar_mont(QString mont)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM COMMANDE WHERE MONTANT='"+mont+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("REF"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("MONTANT"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_F"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("nom"));

        return model ;
    }

 }
QSqlQueryModel * commande::chercher_matpar_date(QString date)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM COMMANDE WHERE DATE='"+date+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("REF"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("MONTANT"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("nom"));
        return model ;
    }

 }
QSqlQueryModel *commande::chercher_matpar_ref(QString ref)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM COMMANDE WHERE ref='"+ref+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("REF"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("MONTANT"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("nom"));
        return model ;
    }
}
