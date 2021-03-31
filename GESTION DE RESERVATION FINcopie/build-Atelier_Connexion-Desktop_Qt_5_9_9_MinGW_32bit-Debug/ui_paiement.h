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
    QLineEdit *ajoutdate2;
    QLineEdit *ajoutype;
    QLabel *label_8;
    QLabel *label_9;
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
    QPushButton *pushButton;
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
    QLabel *imaage;
    QWidget *tab_2;

    void setupUi(QDialog *paiement)
    {
        if (paiement->objectName().isEmpty())
            paiement->setObjectName(QStringLiteral("paiement"));
        paiement->resize(1109, 747);
        tabWidget = new QTabWidget(paiement);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 40, 1101, 751));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 50, 601, 471));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(610, 0, 481, 221));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 141, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 141, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 141, 41));
        ajoutid = new QLineEdit(groupBox);
        ajoutid->setObjectName(QStringLiteral("ajoutid"));
        ajoutid->setGeometry(QRect(90, 50, 351, 22));
        ajoutdate = new QLineEdit(groupBox);
        ajoutdate->setObjectName(QStringLiteral("ajoutdate"));
        ajoutdate->setGeometry(QRect(90, 80, 351, 22));
        ajoutmontant = new QLineEdit(groupBox);
        ajoutmontant->setObjectName(QStringLiteral("ajoutmontant"));
        ajoutmontant->setGeometry(QRect(90, 110, 351, 22));
        Boutonajouter = new QPushButton(groupBox);
        Boutonajouter->setObjectName(QStringLiteral("Boutonajouter"));
        Boutonajouter->setGeometry(QRect(360, 0, 93, 28));
        ajoutdate2 = new QLineEdit(groupBox);
        ajoutdate2->setObjectName(QStringLiteral("ajoutdate2"));
        ajoutdate2->setGeometry(QRect(90, 140, 351, 22));
        ajoutype = new QLineEdit(groupBox);
        ajoutype->setObjectName(QStringLiteral("ajoutype"));
        ajoutype->setGeometry(QRect(90, 170, 351, 22));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 130, 141, 41));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 160, 141, 41));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(610, 220, 451, 151));
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
        mod1->setGeometry(QRect(90, 80, 351, 22));
        mod2 = new QLineEdit(groupBox_2);
        mod2->setObjectName(QStringLiteral("mod2"));
        mod2->setGeometry(QRect(90, 40, 351, 22));
        mod3 = new QLineEdit(groupBox_2);
        mod3->setObjectName(QStringLiteral("mod3"));
        mod3->setGeometry(QRect(90, 120, 351, 22));
        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(350, 0, 93, 28));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(610, 380, 461, 111));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 40, 141, 41));
        delete_2 = new QLineEdit(groupBox_3);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        delete_2->setGeometry(QRect(90, 50, 351, 22));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 0, 93, 28));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 20, 93, 28));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(610, 530, 201, 111));
        comboBox = new QComboBox(groupBox_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 181, 22));
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 0, 81, 21));
        groupBox_9 = new QGroupBox(tab);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(820, 500, 251, 171));
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
        recherche->setGeometry(QRect(180, 0, 61, 28));
        imaage = new QLabel(tab);
        imaage->setObjectName(QStringLiteral("imaage"));
        imaage->setGeometry(QRect(-260, -140, 1871, 1281));
        imaage->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/bkg.jpg")));
        tabWidget->addTab(tab, QString());
        imaage->raise();
        tableView->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        pushButton->raise();
        groupBox_4->raise();
        groupBox_9->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(paiement);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(paiement);
    } // setupUi

    void retranslateUi(QDialog *paiement)
    {
        paiement->setWindowTitle(QApplication::translate("paiement", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("paiement", "Ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("paiement", "Identifiant", Q_NULLPTR));
        label_2->setText(QApplication::translate("paiement", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("paiement", "Prenom", Q_NULLPTR));
        Boutonajouter->setText(QApplication::translate("paiement", "Ajouter", Q_NULLPTR));
        label_8->setText(QApplication::translate("paiement", "Type", Q_NULLPTR));
        label_9->setText(QApplication::translate("paiement", "Date", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("paiement", "Modifier ", Q_NULLPTR));
        label_5->setText(QApplication::translate("paiement", "Prenom", Q_NULLPTR));
        label_6->setText(QApplication::translate("paiement", "Identifiant", Q_NULLPTR));
        label_7->setText(QApplication::translate("paiement", "Nom", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("paiement", "appliquer", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("paiement", "Supprimer", Q_NULLPTR));
        label_4->setText(QApplication::translate("paiement", "Identifiant", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("paiement", "supprimer", Q_NULLPTR));
        pushButton->setText(QApplication::translate("paiement", "Afficher", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("paiement", "tri", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("paiement", "TRIER PAR ", Q_NULLPTR)
         << QApplication::translate("paiement", "ID", Q_NULLPTR)
         << QApplication::translate("paiement", "NOM", Q_NULLPTR)
         << QApplication::translate("paiement", "PRENOM", Q_NULLPTR)
         << QApplication::translate("paiement", "TYPE", Q_NULLPTR)
        );
        pushButton_3->setText(QApplication::translate("paiement", "OK", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("paiement", "Recherche ", Q_NULLPTR));
        label_15->setText(QApplication::translate("paiement", "Identifiant", Q_NULLPTR));
        label_16->setText(QApplication::translate("paiement", "Nom", Q_NULLPTR));
        label_17->setText(QApplication::translate("paiement", "Prenom", Q_NULLPTR));
        recherche->setText(QApplication::translate("paiement", "OK", Q_NULLPTR));
        imaage->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("paiement", "Reservation", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("paiement", "Client", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class paiement: public Ui_paiement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAIEMENT_H
