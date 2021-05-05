#include "livraison.h"
#include "connexion.h"
#include <QString>
#include <QSqlQuery>
#include<QSqlQueryModel>

livraison::livraison()
{
    idliv=0;
    QString livreur="";
    QString dest="";
    QDateTime jour;
}

livraison::livraison(int idliv,QString livreur,QString dest,QDateTime jour)
{
    this->idliv=idliv;
    this->livreur=livreur;
    this->dest=dest;
    this->jour=jour;
}

bool livraison::ajouter2()
{
    QSqlQuery query;
    QString res=QString::number(idliv);
    query.prepare("INSERT INTO LIVRAISON(idliv,livreur,dest)""VALUES(:idliv,:livreur,:dest)");
    query.bindValue(":idliv",res);
    query.bindValue(":livreur",livreur);
    query.bindValue(":dest",dest);
    return query.exec();
}

bool livraison::supprimer2(int i)
{
    QSqlQuery query;
    QString res=QString::number(i);
    query.prepare("DELETE FROM LIVRAISON where idliv=:idliv");
    query.bindValue(":idliv",res);
    return query.exec();
}

QSqlQueryModel *livraison::afficher2()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from LIVRAISON ");
    model->setHeaderData(0,Qt::Horizontal,"idliv");
    model->setHeaderData(2,Qt::Horizontal,"livreur");
    model->setHeaderData(1,Qt::Horizontal,"dest");
    model->setHeaderData(3,Qt::Horizontal,"jour");
    return model ;
}

bool livraison::modifier2(int idliv,QString livreur,QString dest,QDateTime jour)
{
    QSqlQuery query;
    query.prepare("UPDATE LIVRAISON SET idliv=:idliv,livreur=:livreur,dest=:dest WHERE idliv=:idliv");
    QString res= QString::number(idliv);
    query.bindValue(":idliv",res);
    query.bindValue(":livreur",livreur);
    query.bindValue(":dest",dest);
    query.bindValue(":jour",jour);
    return query.exec();
}
QSqlQueryModel* livraison::trier_of()
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from livraison order by idliv");
    model->setHeaderData(0,Qt::Horizontal,"idliv");
    model->setHeaderData(2,Qt::Horizontal,"livreur");
    model->setHeaderData(1,Qt::Horizontal,"dest");
    model->setHeaderData(3,Qt::Horizontal,"jour");
     return model;
}
QSqlQueryModel *  livraison::chercher(int idliv)
{
    QSqlQueryModel * model=new QSqlQueryModel();
    QString res=QString::number(idliv);
    model->setQuery("SELECT * from LIVRAISON WHERE (idliv LIKE '"+res+"' ) ");
    return  model;

}
QSqlQueryModel *livraison::stat1()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from LIVRAISON where livreur='Saber' ");
    model->setHeaderData(0,Qt::Horizontal,"idliv");
    model->setHeaderData(2,Qt::Horizontal,"livreur");
    model->setHeaderData(1,Qt::Horizontal,"dest");
    model->setHeaderData(3,Qt::Horizontal,"jour");
    return model ;
}
QSqlQueryModel *livraison::stat2()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from LIVRAISON where livreur='Aziz' ");
    model->setHeaderData(0,Qt::Horizontal,"idliv");
    model->setHeaderData(2,Qt::Horizontal,"livreur");
    model->setHeaderData(1,Qt::Horizontal,"dest");
    model->setHeaderData(3,Qt::Horizontal,"jour");
    return model ;
}
QSqlQueryModel *livraison::stat3()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from LIVRAISON where livreur='Ali' ");
    model->setHeaderData(0,Qt::Horizontal,"idliv");
    model->setHeaderData(2,Qt::Horizontal,"livreur");
    model->setHeaderData(1,Qt::Horizontal,"dest");
    model->setHeaderData(3,Qt::Horizontal,"jour");
    return model ;
}




