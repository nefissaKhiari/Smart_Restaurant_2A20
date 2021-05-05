#include "client.h"

Client::Client()

{



    idc="";
    nomc="";
    prenomc="";
    adressec="";
    telc=" ";


}

   Client:: Client  (QString idc , QString nomc ,QString prenomc ,QString adressec , QString telc )
{
       this->idc=idc;
       this->nomc=nomc ;
    this->prenomc=prenomc ;
    this->adressec=adressec;
    this->telc=telc;
}
void Client::setnomc(QString t) { nomc = t ;}
void Client::setprenomc(QString m)
{prenomc=m;}
void Client::setidc( QString idcc) {idcc =idc ;}
void Client::setadressec(QString adressecc) {adressecc =adressec ;}
void Client::settelc(QString telcc)  {telcc=telc ;}

QString Client ::getprenomc() {return prenomc;}
QString Client::getnomc() {return nomc;}
QString Client::getidc(){return idc  ; }
QString Client::getadressec(){return adressec  ; }
QString Client::gettelc(){return telc ; }

bool Client::ajouter_client()
{
QSqlQuery query ;
query.prepare("INSERT INTO client(idc ,  nomc , prenomc ,  adressec , telc )VALUES(:idc,:nomc,:prenomc ,:adressec,:telc)");
query.bindValue(":idc",idc) ;
query.bindValue(":prenomc",prenomc) ;
query.bindValue(":nomc",nomc) ;
query.bindValue(":adressec",adressec) ;
query.bindValue(":telc",telc) ;
return query.exec();

}


QSqlQueryModel * Client::afficher_client()

{
    QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM client ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("IDC"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomc"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenomc"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("adressec"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("telc"));

return model ;


}





bool Client::supprimer(QString idc)
{
    QSqlQuery querry ;
    querry.prepare("delete from client where IDC= :idc");
    querry.bindValue(":idc", idc);
    return  querry.exec();

}







bool Client::modifier_client(QString idc, QString nomc, QString prenomc)
{

QSqlQuery query;

query.prepare("UPDATE client SET idc='"+idc+"',nomc='"+nomc+"',prenomc='"+prenomc+"'WHERE idc='"+idc+"' ");
query.bindValue(":idc",idc);
query.bindValue(":nomc",nomc);
query.bindValue(":prenomc",prenomc);

return  query.exec();
}

QSqlQueryModel *Client::chercher_matpar_idc(QString idc)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM client WHERE idc='"+idc+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("idc"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomc"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenomc"));
        return model ;
    }
}


QSqlQueryModel * Client::chercher_matpar_nomc(QString nomc)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM client WHERE nomc='"+nomc+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("idc"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomc"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenomc"));
        return model ;
    }

 }

QSqlQueryModel * Client::chercher_matpar_prenomc(QString prenomc)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM client WHERE prenomc='"+prenomc+"' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("idc"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomc"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenomc"));
        return model ;
    }

 }


