#ifndef LIVRAISON_H
#define LIVRAISON_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include<qdatetimeedit.h>
#include<qdatetime.h>
#include <QVariant>
#include <QComboBox>
class livraison
{
public:
    livraison();
    livraison(int,QString,QString,QDateTime);
    int get_idliv(){return idliv;}
    QString get_livreur(){return livreur;}
    QString get_dest(){return dest;}
    QString get_time();

    bool ajouter2();
    bool supprimer2(int);
    QSqlQueryModel *afficher2();

    bool modifier2(int,QString,QString,QDateTime);
    QSqlQueryModel *trier_of();
    QSqlQueryModel * chercher(int);
    QSqlQueryModel *stat1();
    QSqlQueryModel *stat2();
    QSqlQueryModel *stat3();



private:
    int idliv;
    QString livreur;
    QString dest;
    QDateTime jour;

};


#endif // LIVRAISON_H
