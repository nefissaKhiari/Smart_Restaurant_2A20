#ifndef COMMANDE_H
#define COMMANDE_H
#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class commande
{
public:
    commande();

    commande(QString ref ,QString mont ,QString date,QString nom );
    void setmont(QString t);
    void setdatec(QString m);
    void setref(QString ref );
    void setnom(QString nom);
    QString getdate();
    QString getmont();
    QString getref();
    QString getnom();
    bool ajouter_commande();
     QSqlQueryModel *afficher_commande();
      bool supprimer(QString ref);
      QSqlQueryModel * tri(QString);
      bool  modifier_commande (QString ref , QString mont, QString date ,QString nom);
      QSqlQueryModel * chercher_matpar_date(QString  date);
      QSqlQueryModel * chercher_matpar_mont(QString  mont);
      QSqlQueryModel * chercher_matpar_ref(QString ref);
     // QSqlQueryModel * chercher_matpar_nom(QString nom);
private:
    QString date, ref , montant, nom ;

};

#endif // COMMANDE_H
