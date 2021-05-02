#ifndef Evenement_Collaborateur_H
#define Evenement_Collaborateur_H
#include "evenement.h"
#include "collaborateur.h"
#include "affectation.h"
#include "notification.h"


#include <QMainWindow>

namespace Ui {
class Evenement_Collaborateur;
}

class Evenement_Collaborateur : public QMainWindow
{
    Q_OBJECT

public:
    explicit Evenement_Collaborateur(QWidget *parent = nullptr);
    ~Evenement_Collaborateur();

private slots:
    void on_pb_ajouter_clicked();




    void on_Evenement_affichage_activated(const QModelIndex &index);


    void on_pb_supprimer_clicked();

    void on_modifier_Evenement_clicked();
    void on_pb_ajouter_col_clicked();

    void on_pb_modifier_col_clicked();

    void on_pb_supprimer_col_clicked();

    void on_Collaborateur_affichage_activated(const QModelIndex &index);

    void refresh();

    void on_recherche_Collaborateur_textChanged();

    void on_recherche_Evenement_textChanged();

    void on_tri_croissant_Collaborateur_clicked();

    void on_tri_deccroissant_Collaborateur_clicked();

    void on_tri_croissant_Evenement_clicked();

    void on_tri_deccroissant_Evenement_clicked();



    void on_pdf_Evenement_clicked();

    void on_send_mail_clicked();
    void mailSent(QString );





    void on_affecter_clicked();

    void on_pb_supprimer_affectation_clicked();


    void on_tri_croissant_affectation_clicked();

    void on_tri_deccroissant_affectation_clicked();

    void on_recherche_affectation_textChanged(const QString &arg1);

    void on_pdf_affectation_clicked();

private:
    Ui::Evenement_Collaborateur *ui;
    Evenement tmp_Evenement;
    Collaborateur tmp_Collaborateur;
    Notification N;
    Affectation tmp_affectation;


};

#endif // Evenement_Collaborateur_H
