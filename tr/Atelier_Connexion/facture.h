#ifndef FACTURE_H
#define FACTURE_H
#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class facture
{
public:
    facture();

    facture(QString id ,QString mont ,QString date );
    void setmont(QString t);
    void setdate(QString m);
    void setid(QString ide );
    QString getdate();
    QString getmont();
    QString getid();
    bool ajouter_fact();
     QSqlQueryModel *afficher_fact();
      bool supprimer(QString id);
      QSqlQueryModel * tri(QString);
      bool  modifier(QString ident , QString montt, QString date);
      QSqlQueryModel * chercher_matpar_date(QString  date);
      QSqlQueryModel * chercher_matpar_mont(QString  mont);
      QSqlQueryModel * chercher_matpar_id(QString id);
private:
    QString date, id , montant ;

};

#endif // FACTURE_H
