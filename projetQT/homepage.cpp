#include "homepage.h"
#include "ui_homepage.h"




HomePage::HomePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}


void HomePage::on_clients_reservations_clicked()
{
    Client_reservation= new class Reserver(this);
        Client_reservation->show();

}



void HomePage::on_Evenement_Collaborateur_clicked()
{
    Evenement_Collaborateur=new class Evenement_Collaborateur(this);
    Evenement_Collaborateur->show();
}

void HomePage::on_paiment_facture_clicked()
{
    paiement=new class paiement(this);
    paiement->show();
}

void HomePage::on_livraison_veichule_clicked()
{
    Livraison_veichule=new class Livraison_veichule(this);
    Livraison_veichule->show();
}

void HomePage::on_plats_ingredients_clicked()
{
    Ingredient_plat=new class Ingredient_plat(this);
    Ingredient_plat->show();
}
