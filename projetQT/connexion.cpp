#include "connexion.h"

Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{
bool test=false;
    db=QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projetfin");
db.setUserName("fakher");//inserer nom de l'utilisateur
db.setPassword("fakher");//inserer mot de passe de cet utilisateur


if (db.open()) test = true;


return test;

}
void Connexion::fermerConnexion()
{db.close();}

QSqlDatabase Connexion::get_db()
{
    return db;
}
