#ifndef Collaborateur_H
#define Collaborateur_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include<QDate>

class Collaborateur
{public:
    Collaborateur();
    Collaborateur(QString,QString,QString,QString);
    QString get_nom();
    QString get_prenom();
    QString get_email();

    QString get_company();
    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficherEmail();
    bool supprimer(int);
    bool modifier(int id,Collaborateur end);
    bool test_pourc(int);
    bool testmail(QString);
    QSqlQueryModel *displayClause(QString cls);
    QSqlQueryModel *trideccroissant();
    QSqlQueryModel *tricroissant();
    QString recup_nom(int);



private:
   QString prenom,email,company,nom;

};

#endif // Collaborateur_H
