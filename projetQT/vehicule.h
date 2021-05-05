#ifndef VEHICULE_H
#define VEHICULE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include<qdatetimeedit.h>
#include<qdatetime.h>
#include <QVariant>
#include <QComboBox>
class vehicule
{
public:
    vehicule();
    vehicule(int,QString,int,QDateTime);
    int get_mat(){return mat;}
    QString get_type(){return type;}
    int get_disp(){return disp;}
    QString get_time();

    bool ajouter();
    bool supprimer(int);
    QSqlQueryModel *afficher();
    bool modifier(int,QString,int,QDateTime);

     QSqlQueryModel*notif();
;
private:
    int mat;
    QString type;
    int disp;
    QDateTime jours;
};

#endif // VEHICULE_H
