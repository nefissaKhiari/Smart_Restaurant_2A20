#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "ingredient_plat.h"
#include <QSound>
#include <QPropertyAnimation>
#include "homepage.h"
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_clicked();
signals :
    void sig();

private:
    Ui::login *ui;
    QSound *son;
    QPropertyAnimation *animation;
    HomePage *homepage;
   // Ingredient_plat *m;

};

#endif // LOGIN_H
