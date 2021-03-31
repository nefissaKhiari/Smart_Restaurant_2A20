#ifndef CLIENT_H
#define CLIENT_H
#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class Client
{


public:


    Client();

   Client(QString idc, QString nomc,QString prenomc,QString adressec ,QString telc);
    void setidc(QString idc);
    void setnomc(QString nomc);
    void setprenomc(QString prenomc);
    void setadressec (QString adressec);
    void settelc(QString telc );

    QString getidc();
    QString getnomc();
    QString getprenomc();


    QString getadressec();
    QString gettelc();
    bool ajouter_client();
     QSqlQueryModel *afficher_client();
      bool supprimer(QString idc);
      QSqlQueryModel * tri(QString);
      bool  modifier_client(QString idc ,QString nomc ,QString prenomc);
       QSqlQueryModel * chercher_matpar_idc(QString idc);
       QSqlQueryModel * chercher_matpar_nomc(QString  nomc);
      QSqlQueryModel * chercher_matpar_prenomc(QString  prenomc);

private:
    QString idc , nomc , prenomc,adressec  ;
    QString telc;
};

#endif // CLIENT_H
