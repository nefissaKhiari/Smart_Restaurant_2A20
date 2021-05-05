#include "Evenement_Collaborateur.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connexion.h"
#include "homepage.h"
#include "login.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   Connexion c;
   login l;
   HomePage home;
   bool test= c.ouvrirConnexion();
   Evenement_Collaborateur w;
              if(test)
{
        //w.show();
       // home.show();
        l.show();


    }
          else
               QMessageBox::information(nullptr, QObject::tr("database is not open"),
                           QObject::tr("Echec de la connexion.\n""Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
