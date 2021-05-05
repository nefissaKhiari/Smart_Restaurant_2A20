/********************************************************************************
** Form generated from reading UI file 'ingredient_plat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGREDIENT_PLAT_H
#define UI_INGREDIENT_PLAT_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ingredient_plat
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *Afficher;
    QTableView *tablePlat;
    QPushButton *pushButton_rechercher;
    QLabel *label_saisir_2;
    QLineEdit *lineEdit_chercherplat;
    QPushButton *pushButton_imprimer_9;
    QWidget *Ajouter;
    QPushButton *ajouter_plat;
    QLabel *label_date_plat;
    QLineEdit *lineEdit_matiere;
    QLabel *label_matiere;
    QLabel *label_code_plat;
    QLineEdit *lineEdit_code_plat;
    QLabel *label_cout;
    QLineEdit *lineEdit_cout_plat;
    QDateEdit *dateEdit_2;
    QLabel *label_quantite;
    QLineEdit *lineEdit_quantiteplat;
    QWidget *Modifier;
    QLabel *label_saisir;
    QLabel *label_codeplatmodif;
    QLineEdit *lineEdit_codeplatmodif;
    QLineEdit *lineEdit_nouvcout;
    QLabel *label_nouvcout;
    QLabel *label_nouvmat;
    QLineEdit *lineEdit_nouvmat;
    QPushButton *modifierplat;
    QLabel *label_nouvdate;
    QDateEdit *dateEdit_3;
    QLabel *label_quantiteee;
    QLineEdit *lineEdit_quantitemodifplat;
    QWidget *Supprimer;
    QLabel *label_supp;
    QLabel *label_codeplatsupp;
    QLineEdit *lineEdit_codeplatsupp;
    QPushButton *supprimerplat;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QWidget *page_2;
    QPushButton *pushButton_5;
    QTabWidget *tabWidget_2;
    QWidget *Afficher_2;
    QTableView *tableIng;
    QPushButton *pushButton_trie;
    QPushButton *pushButton_stat;
    QWidget *Ajouter_2;
    QLabel *label_code_ing;
    QLabel *label_type_ing;
    QLabel *label_prix_ing;
    QLineEdit *lineEdit_code_ing;
    QLineEdit *lineEdit_prix_ing;
    QPushButton *ajouter_ing;
    QComboBox *comboBox;
    QLabel *label_quantitee;
    QLineEdit *lineEdit_quantiteing;
    QWidget *Modifier_2;
    QLabel *label_code_ing_modif;
    QLabel *label_saisir_ing;
    QPushButton *modifier_2;
    QLineEdit *lineEdit_code_ingmodifier;
    QLabel *label_nouv_prix;
    QLabel *label_nouv_type_2;
    QLineEdit *lineEdit_nouv_prix;
    QComboBox *comboBox2;
    QLineEdit *lineEdit_quantitemodiing;
    QLabel *label_quantite_2;
    QWidget *Supprimer_2;
    QLineEdit *lineEdit_code_ingsupp;
    QLabel *label_id_ingsupp;
    QPushButton *supprimer_2;
    QLabel *label_supp_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuPlats;
    QMenu *menuIngr_dient;

    void setupUi(QMainWindow *Ingredient_plat)
    {
        if (Ingredient_plat->objectName().isEmpty())
            Ingredient_plat->setObjectName(QStringLiteral("Ingredient_plat"));
        Ingredient_plat->resize(1072, 640);
        centralwidget = new QWidget(Ingredient_plat);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral("background-image: url(:/images/background.jpg);"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 0, 981, 601));
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox{color:white;\n"
"}\n"
"QPushButton\n"
"{\n"
"background:#aaaa00;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"background:rgb(197, 250, 255);\n"
"}\n"
"*{\n"
"background-image: url(:/ci.jpg);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"background:#55557f;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"background:rgb(197, 250, 255);\n"
"}\n"
"\n"
"QLabel\n"
"{color:white;\n"
"border-radius:15px;\n"
"}\n"
"QLabel\n"
"{background:transparent;\n"
"border-radius:60px;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
""));
        stackedWidget = new QStackedWidget(groupBox_2);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 981, 531));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 10, 1011, 551));
        QFont font;
        font.setFamily(QStringLiteral("century gothic"));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("*{\n"
"	background-image: url(:/images/background.jpg);\n"
"font-family:century gothic;\n"
"font-size:12px;}\n"
"QPushButton\n"
"{\n"
"background:#008BEA;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"background:#ffaaff;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"background:#ffaa7f;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"background:#ff5500;\n"
"}\n"
"\n"
"QLabel\n"
"{color:black;\n"
"border-radius:15px;\n"
"}\n"
"QLabel\n"
"{background:#550000;\n"
"border-radius:60px;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"\n"
"QWiget\n"
"{color :white;\n"
"}\n"
"\n"
"QTabWidget{background:transparent} QTabWidget::pane{border: 1px;border-color:red;background-color: transparent;} \n"
"QTabBar::tab {background-color: transparent;color: #ccc;width: 220px;height:42px;fon"
                        "t-size:14px} \n"
"QTabBar::tab:hover{background-color:#ddd; color: white;}\n"
"QTabBar::tab:selected{background-color: #363535; color: #008BEA;}\n"
""));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        Afficher = new QWidget();
        Afficher->setObjectName(QStringLiteral("Afficher"));
        tablePlat = new QTableView(Afficher);
        tablePlat->setObjectName(QStringLiteral("tablePlat"));
        tablePlat->setGeometry(QRect(10, 20, 691, 331));
        tablePlat->setStyleSheet(QStringLiteral("background-image: url(:/new/white.png);"));
        pushButton_rechercher = new QPushButton(Afficher);
        pushButton_rechercher->setObjectName(QStringLiteral("pushButton_rechercher"));
        pushButton_rechercher->setGeometry(QRect(800, 160, 101, 41));
        label_saisir_2 = new QLabel(Afficher);
        label_saisir_2->setObjectName(QStringLiteral("label_saisir_2"));
        label_saisir_2->setGeometry(QRect(730, 60, 221, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("century gothic"));
        font1.setUnderline(true);
        font1.setStrikeOut(false);
        label_saisir_2->setFont(font1);
        label_saisir_2->setLayoutDirection(Qt::LeftToRight);
        label_saisir_2->setStyleSheet(QLatin1String("\n"
"color:white;\n"
"\n"
"\n"
""));
        label_saisir_2->setFrameShape(QFrame::NoFrame);
        label_saisir_2->setLineWidth(1);
        label_saisir_2->setTextFormat(Qt::RichText);
        label_saisir_2->setScaledContents(false);
        lineEdit_chercherplat = new QLineEdit(Afficher);
        lineEdit_chercherplat->setObjectName(QStringLiteral("lineEdit_chercherplat"));
        lineEdit_chercherplat->setGeometry(QRect(750, 110, 191, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("century gothic"));
        font2.setBold(true);
        font2.setWeight(75);
        lineEdit_chercherplat->setFont(font2);
        lineEdit_chercherplat->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_chercherplat->setMaxLength(8);
        lineEdit_chercherplat->setAlignment(Qt::AlignCenter);
        pushButton_imprimer_9 = new QPushButton(Afficher);
        pushButton_imprimer_9->setObjectName(QStringLiteral("pushButton_imprimer_9"));
        pushButton_imprimer_9->setGeometry(QRect(800, 280, 101, 41));
        pushButton_imprimer_9->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton\n"
"{\n"
"background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"background:rgb(197, 250, 255);\n"
"}\n"
"\n"
"\n"
""));
        tabWidget->addTab(Afficher, QString());
        Ajouter = new QWidget();
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        ajouter_plat = new QPushButton(Ajouter);
        ajouter_plat->setObjectName(QStringLiteral("ajouter_plat"));
        ajouter_plat->setGeometry(QRect(450, 340, 121, 41));
        ajouter_plat->setFont(font2);
        label_date_plat = new QLabel(Ajouter);
        label_date_plat->setObjectName(QStringLiteral("label_date_plat"));
        label_date_plat->setGeometry(QRect(140, 220, 121, 31));
        label_date_plat->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_matiere = new QLineEdit(Ajouter);
        lineEdit_matiere->setObjectName(QStringLiteral("lineEdit_matiere"));
        lineEdit_matiere->setGeometry(QRect(300, 90, 191, 31));
        lineEdit_matiere->setFont(font2);
        lineEdit_matiere->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_matiere->setMaxLength(8);
        lineEdit_matiere->setAlignment(Qt::AlignCenter);
        label_matiere = new QLabel(Ajouter);
        label_matiere->setObjectName(QStringLiteral("label_matiere"));
        label_matiere->setGeometry(QRect(160, 90, 81, 31));
        label_matiere->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        label_code_plat = new QLabel(Ajouter);
        label_code_plat->setObjectName(QStringLiteral("label_code_plat"));
        label_code_plat->setGeometry(QRect(160, 40, 91, 31));
        label_code_plat->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_code_plat = new QLineEdit(Ajouter);
        lineEdit_code_plat->setObjectName(QStringLiteral("lineEdit_code_plat"));
        lineEdit_code_plat->setGeometry(QRect(300, 40, 191, 31));
        lineEdit_code_plat->setFont(font2);
        lineEdit_code_plat->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_code_plat->setMaxLength(8);
        lineEdit_code_plat->setAlignment(Qt::AlignCenter);
        label_cout = new QLabel(Ajouter);
        label_cout->setObjectName(QStringLiteral("label_cout"));
        label_cout->setGeometry(QRect(150, 150, 101, 31));
        label_cout->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_cout_plat = new QLineEdit(Ajouter);
        lineEdit_cout_plat->setObjectName(QStringLiteral("lineEdit_cout_plat"));
        lineEdit_cout_plat->setGeometry(QRect(300, 150, 191, 31));
        lineEdit_cout_plat->setFont(font2);
        lineEdit_cout_plat->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_cout_plat->setMaxLength(8);
        lineEdit_cout_plat->setAlignment(Qt::AlignCenter);
        dateEdit_2 = new QDateEdit(Ajouter);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(310, 220, 181, 31));
        dateEdit_2->setStyleSheet(QLatin1String("QDateEdit\n"
"{\n"
"background:#ffaa7f;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QDateEdit{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QDateEdit:hover\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"background:#ff5500;\n"
"}"));
        dateEdit_2->setCalendarPopup(true);
        dateEdit_2->setDate(QDate(2020, 11, 20));
        label_quantite = new QLabel(Ajouter);
        label_quantite->setObjectName(QStringLiteral("label_quantite"));
        label_quantite->setGeometry(QRect(140, 280, 121, 31));
        label_quantite->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_quantiteplat = new QLineEdit(Ajouter);
        lineEdit_quantiteplat->setObjectName(QStringLiteral("lineEdit_quantiteplat"));
        lineEdit_quantiteplat->setGeometry(QRect(300, 280, 191, 31));
        lineEdit_quantiteplat->setFont(font2);
        lineEdit_quantiteplat->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_quantiteplat->setMaxLength(8);
        lineEdit_quantiteplat->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(Ajouter, QString());
        Modifier = new QWidget();
        Modifier->setObjectName(QStringLiteral("Modifier"));
        label_saisir = new QLabel(Modifier);
        label_saisir->setObjectName(QStringLiteral("label_saisir"));
        label_saisir->setGeometry(QRect(250, 40, 221, 31));
        label_saisir->setFont(font1);
        label_saisir->setLayoutDirection(Qt::LeftToRight);
        label_saisir->setStyleSheet(QLatin1String("\n"
"color:white;\n"
"\n"
"\n"
""));
        label_saisir->setFrameShape(QFrame::NoFrame);
        label_saisir->setLineWidth(1);
        label_saisir->setTextFormat(Qt::RichText);
        label_saisir->setScaledContents(false);
        label_codeplatmodif = new QLabel(Modifier);
        label_codeplatmodif->setObjectName(QStringLiteral("label_codeplatmodif"));
        label_codeplatmodif->setGeometry(QRect(140, 100, 101, 31));
        label_codeplatmodif->setFont(font);
        label_codeplatmodif->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;\n"
"background:#ffaa00;"));
        lineEdit_codeplatmodif = new QLineEdit(Modifier);
        lineEdit_codeplatmodif->setObjectName(QStringLiteral("lineEdit_codeplatmodif"));
        lineEdit_codeplatmodif->setGeometry(QRect(300, 103, 191, 31));
        lineEdit_codeplatmodif->setFont(font2);
        lineEdit_codeplatmodif->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_codeplatmodif->setMaxLength(8);
        lineEdit_codeplatmodif->setAlignment(Qt::AlignCenter);
        lineEdit_nouvcout = new QLineEdit(Modifier);
        lineEdit_nouvcout->setObjectName(QStringLiteral("lineEdit_nouvcout"));
        lineEdit_nouvcout->setGeometry(QRect(300, 220, 191, 31));
        lineEdit_nouvcout->setFont(font2);
        lineEdit_nouvcout->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_nouvcout->setMaxLength(8);
        lineEdit_nouvcout->setAlignment(Qt::AlignCenter);
        label_nouvcout = new QLabel(Modifier);
        label_nouvcout->setObjectName(QStringLiteral("label_nouvcout"));
        label_nouvcout->setGeometry(QRect(110, 220, 161, 31));
        label_nouvcout->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        label_nouvmat = new QLabel(Modifier);
        label_nouvmat->setObjectName(QStringLiteral("label_nouvmat"));
        label_nouvmat->setGeometry(QRect(130, 160, 121, 31));
        label_nouvmat->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_nouvmat = new QLineEdit(Modifier);
        lineEdit_nouvmat->setObjectName(QStringLiteral("lineEdit_nouvmat"));
        lineEdit_nouvmat->setGeometry(QRect(300, 160, 191, 31));
        lineEdit_nouvmat->setFont(font2);
        lineEdit_nouvmat->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_nouvmat->setMaxLength(8);
        lineEdit_nouvmat->setAlignment(Qt::AlignCenter);
        modifierplat = new QPushButton(Modifier);
        modifierplat->setObjectName(QStringLiteral("modifierplat"));
        modifierplat->setGeometry(QRect(600, 180, 131, 41));
        modifierplat->setFont(font2);
        label_nouvdate = new QLabel(Modifier);
        label_nouvdate->setObjectName(QStringLiteral("label_nouvdate"));
        label_nouvdate->setGeometry(QRect(100, 280, 181, 31));
        label_nouvdate->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        dateEdit_3 = new QDateEdit(Modifier);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));
        dateEdit_3->setGeometry(QRect(310, 280, 181, 31));
        dateEdit_3->setFont(font2);
        dateEdit_3->setStyleSheet(QLatin1String("QDateEdit\n"
"{\n"
"background:#ffaa7f;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QDateEdit{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QDateEdit:hover\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"background:#ff5500;\n"
"}"));
        dateEdit_3->setCalendarPopup(true);
        dateEdit_3->setDate(QDate(2020, 11, 20));
        label_quantiteee = new QLabel(Modifier);
        label_quantiteee->setObjectName(QStringLiteral("label_quantiteee"));
        label_quantiteee->setGeometry(QRect(110, 340, 161, 31));
        label_quantiteee->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_quantitemodifplat = new QLineEdit(Modifier);
        lineEdit_quantitemodifplat->setObjectName(QStringLiteral("lineEdit_quantitemodifplat"));
        lineEdit_quantitemodifplat->setGeometry(QRect(300, 340, 191, 31));
        lineEdit_quantitemodifplat->setFont(font2);
        lineEdit_quantitemodifplat->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_quantitemodifplat->setMaxLength(8);
        lineEdit_quantitemodifplat->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(Modifier, QString());
        Supprimer = new QWidget();
        Supprimer->setObjectName(QStringLiteral("Supprimer"));
        Supprimer->setMaximumSize(QSize(797, 16777215));
        QFont font3;
        font3.setFamily(QStringLiteral("century gothic"));
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        Supprimer->setFont(font3);
        label_supp = new QLabel(Supprimer);
        label_supp->setObjectName(QStringLiteral("label_supp"));
        label_supp->setGeometry(QRect(230, 50, 231, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("century gothic"));
        font4.setBold(false);
        font4.setItalic(false);
        font4.setUnderline(true);
        font4.setWeight(50);
        font4.setStrikeOut(false);
        label_supp->setFont(font4);
        label_supp->setStyleSheet(QLatin1String("\n"
"color:white;\n"
"\n"
"\n"
""));
        label_supp->setTextFormat(Qt::RichText);
        label_supp->setScaledContents(false);
        label_codeplatsupp = new QLabel(Supprimer);
        label_codeplatsupp->setObjectName(QStringLiteral("label_codeplatsupp"));
        label_codeplatsupp->setGeometry(QRect(160, 110, 101, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("century gothic"));
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        label_codeplatsupp->setFont(font5);
        label_codeplatsupp->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_codeplatsupp = new QLineEdit(Supprimer);
        lineEdit_codeplatsupp->setObjectName(QStringLiteral("lineEdit_codeplatsupp"));
        lineEdit_codeplatsupp->setGeometry(QRect(280, 110, 161, 31));
        lineEdit_codeplatsupp->setFont(font2);
        lineEdit_codeplatsupp->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_codeplatsupp->setMaxLength(8);
        lineEdit_codeplatsupp->setAlignment(Qt::AlignCenter);
        supprimerplat = new QPushButton(Supprimer);
        supprimerplat->setObjectName(QStringLiteral("supprimerplat"));
        supprimerplat->setGeometry(QRect(350, 164, 121, 41));
        supprimerplat->setFont(font3);
        tabWidget->addTab(Supprimer, QString());
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(400, 450, 101, 41));
        QFont font6;
        font6.setBold(true);
        font6.setWeight(75);
        pushButton_3->setFont(font6);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton\n"
"{background:#aa0000;\n"
"border-radius:15px;}\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:#ff557f;\n"
"border-radius:15px;\n"
"background:#ffaa00;\n"
"}"));
        pushButton_9 = new QPushButton(page);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(910, 0, 41, 41));
        pushButton_9->setStyleSheet(QLatin1String("background:none;\n"
"border-radius:10px;\n"
"border-image: url(:/new/next.png);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(930, 0, 41, 41));
        pushButton_5->setStyleSheet(QLatin1String("background:none;\n"
"border-radius:10px;\n"
"border-image: url(:/next1.png);"));
        tabWidget_2 = new QTabWidget(page_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 10, 1001, 531));
        tabWidget_2->setStyleSheet(QLatin1String("*{\n"
"	background-image: url(:/images/background.jpg);\n"
"font-family:century gothic;\n"
"font-size:12px;}\n"
"QPushButton\n"
"{\n"
"background:#008BEA;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"background:#ffaaff;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"background:#ffaa7f;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"background:#ff5500;\n"
"}\n"
"\n"
"QLabel\n"
"{color:black;\n"
"border-radius:15px;\n"
"}\n"
"QLabel\n"
"{background:#550000;\n"
"border-radius:60px;\n"
"border-bottom:1px solid #717072;\n"
"}\n"
"\n"
"QWiget\n"
"{color :white;\n"
"}\n"
"\n"
"QTabWidget{background:transparent} QTabWidget::pane{border: 1px;border-color:red;background-color: transparent;} \n"
"QTabBar::tab {background-color: transparent;color: #ccc;width: 220px;height:42px;fon"
                        "t-size:14px} \n"
"QTabBar::tab:hover{background-color:#ddd; color: white;}\n"
"QTabBar::tab:selected{background-color: #363535; color: #008BEA;}\n"
""));
        Afficher_2 = new QWidget();
        Afficher_2->setObjectName(QStringLiteral("Afficher_2"));
        tableIng = new QTableView(Afficher_2);
        tableIng->setObjectName(QStringLiteral("tableIng"));
        tableIng->setGeometry(QRect(20, 10, 741, 341));
        tableIng->setStyleSheet(QStringLiteral("background-image: url(:/new/white.png);"));
        pushButton_trie = new QPushButton(Afficher_2);
        pushButton_trie->setObjectName(QStringLiteral("pushButton_trie"));
        pushButton_trie->setGeometry(QRect(830, 200, 91, 41));
        pushButton_stat = new QPushButton(Afficher_2);
        pushButton_stat->setObjectName(QStringLiteral("pushButton_stat"));
        pushButton_stat->setGeometry(QRect(830, 130, 91, 41));
        tabWidget_2->addTab(Afficher_2, QString());
        Ajouter_2 = new QWidget();
        Ajouter_2->setObjectName(QStringLiteral("Ajouter_2"));
        label_code_ing = new QLabel(Ajouter_2);
        label_code_ing->setObjectName(QStringLiteral("label_code_ing"));
        label_code_ing->setGeometry(QRect(110, 70, 81, 31));
        label_code_ing->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        label_type_ing = new QLabel(Ajouter_2);
        label_type_ing->setObjectName(QStringLiteral("label_type_ing"));
        label_type_ing->setGeometry(QRect(110, 140, 81, 31));
        label_type_ing->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        label_prix_ing = new QLabel(Ajouter_2);
        label_prix_ing->setObjectName(QStringLiteral("label_prix_ing"));
        label_prix_ing->setGeometry(QRect(110, 200, 81, 31));
        label_prix_ing->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_code_ing = new QLineEdit(Ajouter_2);
        lineEdit_code_ing->setObjectName(QStringLiteral("lineEdit_code_ing"));
        lineEdit_code_ing->setGeometry(QRect(260, 80, 181, 31));
        lineEdit_code_ing->setFont(font2);
        lineEdit_code_ing->setLayoutDirection(Qt::LeftToRight);
        lineEdit_code_ing->setStyleSheet(QLatin1String("\n"
"border-radius:15px;"));
        lineEdit_code_ing->setLocale(QLocale(QLocale::French, QLocale::France));
        lineEdit_code_ing->setMaxLength(8);
        lineEdit_code_ing->setCursorPosition(0);
        lineEdit_code_ing->setAlignment(Qt::AlignCenter);
        lineEdit_prix_ing = new QLineEdit(Ajouter_2);
        lineEdit_prix_ing->setObjectName(QStringLiteral("lineEdit_prix_ing"));
        lineEdit_prix_ing->setGeometry(QRect(260, 200, 181, 31));
        lineEdit_prix_ing->setFont(font2);
        lineEdit_prix_ing->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_prix_ing->setMaxLength(8);
        lineEdit_prix_ing->setAlignment(Qt::AlignCenter);
        ajouter_ing = new QPushButton(Ajouter_2);
        ajouter_ing->setObjectName(QStringLiteral("ajouter_ing"));
        ajouter_ing->setGeometry(QRect(500, 310, 121, 41));
        ajouter_ing->setFont(font2);
        comboBox = new QComboBox(Ajouter_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(260, 140, 171, 31));
        comboBox->setFont(font2);
        comboBox->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background:#ffaa7f;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QComboBox{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QComboBox:hover\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"background:#ff5500;\n"
"}"));
        label_quantitee = new QLabel(Ajouter_2);
        label_quantitee->setObjectName(QStringLiteral("label_quantitee"));
        label_quantitee->setGeometry(QRect(110, 260, 81, 31));
        label_quantitee->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_quantiteing = new QLineEdit(Ajouter_2);
        lineEdit_quantiteing->setObjectName(QStringLiteral("lineEdit_quantiteing"));
        lineEdit_quantiteing->setGeometry(QRect(260, 260, 181, 31));
        lineEdit_quantiteing->setFont(font2);
        lineEdit_quantiteing->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_quantiteing->setMaxLength(8);
        lineEdit_quantiteing->setAlignment(Qt::AlignCenter);
        tabWidget_2->addTab(Ajouter_2, QString());
        Modifier_2 = new QWidget();
        Modifier_2->setObjectName(QStringLiteral("Modifier_2"));
        label_code_ing_modif = new QLabel(Modifier_2);
        label_code_ing_modif->setObjectName(QStringLiteral("label_code_ing_modif"));
        label_code_ing_modif->setGeometry(QRect(160, 110, 71, 31));
        label_code_ing_modif->setFont(font);
        label_code_ing_modif->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;\n"
"background:#ffaa00;"));
        label_saisir_ing = new QLabel(Modifier_2);
        label_saisir_ing->setObjectName(QStringLiteral("label_saisir_ing"));
        label_saisir_ing->setGeometry(QRect(240, 30, 251, 31));
        label_saisir_ing->setFont(font1);
        label_saisir_ing->setStyleSheet(QLatin1String("\n"
"color:white;\n"
"\n"
"\n"
""));
        label_saisir_ing->setTextFormat(Qt::RichText);
        label_saisir_ing->setScaledContents(false);
        modifier_2 = new QPushButton(Modifier_2);
        modifier_2->setObjectName(QStringLiteral("modifier_2"));
        modifier_2->setGeometry(QRect(560, 294, 121, 41));
        modifier_2->setFont(font2);
        lineEdit_code_ingmodifier = new QLineEdit(Modifier_2);
        lineEdit_code_ingmodifier->setObjectName(QStringLiteral("lineEdit_code_ingmodifier"));
        lineEdit_code_ingmodifier->setGeometry(QRect(290, 110, 191, 31));
        lineEdit_code_ingmodifier->setFont(font2);
        lineEdit_code_ingmodifier->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_code_ingmodifier->setMaxLength(8);
        lineEdit_code_ingmodifier->setAlignment(Qt::AlignCenter);
        label_nouv_prix = new QLabel(Modifier_2);
        label_nouv_prix->setObjectName(QStringLiteral("label_nouv_prix"));
        label_nouv_prix->setGeometry(QRect(130, 230, 141, 31));
        label_nouv_prix->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;\n"
"QLineEdit\n"
"{\n"
"background:#ffaa7f;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"background:#ff5500;\n"
"}"));
        label_nouv_type_2 = new QLabel(Modifier_2);
        label_nouv_type_2->setObjectName(QStringLiteral("label_nouv_type_2"));
        label_nouv_type_2->setGeometry(QRect(150, 170, 101, 31));
        label_nouv_type_2->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;\n"
"QLineEdit\n"
"{\n"
"background:#ffaa7f;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"background:#ff5500;\n"
"}"));
        lineEdit_nouv_prix = new QLineEdit(Modifier_2);
        lineEdit_nouv_prix->setObjectName(QStringLiteral("lineEdit_nouv_prix"));
        lineEdit_nouv_prix->setGeometry(QRect(300, 230, 191, 31));
        lineEdit_nouv_prix->setFont(font2);
        lineEdit_nouv_prix->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_nouv_prix->setMaxLength(8);
        lineEdit_nouv_prix->setAlignment(Qt::AlignCenter);
        comboBox2 = new QComboBox(Modifier_2);
        comboBox2->setObjectName(QStringLiteral("comboBox2"));
        comboBox2->setGeometry(QRect(290, 170, 191, 31));
        comboBox2->setFont(font2);
        comboBox2->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background:#ffaa7f;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QComboBox{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QComboBox:hover\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"background:#ff5500;\n"
"}"));
        lineEdit_quantitemodiing = new QLineEdit(Modifier_2);
        lineEdit_quantitemodiing->setObjectName(QStringLiteral("lineEdit_quantitemodiing"));
        lineEdit_quantitemodiing->setGeometry(QRect(300, 280, 191, 31));
        lineEdit_quantitemodiing->setFont(font2);
        lineEdit_quantitemodiing->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_quantitemodiing->setMaxLength(8);
        lineEdit_quantitemodiing->setAlignment(Qt::AlignCenter);
        label_quantite_2 = new QLabel(Modifier_2);
        label_quantite_2->setObjectName(QStringLiteral("label_quantite_2"));
        label_quantite_2->setGeometry(QRect(130, 280, 141, 31));
        label_quantite_2->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;\n"
"QLineEdit\n"
"{\n"
"background:#ffaa7f;\n"
"border-radius:60px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"color:black;\n"
"border-radius:15px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"background:#ff5500;\n"
"}"));
        tabWidget_2->addTab(Modifier_2, QString());
        Supprimer_2 = new QWidget();
        Supprimer_2->setObjectName(QStringLiteral("Supprimer_2"));
        lineEdit_code_ingsupp = new QLineEdit(Supprimer_2);
        lineEdit_code_ingsupp->setObjectName(QStringLiteral("lineEdit_code_ingsupp"));
        lineEdit_code_ingsupp->setGeometry(QRect(260, 130, 151, 31));
        lineEdit_code_ingsupp->setFont(font2);
        lineEdit_code_ingsupp->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_code_ingsupp->setMaxLength(8);
        lineEdit_code_ingsupp->setAlignment(Qt::AlignCenter);
        label_id_ingsupp = new QLabel(Supprimer_2);
        label_id_ingsupp->setObjectName(QStringLiteral("label_id_ingsupp"));
        label_id_ingsupp->setGeometry(QRect(170, 130, 71, 31));
        label_id_ingsupp->setFont(font5);
        label_id_ingsupp->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        supprimer_2 = new QPushButton(Supprimer_2);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setGeometry(QRect(350, 210, 121, 41));
        supprimer_2->setFont(font3);
        label_supp_2 = new QLabel(Supprimer_2);
        label_supp_2->setObjectName(QStringLiteral("label_supp_2"));
        label_supp_2->setGeometry(QRect(190, 70, 271, 31));
        label_supp_2->setFont(font4);
        label_supp_2->setStyleSheet(QLatin1String("\n"
"color:white;\n"
"\n"
"\n"
""));
        label_supp_2->setTextFormat(Qt::RichText);
        label_supp_2->setScaledContents(false);
        tabWidget_2->addTab(Supprimer_2, QString());
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 450, 101, 41));
        pushButton_2->setFont(font6);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{background:#aa0000;\n"
"border-radius:15px;}\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:#ff557f;\n"
"border-radius:15px;\n"
"background:#ffaa00;\n"
"}"));
        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(900, 0, 41, 41));
        pushButton_8->setStyleSheet(QLatin1String("\n"
"background:none;\n"
"border-radius:10px;\n"
"border-image: url(:/new/next1.png);"));
        stackedWidget->addWidget(page_2);
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 550, 111, 41));
        Ingredient_plat->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Ingredient_plat);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Ingredient_plat->setStatusBar(statusbar);
        menubar = new QMenuBar(Ingredient_plat);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1072, 26));
        menuPlats = new QMenu(menubar);
        menuPlats->setObjectName(QStringLiteral("menuPlats"));
        menuIngr_dient = new QMenu(menubar);
        menuIngr_dient->setObjectName(QStringLiteral("menuIngr_dient"));
        Ingredient_plat->setMenuBar(menubar);

        menubar->addAction(menuPlats->menuAction());
        menubar->addAction(menuIngr_dient->menuAction());

        retranslateUi(Ingredient_plat);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Ingredient_plat);
    } // setupUi

    void retranslateUi(QMainWindow *Ingredient_plat)
    {
        Ingredient_plat->setWindowTitle(QApplication::translate("Ingredient_plat", "Plats et Ingredients", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Ingredient_plat", "PLATS", Q_NULLPTR));
        pushButton_rechercher->setText(QApplication::translate("Ingredient_plat", "Rechercher", Q_NULLPTR));
        label_saisir_2->setText(QApplication::translate("Ingredient_plat", "               Saisir le code de plat \303\240 chercher :", Q_NULLPTR));
        pushButton_imprimer_9->setText(QApplication::translate("Ingredient_plat", "Imprimer Design", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Afficher), QApplication::translate("Ingredient_plat", "Afficher des plats", Q_NULLPTR));
        ajouter_plat->setText(QApplication::translate("Ingredient_plat", "AJOUTER", Q_NULLPTR));
        label_date_plat->setText(QApplication::translate("Ingredient_plat", "Date jour :", Q_NULLPTR));
        label_matiere->setText(QApplication::translate("Ingredient_plat", "matiere :", Q_NULLPTR));
        label_code_plat->setText(QApplication::translate("Ingredient_plat", "Code plat :", Q_NULLPTR));
        label_cout->setText(QApplication::translate("Ingredient_plat", "Cout :", Q_NULLPTR));
        label_quantite->setText(QApplication::translate("Ingredient_plat", "Quantite :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Ajouter), QApplication::translate("Ingredient_plat", "Ajouter un plat", Q_NULLPTR));
        label_saisir->setText(QApplication::translate("Ingredient_plat", "               Saisir le code de plat \303\240 modifier   :", Q_NULLPTR));
        label_codeplatmodif->setText(QApplication::translate("Ingredient_plat", "Code Plat :", Q_NULLPTR));
        label_nouvcout->setText(QApplication::translate("Ingredient_plat", "Nouveau cout :", Q_NULLPTR));
        label_nouvmat->setText(QApplication::translate("Ingredient_plat", "Nouveau matiere :", Q_NULLPTR));
        modifierplat->setText(QApplication::translate("Ingredient_plat", "MODIFIER", Q_NULLPTR));
        label_nouvdate->setText(QApplication::translate("Ingredient_plat", "Nouveau date jour :", Q_NULLPTR));
        label_quantiteee->setText(QApplication::translate("Ingredient_plat", "Nouveau quantite :", Q_NULLPTR));
        lineEdit_quantitemodifplat->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Modifier), QApplication::translate("Ingredient_plat", "Modifier un plat", Q_NULLPTR));
        Supprimer->setProperty("kk", QVariant(QString()));
        label_supp->setText(QApplication::translate("Ingredient_plat", "Saisir le code du plat \303\240 supprimer :", Q_NULLPTR));
        label_codeplatsupp->setText(QApplication::translate("Ingredient_plat", "Code Plat :", Q_NULLPTR));
        supprimerplat->setText(QApplication::translate("Ingredient_plat", "SUPPRIMER", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Supprimer), QApplication::translate("Ingredient_plat", "Supprimer un plat", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Ingredient_plat", "Quitter", Q_NULLPTR));
        pushButton_9->setText(QString());
        pushButton_5->setText(QString());
        pushButton_trie->setText(QApplication::translate("Ingredient_plat", "Trier", Q_NULLPTR));
        pushButton_stat->setText(QApplication::translate("Ingredient_plat", "Statistique", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Afficher_2), QApplication::translate("Ingredient_plat", "Afficher ingr\303\251dients", Q_NULLPTR));
        label_code_ing->setText(QApplication::translate("Ingredient_plat", "Code Ing :", Q_NULLPTR));
        label_type_ing->setText(QApplication::translate("Ingredient_plat", "Type :", Q_NULLPTR));
        label_prix_ing->setText(QApplication::translate("Ingredient_plat", "Prix :", Q_NULLPTR));
        ajouter_ing->setText(QApplication::translate("Ingredient_plat", "AJOUTER", Q_NULLPTR));
        label_quantitee->setText(QApplication::translate("Ingredient_plat", "Quantite :", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Ajouter_2), QApplication::translate("Ingredient_plat", "Ajouter un ingr\303\251dient", Q_NULLPTR));
        label_code_ing_modif->setText(QApplication::translate("Ingredient_plat", "code Ing", Q_NULLPTR));
        label_saisir_ing->setText(QApplication::translate("Ingredient_plat", "Saisir le code de l'ingr\303\251dient \303\240 modifier   :", Q_NULLPTR));
        modifier_2->setText(QApplication::translate("Ingredient_plat", "MODIFIER", Q_NULLPTR));
        label_nouv_prix->setText(QApplication::translate("Ingredient_plat", "Nouveau  prix :", Q_NULLPTR));
        label_nouv_type_2->setText(QApplication::translate("Ingredient_plat", "Nouveau type : ", Q_NULLPTR));
        lineEdit_quantitemodiing->setText(QString());
        label_quantite_2->setText(QApplication::translate("Ingredient_plat", "Nouveau quantite :", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Modifier_2), QApplication::translate("Ingredient_plat", "Modifier un ingr\303\251dient", Q_NULLPTR));
        lineEdit_code_ingsupp->setText(QString());
        label_id_ingsupp->setText(QApplication::translate("Ingredient_plat", "Code Ing :", Q_NULLPTR));
        supprimer_2->setText(QApplication::translate("Ingredient_plat", "SUPPRIMER", Q_NULLPTR));
        label_supp_2->setText(QApplication::translate("Ingredient_plat", "Saisir le code de l'ingr\303\251dient \303\240 supprimer :", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Supprimer_2), QApplication::translate("Ingredient_plat", "Supprimer un ingr\303\251dient", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Ingredient_plat", "Quitter", Q_NULLPTR));
        pushButton_8->setText(QString());
        pushButton->setText(QApplication::translate("Ingredient_plat", "RETOUR", Q_NULLPTR));
        menuPlats->setTitle(QApplication::translate("Ingredient_plat", "Plats", Q_NULLPTR));
        menuIngr_dient->setTitle(QApplication::translate("Ingredient_plat", "Ingr\303\251dient", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Ingredient_plat: public Ui_Ingredient_plat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGREDIENT_PLAT_H
