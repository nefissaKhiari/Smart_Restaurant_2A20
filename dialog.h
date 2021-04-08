#ifndef DIALOG_H
#define DIALOG_H

#include <collaborateur.h>

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit  Dialog(QWidget *parent = nullptr);
    ~Dialog();


private slots:
    void on_ajouter_clicked();


    void on_supprimer_clicked();

    void on_btn_mod_clicked();

private:
    Ui::Dialog *ui;

    Colloborateur tmp,Ctmp ;

};
#endif // DIALOG_H
