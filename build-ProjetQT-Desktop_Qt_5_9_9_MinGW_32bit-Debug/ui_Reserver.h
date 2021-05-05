/********************************************************************************
** Form generated from reading UI file 'Reserver.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVER_H
#define UI_RESERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reserver
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
    QPushButton *pushButton_6;
    QLabel *on_pushButton_99_clicked;
    QLabel *img;
    QLabel *label_11;
    QLabel *imagerestoo;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QLabel *label_13;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *ajoutid_2;
    QLineEdit *ajoutnom_2;
    QLineEdit *ajoutprenom_2;
    QPushButton *Boutonajouter_2;
    QLineEdit *ajoutadresse_2;
    QLineEdit *ajoutel_2;
    QLabel *label_28;
    QLabel *label_29;
    QGroupBox *groupBox_6;
    QLabel *label_27;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *prenomm_2;
    QLineEdit *idm_2;
    QLineEdit *nomm_2;
    QPushButton *pushButton_8;
    QGroupBox *groupBox_7;
    QLabel *label_32;
    QLineEdit *delete_3;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_10;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *cher1_2;
    QLineEdit *che2_2;
    QLineEdit *che3_2;
    QPushButton *recherche_2;
    QTableView *tableView_2;
    QPushButton *pushButton_5;
    QLabel *img2;
    QLabel *label_12;
    QLabel *imageresto;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *langue;
    QWidget *tab_3;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *Reserver)
    {
        if (Reserver->objectName().isEmpty())
            Reserver->setObjectName(QStringLiteral("Reserver"));
        Reserver->resize(1109, 731);
        tabWidget = new QTabWidget(Reserver);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1131, 811));
        tabWidget->setStyleSheet(QStringLiteral("background-image: url(:/images/background.jpg);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 30, 601, 241));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(610, 0, 481, 221));
        groupBox->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 61, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 51, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 120, 61, 41));
        ajoutid = new QLineEdit(groupBox);
        ajoutid->setObjectName(QStringLiteral("ajoutid"));
        ajoutid->setGeometry(QRect(90, 70, 351, 22));
        ajoutdate = new QLineEdit(groupBox);
        ajoutdate->setObjectName(QStringLiteral("ajoutdate"));
        ajoutdate->setGeometry(QRect(90, 100, 351, 22));
        ajoutmontant = new QLineEdit(groupBox);
        ajoutmontant->setObjectName(QStringLiteral("ajoutmontant"));
        ajoutmontant->setGeometry(QRect(90, 130, 351, 22));
        Boutonajouter = new QPushButton(groupBox);
        Boutonajouter->setObjectName(QStringLiteral("Boutonajouter"));
        Boutonajouter->setGeometry(QRect(360, 0, 93, 28));
        Boutonajouter->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        ajoutdate2 = new QLineEdit(groupBox);
        ajoutdate2->setObjectName(QStringLiteral("ajoutdate2"));
        ajoutdate2->setGeometry(QRect(90, 160, 351, 22));
        ajoutype = new QLineEdit(groupBox);
        ajoutype->setObjectName(QStringLiteral("ajoutype"));
        ajoutype->setGeometry(QRect(90, 190, 351, 22));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 150, 41, 41));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 180, 61, 41));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(610, 220, 451, 151));
        groupBox_2->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 70, 71, 41));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 30, 71, 41));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 110, 51, 41));
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
        pushButton_7->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
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
        groupBox_3->setGeometry(QRect(610, 380, 461, 111));
        groupBox_3->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 40, 61, 41));
        delete_2 = new QLineEdit(groupBox_3);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        delete_2->setGeometry(QRect(90, 50, 351, 22));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 0, 93, 28));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(432, 0, 171, 28));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
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
        groupBox_4->setGeometry(QRect(610, 530, 201, 111));
        groupBox_4->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        comboBox = new QComboBox(groupBox_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 181, 22));
        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 0, 81, 21));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        groupBox_9 = new QGroupBox(tab);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(820, 500, 251, 171));
        groupBox_9->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        label_15 = new QLabel(groupBox_9);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 30, 61, 41));
        label_16 = new QLabel(groupBox_9);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 70, 51, 41));
        label_17 = new QLabel(groupBox_9);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 110, 71, 41));
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
        recherche->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(200, 280, 161, 23));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:2px sold gray;\n"
"border-radius:10px;\n"
"padding: 0 8 px;\n"
"background:green;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"}\n"
"QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        on_pushButton_99_clicked = new QLabel(tab);
        on_pushButton_99_clicked->setObjectName(QStringLiteral("on_pushButton_99_clicked"));
        on_pushButton_99_clicked->setGeometry(QRect(-20, -27, 1191, 731));
        on_pushButton_99_clicked->setScaledContents(true);
        on_pushButton_99_clicked->setWordWrap(false);
        img = new QLabel(tab);
        img->setObjectName(QStringLiteral("img"));
        img->setGeometry(QRect(0, -7, 1161, 711));
        img->setScaledContents(true);
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 570, 541, 61));
        QFont font;
        font.setFamily(QStringLiteral("Arial Narrow"));
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_11->setFont(font);
        label_11->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        label_11->setScaledContents(false);
        imagerestoo = new QLabel(tab);
        imagerestoo->setObjectName(QStringLiteral("imagerestoo"));
        imagerestoo->setGeometry(QRect(10, 390, 201, 161));
        imagerestoo->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        imagerestoo->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        img->raise();
        on_pushButton_99_clicked->raise();
        tableView->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        pushButton->raise();
        groupBox_4->raise();
        groupBox_9->raise();
        pushButton_6->raise();
        label_11->raise();
        imagerestoo->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(620, 10, 461, 221));
        groupBox_5->setStyleSheet(QStringLiteral("font: 75 8pt \"Nirmala UI\";background-image: url(:/images/Empty.png);"));
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 40, 61, 41));
        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 70, 51, 41));
        label_26 = new QLabel(groupBox_5);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(20, 100, 61, 41));
        ajoutid_2 = new QLineEdit(groupBox_5);
        ajoutid_2->setObjectName(QStringLiteral("ajoutid_2"));
        ajoutid_2->setGeometry(QRect(90, 50, 351, 22));
        ajoutnom_2 = new QLineEdit(groupBox_5);
        ajoutnom_2->setObjectName(QStringLiteral("ajoutnom_2"));
        ajoutnom_2->setGeometry(QRect(90, 81, 351, 21));
        ajoutprenom_2 = new QLineEdit(groupBox_5);
        ajoutprenom_2->setObjectName(QStringLiteral("ajoutprenom_2"));
        ajoutprenom_2->setGeometry(QRect(90, 110, 351, 22));
        Boutonajouter_2 = new QPushButton(groupBox_5);
        Boutonajouter_2->setObjectName(QStringLiteral("Boutonajouter_2"));
        Boutonajouter_2->setGeometry(QRect(360, 0, 93, 28));
        Boutonajouter_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:2px sold gray;\n"
"border-radius:10px;\n"
"padding: 0 8 px;\n"
"background:gray;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"}\n"
"QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        ajoutadresse_2 = new QLineEdit(groupBox_5);
        ajoutadresse_2->setObjectName(QStringLiteral("ajoutadresse_2"));
        ajoutadresse_2->setGeometry(QRect(90, 140, 351, 22));
        ajoutel_2 = new QLineEdit(groupBox_5);
        ajoutel_2->setObjectName(QStringLiteral("ajoutel_2"));
        ajoutel_2->setGeometry(QRect(90, 170, 351, 22));
        label_28 = new QLabel(groupBox_5);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 160, 61, 41));
        label_29 = new QLabel(groupBox_5);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 130, 61, 41));
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(620, 240, 461, 151));
        groupBox_6->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        label_27 = new QLabel(groupBox_6);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 70, 71, 41));
        label_30 = new QLabel(groupBox_6);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 30, 51, 41));
        label_31 = new QLabel(groupBox_6);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, 110, 71, 41));
        prenomm_2 = new QLineEdit(groupBox_6);
        prenomm_2->setObjectName(QStringLiteral("prenomm_2"));
        prenomm_2->setGeometry(QRect(90, 80, 351, 22));
        idm_2 = new QLineEdit(groupBox_6);
        idm_2->setObjectName(QStringLiteral("idm_2"));
        idm_2->setGeometry(QRect(90, 40, 351, 22));
        nomm_2 = new QLineEdit(groupBox_6);
        nomm_2->setObjectName(QStringLiteral("nomm_2"));
        nomm_2->setGeometry(QRect(90, 120, 351, 22));
        pushButton_8 = new QPushButton(groupBox_6);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(350, 0, 93, 28));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        groupBox_7 = new QGroupBox(tab_2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(620, 400, 461, 111));
        groupBox_7->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        label_32 = new QLabel(groupBox_7);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 40, 61, 41));
        delete_3 = new QLineEdit(groupBox_7);
        delete_3->setObjectName(QStringLiteral("delete_3"));
        delete_3->setGeometry(QRect(90, 50, 351, 22));
        pushButton_4 = new QPushButton(groupBox_7);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(350, 0, 93, 28));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        groupBox_10 = new QGroupBox(tab_2);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(840, 520, 241, 171));
        groupBox_10->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        label_33 = new QLabel(groupBox_10);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(10, 30, 141, 41));
        label_34 = new QLabel(groupBox_10);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(10, 70, 141, 41));
        label_35 = new QLabel(groupBox_10);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(10, 110, 141, 41));
        cher1_2 = new QLineEdit(groupBox_10);
        cher1_2->setObjectName(QStringLiteral("cher1_2"));
        cher1_2->setGeometry(QRect(90, 40, 111, 22));
        che2_2 = new QLineEdit(groupBox_10);
        che2_2->setObjectName(QStringLiteral("che2_2"));
        che2_2->setGeometry(QRect(90, 80, 111, 22));
        che3_2 = new QLineEdit(groupBox_10);
        che3_2->setObjectName(QStringLiteral("che3_2"));
        che3_2->setGeometry(QRect(90, 120, 111, 22));
        recherche_2 = new QPushButton(groupBox_10);
        recherche_2->setObjectName(QStringLiteral("recherche_2"));
        recherche_2->setGeometry(QRect(180, 0, 61, 28));
        recherche_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(0, 30, 601, 241));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(482, 0, 121, 28));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        img2 = new QLabel(tab_2);
        img2->setObjectName(QStringLiteral("img2"));
        img2->setGeometry(QRect(0, -20, 1121, 721));
        img2->setScaledContents(true);
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 570, 601, 61));
        label_12->setFont(font);
        label_12->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        label_12->setScaledContents(false);
        imageresto = new QLabel(tab_2);
        imageresto->setObjectName(QStringLiteral("imageresto"));
        imageresto->setGeometry(QRect(10, 390, 201, 161));
        imageresto->setScaledContents(true);
        pushButton_9 = new QPushButton(tab_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(210, 280, 31, 23));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        pushButton_10 = new QPushButton(tab_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(240, 280, 31, 23));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"  \n"
"  border-radius: 10px;\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.613065, y1:0.511, x2:0.969, y2:0, stop:0.18593 rgba(2, 136, 148, 226), stop:0.959799 rgba(0, 0, 0, 161));\n"
"	\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover,QPushButton:hover\n"
"{\n"
"    border: 4px solid QLinearGradient( x1: 2, y1: 2, x2: 2, y2: 3, stop: 0 #08E8DE , stop: 3 #d7801a);\n"
"}"));
        langue = new QLabel(tab_2);
        langue->setObjectName(QStringLiteral("langue"));
        langue->setGeometry(QRect(80, 280, 141, 20));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        langue->setFont(font1);
        langue->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        tabWidget->addTab(tab_2, QString());
        img2->raise();
        groupBox_5->raise();
        groupBox_6->raise();
        groupBox_7->raise();
        groupBox_10->raise();
        tableView_2->raise();
        pushButton_5->raise();
        label_12->raise();
        imageresto->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        langue->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        horizontalFrame = new QFrame(tab_3);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(20, 20, 761, 671));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(Reserver);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Reserver);
    } // setupUi

    void retranslateUi(QDialog *Reserver)
    {
        Reserver->setWindowTitle(QApplication::translate("Reserver", "Reservations et Clients", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Reserver", "AJOUTER UNE RESERVATION", Q_NULLPTR));
        label->setText(QApplication::translate("Reserver", "Identifiant R", Q_NULLPTR));
        label_2->setText(QApplication::translate("Reserver", "Prenom", Q_NULLPTR));
        label_3->setText(QApplication::translate("Reserver", "Nom", Q_NULLPTR));
        Boutonajouter->setText(QApplication::translate("Reserver", "Ajouter", Q_NULLPTR));
        label_8->setText(QApplication::translate("Reserver", "Type", Q_NULLPTR));
        label_9->setText(QApplication::translate("Reserver", "Date", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Reserver", "MODIFIER UNE RESERVATION", Q_NULLPTR));
        label_5->setText(QApplication::translate("Reserver", "Nom", Q_NULLPTR));
        label_6->setText(QApplication::translate("Reserver", "Identifiant", Q_NULLPTR));
        label_7->setText(QApplication::translate("Reserver", "Prenom", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Reserver", "Appliquer", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Reserver", "SUPPRIMER UNE RESERVATION", Q_NULLPTR));
        label_4->setText(QApplication::translate("Reserver", "Identifiant", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Reserver", "Supprimer", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Reserver", "AFFICHER UNE RESERVATION ", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Reserver", "TRI", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Reserver", "TRIER PAR ", Q_NULLPTR)
         << QApplication::translate("Reserver", "ID", Q_NULLPTR)
         << QApplication::translate("Reserver", "NOM", Q_NULLPTR)
         << QApplication::translate("Reserver", "PRENOM", Q_NULLPTR)
         << QString()
        );
        pushButton_3->setText(QApplication::translate("Reserver", "OK", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("Reserver", "RECHERCHE UNE RESERVATION", Q_NULLPTR));
        label_15->setText(QApplication::translate("Reserver", "Identifiant", Q_NULLPTR));
        label_16->setText(QApplication::translate("Reserver", "Nom", Q_NULLPTR));
        label_17->setText(QApplication::translate("Reserver", "Prenom", Q_NULLPTR));
        recherche->setText(QApplication::translate("Reserver", "OK", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Reserver", "Stat", Q_NULLPTR));
        on_pushButton_99_clicked->setText(QString());
        img->setText(QString());
        label_11->setText(QApplication::translate("Reserver", "Gestion De Reservation", Q_NULLPTR));
        imagerestoo->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Reserver", "Reservation", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("Reserver", "AJOUTER UN CLIENT", Q_NULLPTR));
        label_13->setText(QApplication::translate("Reserver", "Identifiant", Q_NULLPTR));
        label_25->setText(QApplication::translate("Reserver", "Nom", Q_NULLPTR));
        label_26->setText(QApplication::translate("Reserver", "Prenom", Q_NULLPTR));
        Boutonajouter_2->setText(QApplication::translate("Reserver", "Ajouter", Q_NULLPTR));
        label_28->setText(QApplication::translate("Reserver", "Tel", Q_NULLPTR));
        label_29->setText(QApplication::translate("Reserver", "Adresse", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("Reserver", "MODIFIER UN CLIENT", Q_NULLPTR));
        label_27->setText(QApplication::translate("Reserver", "Prenom", Q_NULLPTR));
        label_30->setText(QApplication::translate("Reserver", "Identifiant", Q_NULLPTR));
        label_31->setText(QApplication::translate("Reserver", "Nom", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("Reserver", "Appliquer", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("Reserver", "SUPPRIMER UN CLIENT", Q_NULLPTR));
        label_32->setText(QApplication::translate("Reserver", "Identifiant", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Reserver", "Supprimer", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("Reserver", "RECHERCHER UN CLIENT", Q_NULLPTR));
        label_33->setText(QApplication::translate("Reserver", "Identifiant", Q_NULLPTR));
        label_34->setText(QApplication::translate("Reserver", "Prenom", Q_NULLPTR));
        label_35->setText(QApplication::translate("Reserver", "Nom", Q_NULLPTR));
        recherche_2->setText(QApplication::translate("Reserver", "OK", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Reserver", "AFFICHER UN CLIENT", Q_NULLPTR));
        img2->setText(QString());
        label_12->setText(QApplication::translate("Reserver", "Gestion De Reservation", Q_NULLPTR));
        imageresto->setText(QString());
        pushButton_9->setText(QApplication::translate("Reserver", "Fr", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("Reserver", "Ang", Q_NULLPTR));
        langue->setText(QApplication::translate("Reserver", "Choisissez la langue:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Reserver", "Client", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Reserver", "Statistiques", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Reserver: public Ui_Reserver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVER_H
