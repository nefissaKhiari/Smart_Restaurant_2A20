#include "vehicule.h"
#include "connexion.h"
#include <QString>
#include <QSqlQuery>
#include<QSqlQueryModel>
vehicule::vehicule()
{
    mat=0;
    disp=0;
    type="";
}

vehicule::vehicule(int mat,QString type,int disp,QDateTime jours)
{
    this->mat=mat;
    this->type=type;
    this->disp=disp;
    this->jours=jours;
}

bool vehicule::ajouter()
{
    QSqlQuery query;
    QString res=QString::number(mat);
    QString ress=QString::number(disp);
    query.prepare("INSERT INTO VEHICLE(mat,type,disp,jours)""VALUES(:mat,:type,:disp,:jours)");
    query.bindValue(":mat",res);
    query.bindValue(":type",type);
    query.bindValue(":disp",disp);
    query.bindValue(":jours",jours);
    return query.exec();

}

bool vehicule::supprimer(int i)
{
    QSqlQuery query;
    QString res=QString::number(i);
    query.prepare("DELETE FROM VEHICLE where mat=:mat");
    query.bindValue(":mat",res);
    return query.exec();
}

QSqlQueryModel *vehicule::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from VEHICLE");
    model->setHeaderData(0,Qt::Horizontal,"mat");
    model->setHeaderData(1,Qt::Horizontal,"type");
    model->setHeaderData(2,Qt::Horizontal,"disp");
    model->setHeaderData(4,Qt::Horizontal,"jours");
    return model ;
}

bool vehicule::modifier(int mat,QString type,int disp,QDateTime jours)
{
    QSqlQuery query;
    query.prepare("UPDATE VEHIClE SET mat=:mat,type=:type,disp=:disp,jours=:jours WHERE mat=:mat");
    QString res= QString::number(mat);
    QString ress=QString::number(disp);
    query.bindValue(":mat",res);
    query.bindValue(":type",type);
    query.bindValue(":disp",ress);
    query.bindValue(":jours",jours);
    return query.exec();
}
QSqlQueryModel *vehicule::notif()
{
 QSqlQueryModel *model = new QSqlQueryModel();
  model->setQuery("SELECT MAT WHERE disp=0");

 model->setHeaderData(0,Qt::Horizontal,"mat");
 model->setHeaderData(1,Qt::Horizontal,"disp");
return model ;






}

