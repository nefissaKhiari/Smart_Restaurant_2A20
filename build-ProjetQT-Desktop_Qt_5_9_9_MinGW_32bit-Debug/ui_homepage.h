/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QPushButton *Evenement_Collaborateur;
    QLineEdit *lineEdit_2;
    QPushButton *clients_reservations;
    QPushButton *paiment_facture;
    QPushButton *plats_ingredients;
    QLineEdit *lineEdit_6;
    QPushButton *livraison_veichule;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QStringLiteral("HomePage"));
        HomePage->resize(1054, 600);
        HomePage->setStyleSheet(QStringLiteral("background-image: url(:/images/background.jpg);"));
        centralwidget = new QWidget(HomePage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(650, 300, 171, 22));
        lineEdit_4->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(850, 160, 131, 22));
        lineEdit_3->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(850, 300, 131, 21));
        lineEdit_5->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        Evenement_Collaborateur = new QPushButton(centralwidget);
        Evenement_Collaborateur->setObjectName(QStringLiteral("Evenement_Collaborateur"));
        Evenement_Collaborateur->setGeometry(QRect(680, 200, 111, 101));
        Evenement_Collaborateur->setStyleSheet(QLatin1String("background-image: url(:/images/employe_conge.png);\n"
""));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(670, 160, 131, 22));
        lineEdit_2->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        clients_reservations = new QPushButton(centralwidget);
        clients_reservations->setObjectName(QStringLiteral("clients_reservations"));
        clients_reservations->setGeometry(QRect(680, 60, 111, 101));
        clients_reservations->setStyleSheet(QStringLiteral("background-image: url(:/images/client_reservation.jpg);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/thourayaIMG/filesqt/materiel.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        clients_reservations->setIcon(icon);
        clients_reservations->setIconSize(QSize(100, 100));
        paiment_facture = new QPushButton(centralwidget);
        paiment_facture->setObjectName(QStringLiteral("paiment_facture"));
        paiment_facture->setGeometry(QRect(860, 60, 111, 101));
        paiment_facture->setStyleSheet(QStringLiteral("background-image: url(:/images/paiement_facture.jpg);"));
        plats_ingredients = new QPushButton(centralwidget);
        plats_ingredients->setObjectName(QStringLiteral("plats_ingredients"));
        plats_ingredients->setGeometry(QRect(860, 340, 111, 101));
        plats_ingredients->setStyleSheet(QStringLiteral("background-image: url(:/images/menu_ingredient.jpg);"));
        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(860, 440, 121, 22));
        lineEdit_6->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        livraison_veichule = new QPushButton(centralwidget);
        livraison_veichule->setObjectName(QStringLiteral("livraison_veichule"));
        livraison_veichule->setGeometry(QRect(860, 200, 111, 101));
        livraison_veichule->setStyleSheet(QStringLiteral("background-image: url(:/images/livraison_reclamation.jpg);"));
        HomePage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomePage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1054, 26));
        HomePage->setMenuBar(menubar);
        statusbar = new QStatusBar(HomePage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HomePage->setStatusBar(statusbar);

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QMainWindow *HomePage)
    {
        HomePage->setWindowTitle(QApplication::translate("HomePage", "HomePage", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("HomePage", "Evenement et Collaborateur", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("HomePage", "Paiement et Factures", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("HomePage", "Livraison et Veichules", Q_NULLPTR));
        Evenement_Collaborateur->setText(QString());
        lineEdit_2->setText(QApplication::translate("HomePage", "Client et reservations", Q_NULLPTR));
        paiment_facture->setText(QString());
        plats_ingredients->setText(QString());
        lineEdit_6->setText(QApplication::translate("HomePage", "Plats et Ingredients", Q_NULLPTR));
        livraison_veichule->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
