/********************************************************************************
** Form generated from reading UI file 'Evenement_Collaborateur.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENEMENT_COLLABORATEUR_H
#define UI_EVENEMENT_COLLABORATEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Evenement_Collaborateur
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *titre_3;
    QTabWidget *Gestion_marketing_3;
    QWidget *tab_10;
    QLabel *reference_3;
    QLabel *quantite_5;
    QLineEdit *lineEdit_nom_col;
    QPushButton *pb_ajouter_col;
    QLabel *quantite_6;
    QLineEdit *lineEdit_prenom_col;
    QLabel *quantite_7;
    QLineEdit *lineEdit_email_col;
    QLineEdit *lineEdit_company_col;
    QWidget *tab_12;
    QLabel *label_13;
    QLabel *label_15;
    QRadioButton *radioButton_6;
    QPushButton *pb_supprimer_col;
    QLabel *label_16;
    QLabel *label_17;
    QTableView *Collaborateur_affichage;
    QPushButton *pb_modifier_col;
    QLineEdit *recherche_Collaborateur;
    QComboBox *comboBox_recherche_Collaborateur;
    QPushButton *tri_croissant_Collaborateur;
    QPushButton *tri_deccroissant_Collaborateur;
    QLabel *quantite_8;
    QLineEdit *lineEdit_id_col_m;
    QLineEdit *lineEdit_company_col_m;
    QLabel *quantite_9;
    QLineEdit *lineEdit_prenom_col_m;
    QLabel *reference_4;
    QLabel *reference_10;
    QLineEdit *lineEdit_nom_col_m;
    QLineEdit *lineEdit_email_col_m;
    QLabel *quantite_10;
    QWidget *tab_2;
    QGroupBox *titre_2;
    QTabWidget *Gestion_marketing_2;
    QWidget *tab_9;
    QLabel *reference_2;
    QLabel *quantite_2;
    QLineEdit *lineEdit_nom;
    QPushButton *pb_ajouter;
    QLabel *quantite_4;
    QLineEdit *lineEdit_lieu;
    QDateEdit *dateEdit_event;
    QWidget *tab_11;
    QLabel *label_9;
    QRadioButton *radioButton_5;
    QPushButton *pb_supprimer;
    QLabel *label_11;
    QLabel *label_12;
    QTableView *Evenement_affichage;
    QPushButton *modifier_Evenement;
    QLineEdit *recherche_Evenement;
    QComboBox *comboBox_recherche_Evenement;
    QLabel *label_18;
    QPushButton *tri_deccroissant_Evenement;
    QPushButton *tri_croissant_Evenement;
    QPushButton *pdf_Evenement;
    QLabel *quantite_11;
    QLabel *reference_5;
    QLineEdit *lineEdit_nom_m;
    QLineEdit *lineEdit_lieu_m;
    QLabel *quantite_3;
    QLineEdit *lineEdit_id_m;
    QLabel *reference_6;
    QDateEdit *dateEdit_event_m;
    QComboBox *comboBox_affecter;
    QPushButton *affecter;
    QWidget *tab_14;
    QPlainTextEdit *msg;
    QLineEdit *subject;
    QPushButton *send_mail;
    QLabel *nom_4;
    QLabel *nom_6;
    QLabel *nom_7;
    QComboBox *combobox_email;
    QWidget *tab_3;
    QPushButton *pb_supprimer_affectation;
    QTableView *affectation_affichage;
    QPushButton *pdf_affectation;
    QLabel *label_19;
    QComboBox *comboBox_recherche_affectation;
    QLineEdit *recherche_affectation;
    QPushButton *tri_croissant_affectation;
    QPushButton *tri_deccroissant_affectation;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Evenement_Collaborateur)
    {
        if (Evenement_Collaborateur->objectName().isEmpty())
            Evenement_Collaborateur->setObjectName(QStringLiteral("Evenement_Collaborateur"));
        Evenement_Collaborateur->resize(1173, 655);
        Evenement_Collaborateur->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(Evenement_Collaborateur);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-image: url(:/images/background.jpg);"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1181, 611));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        titre_3 = new QGroupBox(tab);
        titre_3->setObjectName(QStringLiteral("titre_3"));
        titre_3->setGeometry(QRect(10, 10, 1181, 661));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        titre_3->setFont(font);
        titre_3->setStyleSheet(QLatin1String("QGroupBox {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 40px;\n"
"background-color:  rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        Gestion_marketing_3 = new QTabWidget(titre_3);
        Gestion_marketing_3->setObjectName(QStringLiteral("Gestion_marketing_3"));
        Gestion_marketing_3->setGeometry(QRect(-20, 30, 1191, 531));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        Gestion_marketing_3->setFont(font1);
        Gestion_marketing_3->setStyleSheet(QStringLiteral(""));
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        reference_3 = new QLabel(tab_10);
        reference_3->setObjectName(QStringLiteral("reference_3"));
        reference_3->setGeometry(QRect(110, 160, 41, 20));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        reference_3->setFont(font2);
        reference_3->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        quantite_5 = new QLabel(tab_10);
        quantite_5->setObjectName(QStringLiteral("quantite_5"));
        quantite_5->setGeometry(QRect(100, 190, 61, 20));
        quantite_5->setFont(font2);
        quantite_5->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_nom_col = new QLineEdit(tab_10);
        lineEdit_nom_col->setObjectName(QStringLiteral("lineEdit_nom_col"));
        lineEdit_nom_col->setGeometry(QRect(160, 151, 231, 31));
        lineEdit_nom_col->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        pb_ajouter_col = new QPushButton(tab_10);
        pb_ajouter_col->setObjectName(QStringLiteral("pb_ajouter_col"));
        pb_ajouter_col->setGeometry(QRect(390, 340, 141, 41));
        pb_ajouter_col->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        quantite_6 = new QLabel(tab_10);
        quantite_6->setObjectName(QStringLiteral("quantite_6"));
        quantite_6->setGeometry(QRect(80, 290, 71, 20));
        quantite_6->setFont(font2);
        quantite_6->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_prenom_col = new QLineEdit(tab_10);
        lineEdit_prenom_col->setObjectName(QStringLiteral("lineEdit_prenom_col"));
        lineEdit_prenom_col->setGeometry(QRect(160, 190, 231, 31));
        lineEdit_prenom_col->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"border:2px solid #000;"));
        quantite_7 = new QLabel(tab_10);
        quantite_7->setObjectName(QStringLiteral("quantite_7"));
        quantite_7->setGeometry(QRect(100, 250, 51, 20));
        quantite_7->setFont(font2);
        quantite_7->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_email_col = new QLineEdit(tab_10);
        lineEdit_email_col->setObjectName(QStringLiteral("lineEdit_email_col"));
        lineEdit_email_col->setGeometry(QRect(160, 240, 231, 31));
        lineEdit_email_col->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"border:2px solid #000;"));
        lineEdit_company_col = new QLineEdit(tab_10);
        lineEdit_company_col->setObjectName(QStringLiteral("lineEdit_company_col"));
        lineEdit_company_col->setGeometry(QRect(160, 290, 231, 31));
        lineEdit_company_col->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"border:2px solid #000;"));
        Gestion_marketing_3->addTab(tab_10, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        label_13 = new QLabel(tab_12);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 10, 211, 16));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        label_13->setFont(font3);
        label_13->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        label_15 = new QLabel(tab_12);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(460, 460, 121, 31));
        label_15->setFont(font3);
        label_15->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        radioButton_6 = new QRadioButton(tab_12);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(250, 10, 21, 20));
        radioButton_6->setStyleSheet(QLatin1String("QRadioButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        pb_supprimer_col = new QPushButton(tab_12);
        pb_supprimer_col->setObjectName(QStringLiteral("pb_supprimer_col"));
        pb_supprimer_col->setGeometry(QRect(130, 380, 131, 31));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        font4.setStrikeOut(false);
        pb_supprimer_col->setFont(font4);
        pb_supprimer_col->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"border-imdate:url(:/img/poubelle.png);\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"border-imdate:url(:/img/poubelle.png);\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        label_16 = new QLabel(tab_12);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 40, 341, 21));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setUnderline(true);
        font5.setWeight(75);
        label_16->setFont(font5);
        label_16->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        label_17 = new QLabel(tab_12);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(80, 350, 271, 21));
        label_17->setFont(font5);
        label_17->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        Collaborateur_affichage = new QTableView(tab_12);
        Collaborateur_affichage->setObjectName(QStringLiteral("Collaborateur_affichage"));
        Collaborateur_affichage->setGeometry(QRect(440, 80, 611, 361));
        Collaborateur_affichage->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        pb_modifier_col = new QPushButton(tab_12);
        pb_modifier_col->setObjectName(QStringLiteral("pb_modifier_col"));
        pb_modifier_col->setGeometry(QRect(270, 280, 131, 31));
        pb_modifier_col->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        recherche_Collaborateur = new QLineEdit(tab_12);
        recherche_Collaborateur->setObjectName(QStringLiteral("recherche_Collaborateur"));
        recherche_Collaborateur->setGeometry(QRect(580, 30, 191, 31));
        recherche_Collaborateur->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"\n"
"}"));
        comboBox_recherche_Collaborateur = new QComboBox(tab_12);
        comboBox_recherche_Collaborateur->setObjectName(QStringLiteral("comboBox_recherche_Collaborateur"));
        comboBox_recherche_Collaborateur->setGeometry(QRect(780, 30, 73, 22));
        comboBox_recherche_Collaborateur->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
""));
        tri_croissant_Collaborateur = new QPushButton(tab_12);
        tri_croissant_Collaborateur->setObjectName(QStringLiteral("tri_croissant_Collaborateur"));
        tri_croissant_Collaborateur->setGeometry(QRect(630, 460, 131, 28));
        tri_croissant_Collaborateur->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        tri_deccroissant_Collaborateur = new QPushButton(tab_12);
        tri_deccroissant_Collaborateur->setObjectName(QStringLiteral("tri_deccroissant_Collaborateur"));
        tri_deccroissant_Collaborateur->setGeometry(QRect(790, 460, 131, 28));
        tri_deccroissant_Collaborateur->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        quantite_8 = new QLabel(tab_12);
        quantite_8->setObjectName(QStringLiteral("quantite_8"));
        quantite_8->setGeometry(QRect(70, 200, 51, 20));
        quantite_8->setFont(font2);
        quantite_8->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_id_col_m = new QLineEdit(tab_12);
        lineEdit_id_col_m->setObjectName(QStringLiteral("lineEdit_id_col_m"));
        lineEdit_id_col_m->setGeometry(QRect(130, 70, 211, 31));
        lineEdit_id_col_m->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"border:2px solid #000;"));
        lineEdit_company_col_m = new QLineEdit(tab_12);
        lineEdit_company_col_m->setObjectName(QStringLiteral("lineEdit_company_col_m"));
        lineEdit_company_col_m->setGeometry(QRect(130, 230, 211, 31));
        lineEdit_company_col_m->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"border:2px solid #000;"));
        quantite_9 = new QLabel(tab_12);
        quantite_9->setObjectName(QStringLiteral("quantite_9"));
        quantite_9->setGeometry(QRect(50, 240, 81, 20));
        quantite_9->setFont(font2);
        quantite_9->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_prenom_col_m = new QLineEdit(tab_12);
        lineEdit_prenom_col_m->setObjectName(QStringLiteral("lineEdit_prenom_col_m"));
        lineEdit_prenom_col_m->setGeometry(QRect(130, 150, 211, 31));
        lineEdit_prenom_col_m->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"border:2px solid #000;"));
        reference_4 = new QLabel(tab_12);
        reference_4->setObjectName(QStringLiteral("reference_4"));
        reference_4->setGeometry(QRect(90, 120, 41, 20));
        reference_4->setFont(font2);
        reference_4->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        reference_10 = new QLabel(tab_12);
        reference_10->setObjectName(QStringLiteral("reference_10"));
        reference_10->setGeometry(QRect(80, 80, 41, 20));
        reference_10->setFont(font2);
        reference_10->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_nom_col_m = new QLineEdit(tab_12);
        lineEdit_nom_col_m->setObjectName(QStringLiteral("lineEdit_nom_col_m"));
        lineEdit_nom_col_m->setGeometry(QRect(130, 110, 211, 31));
        lineEdit_nom_col_m->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        lineEdit_email_col_m = new QLineEdit(tab_12);
        lineEdit_email_col_m->setObjectName(QStringLiteral("lineEdit_email_col_m"));
        lineEdit_email_col_m->setGeometry(QRect(130, 190, 211, 31));
        lineEdit_email_col_m->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"border:2px solid #000;"));
        quantite_10 = new QLabel(tab_12);
        quantite_10->setObjectName(QStringLiteral("quantite_10"));
        quantite_10->setGeometry(QRect(60, 160, 61, 20));
        quantite_10->setFont(font2);
        quantite_10->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        Gestion_marketing_3->addTab(tab_12, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        titre_2 = new QGroupBox(tab_2);
        titre_2->setObjectName(QStringLiteral("titre_2"));
        titre_2->setGeometry(QRect(0, 0, 1181, 661));
        titre_2->setFont(font);
        titre_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 40px;\n"
"background-color:  rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        Gestion_marketing_2 = new QTabWidget(titre_2);
        Gestion_marketing_2->setObjectName(QStringLiteral("Gestion_marketing_2"));
        Gestion_marketing_2->setGeometry(QRect(0, 40, 1171, 561));
        Gestion_marketing_2->setFont(font1);
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        reference_2 = new QLabel(tab_9);
        reference_2->setObjectName(QStringLiteral("reference_2"));
        reference_2->setGeometry(QRect(130, 200, 41, 21));
        reference_2->setFont(font2);
        reference_2->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        quantite_2 = new QLabel(tab_9);
        quantite_2->setObjectName(QStringLiteral("quantite_2"));
        quantite_2->setGeometry(QRect(130, 240, 31, 20));
        quantite_2->setFont(font2);
        quantite_2->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_nom = new QLineEdit(tab_9);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(170, 200, 241, 31));
        lineEdit_nom->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        pb_ajouter = new QPushButton(tab_9);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(360, 330, 161, 41));
        pb_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        quantite_4 = new QLabel(tab_9);
        quantite_4->setObjectName(QStringLiteral("quantite_4"));
        quantite_4->setGeometry(QRect(130, 290, 41, 20));
        quantite_4->setFont(font2);
        quantite_4->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_lieu = new QLineEdit(tab_9);
        lineEdit_lieu->setObjectName(QStringLiteral("lineEdit_lieu"));
        lineEdit_lieu->setGeometry(QRect(170, 280, 241, 31));
        lineEdit_lieu->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"border:2px solid #000;"));
        dateEdit_event = new QDateEdit(tab_9);
        dateEdit_event->setObjectName(QStringLiteral("dateEdit_event"));
        dateEdit_event->setGeometry(QRect(180, 240, 221, 31));
        Gestion_marketing_2->addTab(tab_9, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        label_9 = new QLabel(tab_11);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 201, 16));
        label_9->setFont(font3);
        label_9->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        radioButton_5 = new QRadioButton(tab_11);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(220, 10, 21, 20));
        radioButton_5->setStyleSheet(QLatin1String("QRadioButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}"));
        pb_supprimer = new QPushButton(tab_11);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(130, 410, 131, 31));
        pb_supprimer->setFont(font4);
        pb_supprimer->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"border-imdate:url(:/img/poubelle.png);\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"border-imdate:url(:/img/poubelle.png);\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        label_11 = new QLabel(tab_11);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 40, 431, 21));
        label_11->setFont(font5);
        label_11->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        label_12 = new QLabel(tab_11);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 370, 251, 21));
        label_12->setFont(font5);
        label_12->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        Evenement_affichage = new QTableView(tab_11);
        Evenement_affichage->setObjectName(QStringLiteral("Evenement_affichage"));
        Evenement_affichage->setGeometry(QRect(440, 80, 611, 361));
        Evenement_affichage->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        modifier_Evenement = new QPushButton(tab_11);
        modifier_Evenement->setObjectName(QStringLiteral("modifier_Evenement"));
        modifier_Evenement->setGeometry(QRect(290, 260, 111, 28));
        modifier_Evenement->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        recherche_Evenement = new QLineEdit(tab_11);
        recherche_Evenement->setObjectName(QStringLiteral("recherche_Evenement"));
        recherche_Evenement->setGeometry(QRect(770, 40, 201, 31));
        recherche_Evenement->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        comboBox_recherche_Evenement = new QComboBox(tab_11);
        comboBox_recherche_Evenement->setObjectName(QStringLiteral("comboBox_recherche_Evenement"));
        comboBox_recherche_Evenement->setGeometry(QRect(980, 40, 73, 22));
        label_18 = new QLabel(tab_11);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(430, 10, 101, 31));
        label_18->setFont(font3);
        label_18->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        tri_deccroissant_Evenement = new QPushButton(tab_11);
        tri_deccroissant_Evenement->setObjectName(QStringLiteral("tri_deccroissant_Evenement"));
        tri_deccroissant_Evenement->setGeometry(QRect(630, 40, 131, 28));
        tri_deccroissant_Evenement->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        tri_croissant_Evenement = new QPushButton(tab_11);
        tri_croissant_Evenement->setObjectName(QStringLiteral("tri_croissant_Evenement"));
        tri_croissant_Evenement->setGeometry(QRect(470, 40, 131, 28));
        tri_croissant_Evenement->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        pdf_Evenement = new QPushButton(tab_11);
        pdf_Evenement->setObjectName(QStringLiteral("pdf_Evenement"));
        pdf_Evenement->setGeometry(QRect(970, 440, 81, 28));
        pdf_Evenement->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        quantite_11 = new QLabel(tab_11);
        quantite_11->setObjectName(QStringLiteral("quantite_11"));
        quantite_11->setGeometry(QRect(30, 220, 51, 20));
        quantite_11->setFont(font2);
        quantite_11->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        reference_5 = new QLabel(tab_11);
        reference_5->setObjectName(QStringLiteral("reference_5"));
        reference_5->setGeometry(QRect(20, 140, 51, 20));
        reference_5->setFont(font2);
        reference_5->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_nom_m = new QLineEdit(tab_11);
        lineEdit_nom_m->setObjectName(QStringLiteral("lineEdit_nom_m"));
        lineEdit_nom_m->setGeometry(QRect(80, 140, 241, 31));
        lineEdit_nom_m->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        lineEdit_lieu_m = new QLineEdit(tab_11);
        lineEdit_lieu_m->setObjectName(QStringLiteral("lineEdit_lieu_m"));
        lineEdit_lieu_m->setGeometry(QRect(80, 220, 241, 31));
        lineEdit_lieu_m->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"border:2px solid #000;"));
        quantite_3 = new QLabel(tab_11);
        quantite_3->setObjectName(QStringLiteral("quantite_3"));
        quantite_3->setGeometry(QRect(40, 180, 41, 20));
        quantite_3->setFont(font2);
        quantite_3->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_id_m = new QLineEdit(tab_11);
        lineEdit_id_m->setObjectName(QStringLiteral("lineEdit_id_m"));
        lineEdit_id_m->setGeometry(QRect(80, 90, 241, 31));
        lineEdit_id_m->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        reference_6 = new QLabel(tab_11);
        reference_6->setObjectName(QStringLiteral("reference_6"));
        reference_6->setGeometry(QRect(30, 90, 41, 20));
        reference_6->setFont(font2);
        reference_6->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        dateEdit_event_m = new QDateEdit(tab_11);
        dateEdit_event_m->setObjectName(QStringLiteral("dateEdit_event_m"));
        dateEdit_event_m->setGeometry(QRect(90, 180, 221, 31));
        comboBox_affecter = new QComboBox(tab_11);
        comboBox_affecter->setObjectName(QStringLiteral("comboBox_affecter"));
        comboBox_affecter->setGeometry(QRect(440, 450, 181, 31));
        affecter = new QPushButton(tab_11);
        affecter->setObjectName(QStringLiteral("affecter"));
        affecter->setGeometry(QRect(630, 450, 111, 21));
        affecter->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        Gestion_marketing_2->addTab(tab_11, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        msg = new QPlainTextEdit(tab_14);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(270, 82, 393, 351));
        msg->setStyleSheet(QLatin1String("\n"
"background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        subject = new QLineEdit(tab_14);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(270, 51, 393, 22));
        subject->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(255, 255, 255);\n"
"border:2px solid #000;\n"
"}"));
        send_mail = new QPushButton(tab_14);
        send_mail->setObjectName(QStringLiteral("send_mail"));
        send_mail->setGeometry(QRect(540, 440, 121, 28));
        send_mail->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        nom_4 = new QLabel(tab_14);
        nom_4->setObjectName(QStringLiteral("nom_4"));
        nom_4->setGeometry(QRect(240, 20, 16, 18));
        nom_4->setFont(font2);
        nom_4->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        nom_6 = new QLabel(tab_14);
        nom_6->setObjectName(QStringLiteral("nom_6"));
        nom_6->setGeometry(QRect(210, 50, 51, 18));
        nom_6->setFont(font2);
        nom_6->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        nom_7 = new QLabel(tab_14);
        nom_7->setObjectName(QStringLiteral("nom_7"));
        nom_7->setGeometry(QRect(190, 100, 71, 16));
        nom_7->setFont(font2);
        nom_7->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        combobox_email = new QComboBox(tab_14);
        combobox_email->setObjectName(QStringLiteral("combobox_email"));
        combobox_email->setGeometry(QRect(280, 20, 381, 22));
        Gestion_marketing_2->addTab(tab_14, QString());
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pb_supprimer_affectation = new QPushButton(tab_3);
        pb_supprimer_affectation->setObjectName(QStringLiteral("pb_supprimer_affectation"));
        pb_supprimer_affectation->setGeometry(QRect(440, 450, 131, 21));
        pb_supprimer_affectation->setFont(font4);
        pb_supprimer_affectation->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"border-imdate:url(:/img/poubelle.png);\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"border-imdate:url(:/img/poubelle.png);\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        affectation_affichage = new QTableView(tab_3);
        affectation_affichage->setObjectName(QStringLiteral("affectation_affichage"));
        affectation_affichage->setGeometry(QRect(10, 80, 571, 361));
        affectation_affichage->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        pdf_affectation = new QPushButton(tab_3);
        pdf_affectation->setObjectName(QStringLiteral("pdf_affectation"));
        pdf_affectation->setGeometry(QRect(20, 450, 81, 28));
        pdf_affectation->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(110, 10, 101, 31));
        label_19->setFont(font3);
        label_19->setStyleSheet(QLatin1String("background-image: url(:/images/Empty.png);\n"
"color: rgb(255, 255, 255);"));
        comboBox_recherche_affectation = new QComboBox(tab_3);
        comboBox_recherche_affectation->setObjectName(QStringLiteral("comboBox_recherche_affectation"));
        comboBox_recherche_affectation->setGeometry(QRect(660, 40, 73, 22));
        recherche_affectation = new QLineEdit(tab_3);
        recherche_affectation->setObjectName(QStringLiteral("recherche_affectation"));
        recherche_affectation->setGeometry(QRect(450, 40, 201, 31));
        recherche_affectation->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        tri_croissant_affectation = new QPushButton(tab_3);
        tri_croissant_affectation->setObjectName(QStringLiteral("tri_croissant_affectation"));
        tri_croissant_affectation->setGeometry(QRect(150, 40, 131, 21));
        tri_croissant_affectation->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        tri_deccroissant_affectation = new QPushButton(tab_3);
        tri_deccroissant_affectation->setObjectName(QStringLiteral("tri_deccroissant_affectation"));
        tri_deccroissant_affectation->setGeometry(QRect(310, 40, 131, 21));
        tri_deccroissant_affectation->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"background-color: rgb(143, 143, 143);\n"
"border:2px solid #000;\n"
"}\n"
"QPushButton {\n"
"     color: #fff !important;\n"
"text-transform: uppercase;\n"
"text-decoration: none;\n"
"background: #B22222;\n"
"padding: 20px;\n"
"border-radius: 5px;\n"
"display: inline-block;\n"
"border: none;\n"
"transition: all 0.4s ease 0s;\n"
" }\n"
" QPushButton:hover {\n"
"     background: #434343;\n"
"letter-spacing: 1px;\n"
"-webkit-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"-moz-box-shadow: 0px 5px 40px -10px rgba(0,0,0,0.57);\n"
"box-shadow: 5px 40px -10px rgba(0,0,0,0.57);\n"
"transition: all 0.4s ease 0s;\n"
" }"));
        tabWidget->addTab(tab_3, QString());
        Evenement_Collaborateur->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Evenement_Collaborateur);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1173, 26));
        Evenement_Collaborateur->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Evenement_Collaborateur);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Evenement_Collaborateur->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Evenement_Collaborateur);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Evenement_Collaborateur->setStatusBar(statusBar);

        retranslateUi(Evenement_Collaborateur);

        tabWidget->setCurrentIndex(1);
        Gestion_marketing_3->setCurrentIndex(1);
        Gestion_marketing_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Evenement_Collaborateur);
    } // setupUi

    void retranslateUi(QMainWindow *Evenement_Collaborateur)
    {
        Evenement_Collaborateur->setWindowTitle(QApplication::translate("Evenement_Collaborateur", "Gestion des Evenements et Collaborateurs ", Q_NULLPTR));
        titre_3->setTitle(QApplication::translate("Evenement_Collaborateur", "                                               GESTION DES COLLABORATEURS:", Q_NULLPTR));
        reference_3->setText(QApplication::translate("Evenement_Collaborateur", "Nom", Q_NULLPTR));
        quantite_5->setText(QApplication::translate("Evenement_Collaborateur", "Prenom", Q_NULLPTR));
        pb_ajouter_col->setText(QApplication::translate("Evenement_Collaborateur", "Ajouter", Q_NULLPTR));
        quantite_6->setText(QApplication::translate("Evenement_Collaborateur", "Company", Q_NULLPTR));
        quantite_7->setText(QApplication::translate("Evenement_Collaborateur", "Email", Q_NULLPTR));
        Gestion_marketing_3->setTabText(Gestion_marketing_3->indexOf(tab_10), QApplication::translate("Evenement_Collaborateur", "Ajouter un Collaborateur", Q_NULLPTR));
        label_13->setText(QApplication::translate("Evenement_Collaborateur", "Afficher tous les Collaborateurs", Q_NULLPTR));
        label_15->setText(QApplication::translate("Evenement_Collaborateur", "Tri selon Code:", Q_NULLPTR));
        radioButton_6->setText(QString());
        pb_supprimer_col->setText(QApplication::translate("Evenement_Collaborateur", "supprimer", Q_NULLPTR));
        label_16->setText(QApplication::translate("Evenement_Collaborateur", "Saisir les informations du Collaborateur", Q_NULLPTR));
        label_17->setText(QApplication::translate("Evenement_Collaborateur", "Supprimer un Collaborateur:", Q_NULLPTR));
        pb_modifier_col->setText(QApplication::translate("Evenement_Collaborateur", "Modifier", Q_NULLPTR));
        recherche_Collaborateur->setText(QString());
        comboBox_recherche_Collaborateur->clear();
        comboBox_recherche_Collaborateur->insertItems(0, QStringList()
         << QApplication::translate("Evenement_Collaborateur", "CODE", Q_NULLPTR)
         << QApplication::translate("Evenement_Collaborateur", "NOM", Q_NULLPTR)
         << QApplication::translate("Evenement_Collaborateur", "PRENOM", Q_NULLPTR)
         << QApplication::translate("Evenement_Collaborateur", "EMAIL", Q_NULLPTR)
        );
        tri_croissant_Collaborateur->setText(QApplication::translate("Evenement_Collaborateur", "Croissant", Q_NULLPTR));
        tri_deccroissant_Collaborateur->setText(QApplication::translate("Evenement_Collaborateur", "decroissant", Q_NULLPTR));
        quantite_8->setText(QApplication::translate("Evenement_Collaborateur", "Email", Q_NULLPTR));
        quantite_9->setText(QApplication::translate("Evenement_Collaborateur", "Company", Q_NULLPTR));
        reference_4->setText(QApplication::translate("Evenement_Collaborateur", "Nom", Q_NULLPTR));
        reference_10->setText(QApplication::translate("Evenement_Collaborateur", "Code", Q_NULLPTR));
        quantite_10->setText(QApplication::translate("Evenement_Collaborateur", "Prenom", Q_NULLPTR));
        Gestion_marketing_3->setTabText(Gestion_marketing_3->indexOf(tab_12), QApplication::translate("Evenement_Collaborateur", "Consulter un Collaborateur", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Evenement_Collaborateur", "Gestions Collaborateurs", Q_NULLPTR));
        titre_2->setTitle(QApplication::translate("Evenement_Collaborateur", "                                               GESTION DES EVENEMENTS:", Q_NULLPTR));
        reference_2->setText(QApplication::translate("Evenement_Collaborateur", "nom", Q_NULLPTR));
        quantite_2->setText(QApplication::translate("Evenement_Collaborateur", "date", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("Evenement_Collaborateur", "Ajouter", Q_NULLPTR));
        quantite_4->setText(QApplication::translate("Evenement_Collaborateur", "lieu", Q_NULLPTR));
        Gestion_marketing_2->setTabText(Gestion_marketing_2->indexOf(tab_9), QApplication::translate("Evenement_Collaborateur", "Ajouter un evenement", Q_NULLPTR));
        label_9->setText(QApplication::translate("Evenement_Collaborateur", "Afficher tous les Evenements", Q_NULLPTR));
        radioButton_5->setText(QString());
        pb_supprimer->setText(QApplication::translate("Evenement_Collaborateur", "supprimer", Q_NULLPTR));
        label_11->setText(QApplication::translate("Evenement_Collaborateur", "Saisir les informations du Evenements a modifier:", Q_NULLPTR));
        label_12->setText(QApplication::translate("Evenement_Collaborateur", "Supprimer un evenement:", Q_NULLPTR));
        modifier_Evenement->setText(QApplication::translate("Evenement_Collaborateur", "Modifier", Q_NULLPTR));
        comboBox_recherche_Evenement->clear();
        comboBox_recherche_Evenement->insertItems(0, QStringList()
         << QApplication::translate("Evenement_Collaborateur", "CODE", Q_NULLPTR)
         << QApplication::translate("Evenement_Collaborateur", "NOM", Q_NULLPTR)
         << QApplication::translate("Evenement_Collaborateur", "LIEU", Q_NULLPTR)
        );
        label_18->setText(QApplication::translate("Evenement_Collaborateur", "Tri selon date:", Q_NULLPTR));
        tri_deccroissant_Evenement->setText(QApplication::translate("Evenement_Collaborateur", "decroissant", Q_NULLPTR));
        tri_croissant_Evenement->setText(QApplication::translate("Evenement_Collaborateur", "Croissant", Q_NULLPTR));
        pdf_Evenement->setText(QApplication::translate("Evenement_Collaborateur", "PDF", Q_NULLPTR));
        quantite_11->setText(QApplication::translate("Evenement_Collaborateur", "lieu", Q_NULLPTR));
        reference_5->setText(QApplication::translate("Evenement_Collaborateur", "nom", Q_NULLPTR));
        quantite_3->setText(QApplication::translate("Evenement_Collaborateur", "date", Q_NULLPTR));
        lineEdit_id_m->setText(QString());
        reference_6->setText(QApplication::translate("Evenement_Collaborateur", "Code", Q_NULLPTR));
        affecter->setText(QApplication::translate("Evenement_Collaborateur", "Affecter", Q_NULLPTR));
        Gestion_marketing_2->setTabText(Gestion_marketing_2->indexOf(tab_11), QApplication::translate("Evenement_Collaborateur", "Consulter un evenement", Q_NULLPTR));
        send_mail->setText(QApplication::translate("Evenement_Collaborateur", "Envoyer", Q_NULLPTR));
        nom_4->setText(QApplication::translate("Evenement_Collaborateur", "A", Q_NULLPTR));
        nom_6->setText(QApplication::translate("Evenement_Collaborateur", "Objet", Q_NULLPTR));
        nom_7->setText(QApplication::translate("Evenement_Collaborateur", "Message", Q_NULLPTR));
        Gestion_marketing_2->setTabText(Gestion_marketing_2->indexOf(tab_14), QApplication::translate("Evenement_Collaborateur", "Envoyez des e-mails", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Evenement_Collaborateur", "Gestions Evenements", Q_NULLPTR));
        pb_supprimer_affectation->setText(QApplication::translate("Evenement_Collaborateur", "supprimer", Q_NULLPTR));
        pdf_affectation->setText(QApplication::translate("Evenement_Collaborateur", "PDF", Q_NULLPTR));
        label_19->setText(QApplication::translate("Evenement_Collaborateur", "Tri selon code:", Q_NULLPTR));
        comboBox_recherche_affectation->clear();
        comboBox_recherche_affectation->insertItems(0, QStringList()
         << QApplication::translate("Evenement_Collaborateur", "CODE", Q_NULLPTR)
         << QApplication::translate("Evenement_Collaborateur", "NOM_EVENT", Q_NULLPTR)
         << QApplication::translate("Evenement_Collaborateur", "NOM_COL", Q_NULLPTR)
        );
        tri_croissant_affectation->setText(QApplication::translate("Evenement_Collaborateur", "Croissant", Q_NULLPTR));
        tri_deccroissant_affectation->setText(QApplication::translate("Evenement_Collaborateur", "decroissant", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Evenement_Collaborateur", "Affectation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Evenement_Collaborateur: public Ui_Evenement_Collaborateur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENEMENT_COLLABORATEUR_H
