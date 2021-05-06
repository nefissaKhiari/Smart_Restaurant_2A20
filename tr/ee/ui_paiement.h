/********************************************************************************
** Form generated from reading UI file 'paiement.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAIEMENT_H
#define UI_PAIEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paiement
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *ajoutid;
    QLineEdit *ajoutdate;
    QLineEdit *ajoutmontant;
    QPushButton *Boutonajouter;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *mod1;
    QLineEdit *mod2;
    QLineEdit *mod3;
    QPushButton *pushButton_7;
    QGroupBox *groupBox_3;
    QLabel *label_4;
    QLineEdit *delete_2;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_4;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_9;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *cher1;
    QLineEdit *che2;
    QLineEdit *che3;
    QPushButton *recherche;
    QGroupBox *groupBox_10;
    QPushButton *pushButton_8;
    QTextEdit *textEdit;
    QPushButton *imprimerbt;
    QLabel *image;
    QLabel *digitalclock_2;
    QLabel *date_2;
    QPushButton *pushButton_9;
    QLabel *text1;
    QLabel *textf;
    QPushButton *pushButton_4;
    QLabel *imm;
    QWidget *tab_2;
    QTableView *tableView_2;
    QGroupBox *groupBox_5;
    QLabel *l1;
    QLabel *l2;
    QLabel *l3;
    QLineEdit *ref;
    QLineEdit *mont;
    QLineEdit *datec;
    QLabel *label_23;
    QLineEdit *nom_p;
    QPushButton *Boutonajouter_2;
    QGroupBox *groupBox_6;
    QLabel *l5;
    QLabel *l4;
    QLabel *l7;
    QLineEdit *modc_2;
    QLineEdit *modc_1;
    QLineEdit *modc_3;
    QPushButton *modif;
    QLabel *l8;
    QLineEdit *mod_c4;
    QGroupBox *groupBox_7;
    QLabel *l9;
    QLineEdit *delete_r;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_8;
    QComboBox *comboBox_2;
    QPushButton *pushButton_6;
    QPushButton *imprimerbt_2;
    QLabel *image22;
    QLabel *date;
    QLabel *digitalclock;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;

    void setupUi(QDialog *paiement)
    {
        if (paiement->objectName().isEmpty())
            paiement->setObjectName(QStringLiteral("paiement"));
        paiement->resize(1112, 890);
        tabWidget = new QTabWidget(paiement);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 60, 1101, 921));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 170, 591, 391));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(610, 120, 451, 181));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 141, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 141, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 110, 141, 41));
        ajoutid = new QLineEdit(groupBox);
        ajoutid->setObjectName(QStringLiteral("ajoutid"));
        ajoutid->setGeometry(QRect(90, 40, 301, 22));
        ajoutdate = new QLineEdit(groupBox);
        ajoutdate->setObjectName(QStringLiteral("ajoutdate"));
        ajoutdate->setGeometry(QRect(90, 80, 301, 22));
        ajoutmontant = new QLineEdit(groupBox);
        ajoutmontant->setObjectName(QStringLiteral("ajoutmontant"));
        ajoutmontant->setGeometry(QRect(90, 120, 301, 22));
        Boutonajouter = new QPushButton(groupBox);
        Boutonajouter->setObjectName(QStringLiteral("Boutonajouter"));
        Boutonajouter->setGeometry(QRect(200, 150, 93, 28));
        Boutonajouter->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba((170, 85, 255);), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(610, 310, 451, 161));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 70, 141, 41));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 141, 41));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 110, 141, 41));
        mod1 = new QLineEdit(groupBox_2);
        mod1->setObjectName(QStringLiteral("mod1"));
        mod1->setGeometry(QRect(90, 80, 301, 22));
        mod2 = new QLineEdit(groupBox_2);
        mod2->setObjectName(QStringLiteral("mod2"));
        mod2->setGeometry(QRect(90, 40, 301, 22));
        mod3 = new QLineEdit(groupBox_2);
        mod3->setObjectName(QStringLiteral("mod3"));
        mod3->setGeometry(QRect(90, 120, 301, 22));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(200, 10, 93, 28));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba((170, 85, 255);), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(610, 480, 451, 111));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 40, 141, 41));
        delete_2 = new QLineEdit(groupBox_3);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        delete_2->setGeometry(QRect(90, 50, 301, 22));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 80, 93, 28));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba((170, 85, 255);), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(300, 610, 201, 121));
        comboBox = new QComboBox(groupBox_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 181, 22));
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 70, 51, 41));
        pushButton_3->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/LENOVO/Desktop/tr/valide.png);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"\n"
"}\n"
""));
        groupBox_9 = new QGroupBox(tab);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(530, 610, 221, 151));
        label_15 = new QLabel(groupBox_9);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 30, 141, 41));
        label_16 = new QLabel(groupBox_9);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 70, 141, 41));
        label_17 = new QLabel(groupBox_9);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 110, 141, 41));
        cher1 = new QLineEdit(groupBox_9);
        cher1->setObjectName(QStringLiteral("cher1"));
        cher1->setGeometry(QRect(90, 40, 111, 22));
        che2 = new QLineEdit(groupBox_9);
        che2->setObjectName(QStringLiteral("che2"));
        che2->setGeometry(QRect(90, 80, 111, 22));
        che3 = new QLineEdit(groupBox_9);
        che3->setObjectName(QStringLiteral("che3"));
        che3->setGeometry(QRect(90, 120, 111, 22));
        recherche = new QPushButton(groupBox_9);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(140, 150, 61, 28));
        groupBox_10 = new QGroupBox(tab);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(0, 610, 291, 151));
        pushButton_8 = new QPushButton(groupBox_10);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(200, 80, 81, 28));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba((170, 85, 255);), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        textEdit = new QTextEdit(groupBox_10);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 40, 181, 71));
        imprimerbt = new QPushButton(tab);
        imprimerbt->setObjectName(QStringLiteral("imprimerbt"));
        imprimerbt->setGeometry(QRect(332, 127, 61, 31));
        imprimerbt->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/LENOVO/Desktop/tr/imp.jpg);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"\n"
"}\n"
""));
        image = new QLabel(tab);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(-40, -180, 1211, 1091));
        image->setScaledContents(true);
        digitalclock_2 = new QLabel(tab);
        digitalclock_2->setObjectName(QStringLiteral("digitalclock_2"));
        digitalclock_2->setGeometry(QRect(800, 590, 251, 51));
        date_2 = new QLabel(tab);
        date_2->setObjectName(QStringLiteral("date_2"));
        date_2->setGeometry(QRect(790, 620, 164, 31));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(630, 760, 61, 31));
        pushButton_9->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/LENOVO/Desktop/tr/rech.jfif);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"\n"
"}\n"
""));
        text1 = new QLabel(tab);
        text1->setObjectName(QStringLiteral("text1"));
        text1->setGeometry(QRect(10, 710, 291, 61));
        text1->setStyleSheet(QLatin1String("\n"
"font: 18pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"color: rgb(170, 0, 0);"));
        textf = new QLabel(tab);
        textf->setObjectName(QStringLiteral("textf"));
        textf->setGeometry(QRect(250, 20, 661, 91));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        textf->setFont(font);
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 130, 93, 28));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba((170, 85, 255);), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        imm = new QLabel(tab);
        imm->setObjectName(QStringLiteral("imm"));
        imm->setGeometry(QRect(-10, -80, 1151, 881));
        tabWidget->addTab(tab, QString());
        imm->raise();
        image->raise();
        tableView->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        groupBox_9->raise();
        groupBox_10->raise();
        imprimerbt->raise();
        digitalclock_2->raise();
        date_2->raise();
        pushButton_9->raise();
        text1->raise();
        textf->raise();
        pushButton_4->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(0, 60, 601, 471));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(620, 30, 461, 221));
        l1 = new QLabel(groupBox_5);
        l1->setObjectName(QStringLiteral("l1"));
        l1->setGeometry(QRect(10, 30, 141, 41));
        l2 = new QLabel(groupBox_5);
        l2->setObjectName(QStringLiteral("l2"));
        l2->setGeometry(QRect(10, 70, 141, 41));
        l3 = new QLabel(groupBox_5);
        l3->setObjectName(QStringLiteral("l3"));
        l3->setGeometry(QRect(10, 110, 141, 41));
        ref = new QLineEdit(groupBox_5);
        ref->setObjectName(QStringLiteral("ref"));
        ref->setGeometry(QRect(90, 40, 351, 22));
        mont = new QLineEdit(groupBox_5);
        mont->setObjectName(QStringLiteral("mont"));
        mont->setGeometry(QRect(90, 80, 351, 22));
        datec = new QLineEdit(groupBox_5);
        datec->setObjectName(QStringLiteral("datec"));
        datec->setGeometry(QRect(90, 120, 351, 22));
        label_23 = new QLabel(groupBox_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 150, 141, 41));
        nom_p = new QLineEdit(groupBox_5);
        nom_p->setObjectName(QStringLiteral("nom_p"));
        nom_p->setGeometry(QRect(90, 160, 351, 22));
        Boutonajouter_2 = new QPushButton(groupBox_5);
        Boutonajouter_2->setObjectName(QStringLiteral("Boutonajouter_2"));
        Boutonajouter_2->setGeometry(QRect(340, 190, 93, 28));
        Boutonajouter_2->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba((170, 85, 255);), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(620, 260, 461, 201));
        l5 = new QLabel(groupBox_6);
        l5->setObjectName(QStringLiteral("l5"));
        l5->setGeometry(QRect(10, 70, 141, 41));
        l4 = new QLabel(groupBox_6);
        l4->setObjectName(QStringLiteral("l4"));
        l4->setGeometry(QRect(10, 30, 141, 41));
        l7 = new QLabel(groupBox_6);
        l7->setObjectName(QStringLiteral("l7"));
        l7->setGeometry(QRect(10, 110, 141, 41));
        modc_2 = new QLineEdit(groupBox_6);
        modc_2->setObjectName(QStringLiteral("modc_2"));
        modc_2->setGeometry(QRect(90, 80, 351, 22));
        modc_1 = new QLineEdit(groupBox_6);
        modc_1->setObjectName(QStringLiteral("modc_1"));
        modc_1->setGeometry(QRect(90, 40, 351, 22));
        modc_3 = new QLineEdit(groupBox_6);
        modc_3->setObjectName(QStringLiteral("modc_3"));
        modc_3->setGeometry(QRect(90, 120, 351, 22));
        modif = new QPushButton(groupBox_6);
        modif->setObjectName(QStringLiteral("modif"));
        modif->setGeometry(QRect(280, 10, 93, 28));
        modif->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba((170, 85, 255);), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        l8 = new QLabel(groupBox_6);
        l8->setObjectName(QStringLiteral("l8"));
        l8->setGeometry(QRect(10, 150, 141, 41));
        mod_c4 = new QLineEdit(groupBox_6);
        mod_c4->setObjectName(QStringLiteral("mod_c4"));
        mod_c4->setGeometry(QRect(90, 160, 351, 22));
        groupBox_7 = new QGroupBox(tab_2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(620, 480, 461, 121));
        l9 = new QLabel(groupBox_7);
        l9->setObjectName(QStringLiteral("l9"));
        l9->setGeometry(QRect(0, 40, 141, 41));
        delete_r = new QLineEdit(groupBox_7);
        delete_r->setObjectName(QStringLiteral("delete_r"));
        delete_r->setGeometry(QRect(90, 50, 351, 22));
        pushButton_5 = new QPushButton(groupBox_7);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 80, 93, 28));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba((170, 85, 255);), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        groupBox_8 = new QGroupBox(tab_2);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 560, 201, 111));
        comboBox_2 = new QComboBox(groupBox_8);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 30, 181, 22));
        pushButton_6 = new QPushButton(groupBox_8);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(110, 60, 51, 41));
        pushButton_6->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/LENOVO/Desktop/tr/valide.png);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"\n"
"}\n"
""));
        imprimerbt_2 = new QPushButton(tab_2);
        imprimerbt_2->setObjectName(QStringLiteral("imprimerbt_2"));
        imprimerbt_2->setGeometry(QRect(430, 17, 51, 41));
        imprimerbt_2->setStyleSheet(QLatin1String("*{\n"
"\n"
"\n"
"background-color: transparent;\n"
"border-image: url(C:/Users/LENOVO/Desktop/tr/imp.jpg);\n"
"\n"
"}\n"
"\n"
"*:hover\n"
"{\n"
"\n"
"background-color: transparent;\n"
"\n"
"\n"
"}\n"
""));
        image22 = new QLabel(tab_2);
        image22->setObjectName(QStringLiteral("image22"));
        image22->setGeometry(QRect(-30, -130, 1211, 851));
        image22->setScaledContents(true);
        date = new QLabel(tab_2);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(790, 620, 164, 31));
        digitalclock = new QLabel(tab_2);
        digitalclock->setObjectName(QStringLiteral("digitalclock"));
        digitalclock->setGeometry(QRect(800, 590, 251, 51));
        pushButton_10 = new QPushButton(tab_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(510, 30, 93, 28));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba((170, 85, 255);), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        pushButton_12 = new QPushButton(tab_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(900, 10, 91, 28));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba((170, 85, 255);), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        pushButton_13 = new QPushButton(tab_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(1000, 10, 93, 28));
        pushButton_13->setStyleSheet(QLatin1String("QPushButton\n"
"\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba((170, 85, 255);), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        tabWidget->addTab(tab_2, QString());
        image22->raise();
        tableView_2->raise();
        groupBox_5->raise();
        groupBox_6->raise();
        groupBox_7->raise();
        groupBox_8->raise();
        imprimerbt_2->raise();
        date->raise();
        digitalclock->raise();
        pushButton_10->raise();
        pushButton_12->raise();
        pushButton_13->raise();

        retranslateUi(paiement);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(paiement);
    } // setupUi

    void retranslateUi(QDialog *paiement)
    {
        paiement->setWindowTitle(QApplication::translate("paiement", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("paiement", "Ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("paiement", "Identifiant", Q_NULLPTR));
        label_2->setText(QApplication::translate("paiement", "Montant", Q_NULLPTR));
        label_3->setText(QApplication::translate("paiement", "Date", Q_NULLPTR));
        Boutonajouter->setText(QApplication::translate("paiement", "Ajouter", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("paiement", "Modifier ", Q_NULLPTR));
        label_5->setText(QApplication::translate("paiement", "Montant", Q_NULLPTR));
        label_6->setText(QApplication::translate("paiement", "Identifiant", Q_NULLPTR));
        label_7->setText(QApplication::translate("paiement", "Date", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("paiement", "appliquer", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("paiement", "Supprimer", Q_NULLPTR));
        label_4->setText(QApplication::translate("paiement", "Identifiant", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("paiement", "supprimer", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("paiement", "tri", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("paiement", "TRIER PAR ", Q_NULLPTR)
         << QApplication::translate("paiement", "IDENTIFIANT", Q_NULLPTR)
         << QApplication::translate("paiement", "DATE_F", Q_NULLPTR)
         << QApplication::translate("paiement", "MONTANT", Q_NULLPTR)
        );
        pushButton_3->setText(QString());
        groupBox_9->setTitle(QApplication::translate("paiement", "Recherche ", Q_NULLPTR));
        label_15->setText(QApplication::translate("paiement", "Identifiant", Q_NULLPTR));
        label_16->setText(QApplication::translate("paiement", "Montant", Q_NULLPTR));
        label_17->setText(QApplication::translate("paiement", "Date", Q_NULLPTR));
        recherche->setText(QApplication::translate("paiement", "ok", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("paiement", "Remarques", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("paiement", "Enregistrer ", Q_NULLPTR));
        imprimerbt->setText(QString());
        image->setText(QApplication::translate("paiement", "TextLabel", Q_NULLPTR));
        digitalclock_2->setText(QString());
        date_2->setText(QString());
        pushButton_9->setText(QString());
        text1->setText(QApplication::translate("paiement", "NB : cette zone est reserv\303\251 au administrateur ", Q_NULLPTR));
        textf->setText(QApplication::translate("paiement", "Gestion Des Factures", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("paiement", "Afficher", Q_NULLPTR));
        imm->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("paiement", "FACTURES", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("paiement", "Ajouter", Q_NULLPTR));
        l1->setText(QApplication::translate("paiement", "R\303\251ferance", Q_NULLPTR));
        l2->setText(QApplication::translate("paiement", "Montant", Q_NULLPTR));
        l3->setText(QApplication::translate("paiement", "Date", Q_NULLPTR));
        label_23->setText(QApplication::translate("paiement", "Nom Plat", Q_NULLPTR));
        Boutonajouter_2->setText(QApplication::translate("paiement", "Ajouter", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("paiement", "Modifier ", Q_NULLPTR));
        l5->setText(QApplication::translate("paiement", "Montant", Q_NULLPTR));
        l4->setText(QApplication::translate("paiement", "R\303\251ferance", Q_NULLPTR));
        l7->setText(QApplication::translate("paiement", "Date", Q_NULLPTR));
        modif->setText(QApplication::translate("paiement", "appliquer", Q_NULLPTR));
        l8->setText(QApplication::translate("paiement", "Nom Plat", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("paiement", "Supprimer", Q_NULLPTR));
        l9->setText(QApplication::translate("paiement", "R\303\251ferance", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("paiement", "supprimer", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("paiement", "tri", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("paiement", "TRIER PAR ", Q_NULLPTR)
         << QApplication::translate("paiement", "REFERENCE", Q_NULLPTR)
         << QApplication::translate("paiement", "DATE", Q_NULLPTR)
         << QApplication::translate("paiement", "NOM", Q_NULLPTR)
         << QApplication::translate("paiement", "MONTANT", Q_NULLPTR)
        );
        pushButton_6->setText(QString());
        imprimerbt_2->setText(QString());
        image22->setText(QApplication::translate("paiement", "TextLabel", Q_NULLPTR));
        date->setText(QString());
        digitalclock->setText(QString());
        pushButton_10->setText(QApplication::translate("paiement", "Afficher", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("paiement", "FR", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("paiement", "ANG", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("paiement", "COMMANDES", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class paiement: public Ui_paiement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAIEMENT_H
