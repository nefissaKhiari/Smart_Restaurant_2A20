#ifndef Evenement_H
#define Evenement_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include<QTime>

class Evenement
{public:
    Evenement();
    Evenement(QString,QString,QDate);
    QString get_nom();
    QDate get_date();
    QString get_lieu();

    QString get_duree();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier(Evenement e,int id);
    QSqlQueryModel *displayClause(QString cls);
    QSqlQueryModel *trideccroissant();
    QSqlQueryModel *tricroissant();
    QString recup_nom(int);





private:
    QString nom;
    QDate date;
    QString lieu;
};

#endif // Evenement_H
