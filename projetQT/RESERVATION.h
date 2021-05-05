#ifndef RESERVATION_H
#define RESERVATION_H
#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class RESERVATION
{
public:
    RESERVATION();

    RESERVATION( QString id ,QString nom ,QString prenom ,QString type ,QString date);

    void setid(QString ide );
    void setnom(QString t);
    void setprenom(QString m);
   void settype(QString typee );
    void setdate(QString m);
    QString getid();
    QString getnom();
    QString getprenom();
    QString gettype();
    QString getdate();

    bool ajouter_fact();
     QSqlQueryModel *afficher_fact();
      bool supprimer(QString id);
      QSqlQueryModel * tri(QString nn);
      bool  modifier(QString ident , QString nom, QString prenom);



      QSqlQueryModel * chercher_matpar_id(QString id);
      QSqlQueryModel * chercher_matpar_nom(QString  nom);
       QSqlQueryModel * chercher_matpar_prenom(QString  prenom);
private:
    QString id , nom ,prenom,type,date;

};

#endif // RESERVATION_H
