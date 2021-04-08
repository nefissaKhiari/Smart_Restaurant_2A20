#include "connexion.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

//Test tutoriel git

Connexion::Connexion()
{
    // db=QSqLDatabase::addDatabase("QODBC");
}

bool Connexion::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");//inserer le nom de la source de données ODBC
db.setUserName("rassem");//inserer nom de l'utilisateur
db.setPassword("ras11");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
