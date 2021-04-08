#ifndef EVENEMENT_H
#define EVENEMENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Evenement
{
public:
    Evenement();
    Evenement(int,QString,QString,QString);
    int getcodeevenement(){return getcodeevenement();}
    QString getnom(){return nom;}
    QString getlieu(){return lieu;}
    QString getdate_events(){return date_events;}
    void setcodeevenement(int codeevenement){this->codeevenement=codeevenement;}
    void setnom (QString nom){this->nom=nom;}
    void setlieu(QString lieu){this->lieu=lieu;}
    void setdate_events(QString date_events){this->date_events=date_events;}

    bool ajouter();
    bool modifier();
QSqlQueryModel* afficher();
bool supprimer(int);
private:
int codeevenement;
QString nom , lieu , date_events ;

};


#endif // EVENEMENT_H
