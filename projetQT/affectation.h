#ifndef AFFECTATION_H
#define AFFECTATION_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include<QDate>


class Affectation
{
public:
    Affectation();
    Affectation(int,int,QString,QString);
    int get_code_event();
    int get_code_col();
    QString get_nom_event();
    QString get_nom_col();

    bool affecter(Affectation);
    QSqlQueryModel * afficher();
    bool supprimer(int);

    QSqlQueryModel *displayClause(QString cls);
    QSqlQueryModel *trideccroissant();
    QSqlQueryModel *tricroissant();




private:
   int code_event,code_col;
    QString nom_event,nom_col;
};

#endif // Collaborateur_H
