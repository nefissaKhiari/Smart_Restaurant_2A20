#ifndef Livraison_veichule_H
#define Livraison_veichule_H

#include <QMainWindow>
#include <QSound>
#include "vehicule.h"
#include "livraison.h"
#include <QWidget>
#include <QSqlTableModel>
#include <connexion.h>

#include <QMessageBox>
#include <QDialog>
#include <QPropertyAnimation>
#include "ui_livraison_veichule.h"
#include "connexion.h"
#include <QMessageBox>
#include <QApplication>
#include <QtWidgets/QMainWindow>
#include <QPdfWriter>
#include <QPainter>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include<QDateTime>
#include<QDate>
#include <QRegExpValidator>
#define CARACTERES_ETRANGERS "~{}[]()|-`'^ç@_]\"°01234567890+=£$*µ/§!?,.&#;><"
#include<QIntValidator>
#include <QPrinter>
#include <QPrintPreviewDialog>
#include <QPainter>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class Livraison_veichule; }
QT_END_NAMESPACE

class Livraison_veichule : public QMainWindow
{
    Q_OBJECT

public:
    Livraison_veichule(QWidget *parent = nullptr);
    ~Livraison_veichule();
    void afficher();
    void afficher2();
    void notif();
    void stat1();
    void stat2();
    void stat3();

private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_trie_clicked();

    void on_ajouter_liv_clicked();

    void on_modifier_2_clicked();

    void on_supprimer_2_clicked();

    void on_ajouter_vehicule_clicked();

    void on_modifierveh_clicked();

    void on_supprimerveh_clicked();

    void on_pushButton_search_liv_clicked();













private:
    Ui::Livraison_veichule *ui;
    QSound *son   ;
    QSqlTableModel *model;
    livraison tmplivraison;
    vehicule tmpvehicule;

};
#endif // Livraison_veichule_H
