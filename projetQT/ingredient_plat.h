#ifndef Ingredient_plat_H
#define Ingredient_plat_H

#include <QMainWindow>
#include <QSound>
#include "plat.h"
#include "ingredient.h"
#include <QWidget>
#include <QSqlTableModel>
#include <connexion.h>

#include "secdialog.h"
#include <QMessageBox>
#include <QDialog>
#include <QPropertyAnimation>
#include "ui_ingredient_plat.h"
#include <QMessageBox>
#include <QApplication>
#include <QtWidgets/QMainWindow>
#include <qcustomplot.h>
#include "qcustomplot.h"
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
#include "tableprinter.h"
#include <QPrinter>
#include <QPrintPreviewDialog>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class Ingredient_plat; }
QT_END_NAMESPACE

class Ingredient_plat : public QMainWindow
{
    Q_OBJECT

public:
    Ingredient_plat(QWidget *parent = nullptr);
    ~Ingredient_plat();
    void afficher();
    void afficher2();
private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_ajouter_ing_clicked();

    void on_modifier_2_clicked();

    void on_supprimer_2_clicked();

    void on_ajouter_plat_clicked();

    void on_modifierplat_clicked();

    void on_supprimerplat_clicked();

    void on_pushButton_rechercher_clicked();

    void on_pushButton_trie_clicked();

    void on_pushButton_imprimer_9_clicked();

    void uglyPrint(QPrinter *printer);


    void on_pushButton_stat_clicked();

    void on_pushButton_clicked();

private:
    Ui::Ingredient_plat *ui;
    QSound *son;
    QSqlTableModel *model;
    ingredient tmpingredient;
    plat tmpplat;
    SecDialog *secDialog;

};
#endif // Ingredient_plat_H
