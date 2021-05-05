#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>
#include "Reserver.h"
#include "paiement.h"
#include "Evenement_Collaborateur.h"
#include "livraison_veichule.h"
#include "ingredient_plat.h"


QT_BEGIN_NAMESPACE
namespace Ui { class HomePage; }
QT_END_NAMESPACE

class HomePage : public QMainWindow
{
    Q_OBJECT

public:
    HomePage(QWidget *parent = nullptr);
    ~HomePage();

private slots:
    void on_clients_reservations_clicked();


    void on_Evenement_Collaborateur_clicked();

    void on_paiment_facture_clicked();

    void on_livraison_veichule_clicked();

    void on_plats_ingredients_clicked();

private:
    Ui::HomePage *ui;
    Reserver *Client_reservation;
    paiement *paiement;
    Evenement_Collaborateur *Evenement_Collaborateur;
    Livraison_veichule *Livraison_veichule;
    Ingredient_plat *Ingredient_plat;




};
#endif // HOMEPAGE_H
