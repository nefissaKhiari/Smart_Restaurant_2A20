#ifndef COLLABORATEUR_H
#define COLLABORATEUR_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Colloborateur

{




public:
    Colloborateur();
    Colloborateur(int,QString,QString,QString);
    int getcodecolloborateur(){return codecolloborateur;}
    QString getnom(){return nom;}
    QString getprenom(){return prenom;}
    QString getcompany(){return company ;}
    void setcodecolloborateur(int codecolloborateur){this->codecolloborateur=codecolloborateur;}
    void setnom (QString nom){this->nom=nom;}
    void setprenom(QString prenom){this->prenom=prenom;}
    void setcompany (QString company){this->company=company;}

    bool ajouter();
    bool modifier();
QSqlQueryModel* afficher();
bool supprimer(int);
private:
int codecolloborateur;
QString nom , prenom , company ;

};


#endif // COLLABORATEUR_H
