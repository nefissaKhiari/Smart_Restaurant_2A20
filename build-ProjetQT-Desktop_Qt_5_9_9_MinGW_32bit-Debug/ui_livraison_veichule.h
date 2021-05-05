/********************************************************************************
** Form generated from reading UI file 'livraison_veichule.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIVRAISON_VEICHULE_H
#define UI_LIVRAISON_VEICHULE_H

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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Livraison_veichule
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *Afficher;
    QTableView *tableveh;
    QPushButton *pushButton_9;
    QTableView *tableveh2;
    QWidget *Ajouter;
    QPushButton *ajouter_vehicule;
    QLineEdit *lineEdit_type;
    QLabel *label_matiere;
    QLabel *label_disp;
    QLineEdit *lineEdit_mat;
    QLabel *label_disp_2;
    QLineEdit *lineEdit_disp;
    QDateEdit *dateEdit;
    QWidget *Modifier;
    QLineEdit *lineEdit_mat_modif;
    QLineEdit *lineEdit_nouvdisp;
    QLabel *label_nouvdisp;
    QLabel *label_nouvtype;
    QLineEdit *lineEdit_typemodif;
    QPushButton *modifierveh;
    QDateEdit *dateEdit_2;
    QLabel *label_matmodif;
    QWidget *Supprimer;
    QLabel *label_matsupp;
    QLineEdit *lineEdit_matsupp;
    QPushButton *supprimerveh;
    QWidget *page_2;
    QPushButton *pushButton_5;
    QTabWidget *tabWidget_2;
    QWidget *Afficher_2;
    QTableView *tablelivraison;
    QPushButton *pushButton_trie;
    QLabel *label_3;
    QLineEdit *lineEdit_sr;
    QPushButton *pushButton_search_liv;
    QPushButton *pushButton_8;
    QPushButton *pushButton_statistique;
    QWidget *tab;
    QTableView *tablelsaber;
    QLabel *label;
    QLabel *label_2;
    QTableView *tablelaziz;
    QLabel *label_4;
    QTableView *tableali;
    QWidget *Ajouter_2;
    QLabel *label_idliv;
    QLabel *label_livreur;
    QLabel *label_dest;
    QLineEdit *lineEdit_idliv;
    QLineEdit *lineEdit_dest;
    QPushButton *ajouter_liv;
    QComboBox *comboBox;
    QDateEdit *dateEdit_3;
    QWidget *Modifier_2;
    QLabel *label_idliv_modif;
    QPushButton *modifier_2;
    QLineEdit *lineEdit_idliv_modifier;
    QLabel *label_nouv_dest;
    QLabel *label_nouv_liveur;
    QLineEdit *lineEdit_nouv_dest;
    QComboBox *comboBox2;
    QDateEdit *dateEdit_4;
    QWidget *Supprimer_2;
    QLineEdit *lineEdit_idliv_supp;
    QLabel *label_id_ingsupp;
    QPushButton *supprimer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Livraison_veichule)
    {
        if (Livraison_veichule->objectName().isEmpty())
            Livraison_veichule->setObjectName(QStringLiteral("Livraison_veichule"));
        Livraison_veichule->resize(1020, 553);
        Livraison_veichule->setContextMenuPolicy(Qt::ActionsContextMenu);
        centralwidget = new QWidget(Livraison_veichule);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
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
        stackedWidget->setGeometry(QRect(0, 10, 981, 541));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 1011, 471));
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
        tableveh = new QTableView(Afficher);
        tableveh->setObjectName(QStringLiteral("tableveh"));
        tableveh->setGeometry(QRect(10, 20, 571, 331));
        tableveh->setStyleSheet(QStringLiteral("background-image: url(:/new/white.png);"));
        pushButton_9 = new QPushButton(Afficher);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(920, 20, 41, 41));
        pushButton_9->setStyleSheet(QLatin1String("background:none;\n"
"border-radius:10px;\n"
"border-image: url(:/new/next.png);"));
        tableveh2 = new QTableView(Afficher);
        tableveh2->setObjectName(QStringLiteral("tableveh2"));
        tableveh2->setGeometry(QRect(640, 80, 261, 271));
        tableveh2->setStyleSheet(QStringLiteral("background-image: url(:/new/white.png);"));
        tabWidget->addTab(Afficher, QString());
        Ajouter = new QWidget();
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        ajouter_vehicule = new QPushButton(Ajouter);
        ajouter_vehicule->setObjectName(QStringLiteral("ajouter_vehicule"));
        ajouter_vehicule->setGeometry(QRect(330, 210, 121, 41));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 139, 234, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 255, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 127, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 170, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush10(QColor(255, 255, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        ajouter_vehicule->setPalette(palette);
        QFont font1;
        font1.setFamily(QStringLiteral("century gothic"));
        font1.setBold(true);
        font1.setWeight(75);
        ajouter_vehicule->setFont(font1);
        lineEdit_type = new QLineEdit(Ajouter);
        lineEdit_type->setObjectName(QStringLiteral("lineEdit_type"));
        lineEdit_type->setGeometry(QRect(300, 110, 191, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush12(QColor(255, 170, 127, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush13(QColor(127, 127, 127, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(170, 170, 170, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush15(QColor(0, 0, 0, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush16(QColor(0, 0, 0, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush17(QColor(0, 0, 0, 128));
        brush17.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        lineEdit_type->setPalette(palette1);
        lineEdit_type->setFont(font1);
        lineEdit_type->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_type->setMaxLength(8);
        lineEdit_type->setAlignment(Qt::AlignCenter);
        label_matiere = new QLabel(Ajouter);
        label_matiere->setObjectName(QStringLiteral("label_matiere"));
        label_matiere->setGeometry(QRect(160, 110, 81, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush18(QColor(85, 0, 0, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush18);
        QBrush brush19(QColor(255, 127, 127, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush19);
        QBrush brush20(QColor(255, 63, 63, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush20);
        QBrush brush21(QColor(127, 0, 0, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush21);
        QBrush brush22(QColor(170, 0, 0, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush22);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush18);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush19);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush23(QColor(0, 0, 0, 128));
        brush23.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush23);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush20);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush21);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush22);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush23);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush21);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush24(QColor(255, 0, 0, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush24);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush23);
#endif
        label_matiere->setPalette(palette2);
        label_matiere->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        label_disp = new QLabel(Ajouter);
        label_disp->setObjectName(QStringLiteral("label_disp"));
        label_disp->setGeometry(QRect(160, 60, 91, 31));
        label_disp->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_mat = new QLineEdit(Ajouter);
        lineEdit_mat->setObjectName(QStringLiteral("lineEdit_mat"));
        lineEdit_mat->setGeometry(QRect(300, 60, 191, 31));
        lineEdit_mat->setFont(font1);
        lineEdit_mat->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_mat->setMaxLength(8);
        lineEdit_mat->setAlignment(Qt::AlignCenter);
        label_disp_2 = new QLabel(Ajouter);
        label_disp_2->setObjectName(QStringLiteral("label_disp_2"));
        label_disp_2->setGeometry(QRect(150, 170, 101, 31));
        label_disp_2->setAutoFillBackground(false);
        label_disp_2->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_disp = new QLineEdit(Ajouter);
        lineEdit_disp->setObjectName(QStringLiteral("lineEdit_disp"));
        lineEdit_disp->setGeometry(QRect(300, 170, 191, 31));
        lineEdit_disp->setFont(font1);
        lineEdit_disp->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_disp->setMaxLength(8);
        lineEdit_disp->setAlignment(Qt::AlignCenter);
        dateEdit = new QDateEdit(Ajouter);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(550, 120, 110, 22));
        tabWidget->addTab(Ajouter, QString());
        Modifier = new QWidget();
        Modifier->setObjectName(QStringLiteral("Modifier"));
        lineEdit_mat_modif = new QLineEdit(Modifier);
        lineEdit_mat_modif->setObjectName(QStringLiteral("lineEdit_mat_modif"));
        lineEdit_mat_modif->setGeometry(QRect(300, 123, 191, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush25(QColor(0, 0, 0, 128));
        brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush25);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush26(QColor(0, 0, 0, 128));
        brush26.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush27(QColor(0, 0, 0, 128));
        brush27.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        lineEdit_mat_modif->setPalette(palette3);
        lineEdit_mat_modif->setFont(font1);
        lineEdit_mat_modif->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_mat_modif->setMaxLength(8);
        lineEdit_mat_modif->setAlignment(Qt::AlignCenter);
        lineEdit_nouvdisp = new QLineEdit(Modifier);
        lineEdit_nouvdisp->setObjectName(QStringLiteral("lineEdit_nouvdisp"));
        lineEdit_nouvdisp->setGeometry(QRect(300, 240, 191, 31));
        lineEdit_nouvdisp->setFont(font1);
        lineEdit_nouvdisp->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_nouvdisp->setMaxLength(8);
        lineEdit_nouvdisp->setAlignment(Qt::AlignCenter);
        label_nouvdisp = new QLabel(Modifier);
        label_nouvdisp->setObjectName(QStringLiteral("label_nouvdisp"));
        label_nouvdisp->setGeometry(QRect(110, 240, 161, 31));
        label_nouvdisp->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        label_nouvtype = new QLabel(Modifier);
        label_nouvtype->setObjectName(QStringLiteral("label_nouvtype"));
        label_nouvtype->setGeometry(QRect(130, 180, 121, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush18);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush18);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush18);
        QBrush brush28(QColor(255, 255, 255, 128));
        brush28.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush28);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        QBrush brush29(QColor(255, 255, 255, 128));
        brush29.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush29);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        QBrush brush30(QColor(255, 255, 255, 128));
        brush30.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush30);
#endif
        label_nouvtype->setPalette(palette4);
        label_nouvtype->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_typemodif = new QLineEdit(Modifier);
        lineEdit_typemodif->setObjectName(QStringLiteral("lineEdit_typemodif"));
        lineEdit_typemodif->setGeometry(QRect(300, 180, 191, 31));
        lineEdit_typemodif->setFont(font1);
        lineEdit_typemodif->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_typemodif->setMaxLength(8);
        lineEdit_typemodif->setAlignment(Qt::AlignCenter);
        modifierveh = new QPushButton(Modifier);
        modifierveh->setObjectName(QStringLiteral("modifierveh"));
        modifierveh->setGeometry(QRect(330, 330, 131, 41));
        modifierveh->setFont(font1);
        dateEdit_2 = new QDateEdit(Modifier);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(340, 290, 110, 22));
        label_matmodif = new QLabel(Modifier);
        label_matmodif->setObjectName(QStringLiteral("label_matmodif"));
        label_matmodif->setGeometry(QRect(150, 120, 91, 31));
        label_matmodif->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        tabWidget->addTab(Modifier, QString());
        Supprimer = new QWidget();
        Supprimer->setObjectName(QStringLiteral("Supprimer"));
        Supprimer->setMaximumSize(QSize(797, 16777215));
        QFont font2;
        font2.setFamily(QStringLiteral("century gothic"));
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        Supprimer->setFont(font2);
        label_matsupp = new QLabel(Supprimer);
        label_matsupp->setObjectName(QStringLiteral("label_matsupp"));
        label_matsupp->setGeometry(QRect(160, 110, 101, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("century gothic"));
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_matsupp->setFont(font3);
        label_matsupp->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_matsupp = new QLineEdit(Supprimer);
        lineEdit_matsupp->setObjectName(QStringLiteral("lineEdit_matsupp"));
        lineEdit_matsupp->setGeometry(QRect(280, 110, 161, 31));
        lineEdit_matsupp->setFont(font1);
        lineEdit_matsupp->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_matsupp->setMaxLength(8);
        lineEdit_matsupp->setAlignment(Qt::AlignCenter);
        supprimerveh = new QPushButton(Supprimer);
        supprimerveh->setObjectName(QStringLiteral("supprimerveh"));
        supprimerveh->setGeometry(QRect(450, 110, 121, 41));
        supprimerveh->setFont(font2);
        tabWidget->addTab(Supprimer, QString());
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
        tabWidget_2->setGeometry(QRect(-10, 0, 1091, 541));
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
"{color :black;\n"
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
        tablelivraison = new QTableView(Afficher_2);
        tablelivraison->setObjectName(QStringLiteral("tablelivraison"));
        tablelivraison->setGeometry(QRect(20, 10, 631, 341));
        tablelivraison->setStyleSheet(QStringLiteral("background-image: url(:/new/white.png);"));
        pushButton_trie = new QPushButton(Afficher_2);
        pushButton_trie->setObjectName(QStringLiteral("pushButton_trie"));
        pushButton_trie->setGeometry(QRect(670, 180, 151, 41));
        label_3 = new QLabel(Afficher_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 380, 121, 41));
        label_3->setStyleSheet(QStringLiteral("color : rgb(255, 255, 255);"));
        lineEdit_sr = new QLineEdit(Afficher_2);
        lineEdit_sr->setObjectName(QStringLiteral("lineEdit_sr"));
        lineEdit_sr->setGeometry(QRect(280, 380, 201, 41));
        pushButton_search_liv = new QPushButton(Afficher_2);
        pushButton_search_liv->setObjectName(QStringLiteral("pushButton_search_liv"));
        pushButton_search_liv->setGeometry(QRect(500, 370, 91, 41));
        pushButton_8 = new QPushButton(Afficher_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(700, 60, 41, 41));
        pushButton_8->setStyleSheet(QLatin1String("\n"
"background:none;\n"
"border-radius:10px;\n"
"border-image: url(:/new/next1.png);"));
        pushButton_statistique = new QPushButton(Afficher_2);
        pushButton_statistique->setObjectName(QStringLiteral("pushButton_statistique"));
        pushButton_statistique->setGeometry(QRect(680, 120, 131, 41));
        tabWidget_2->addTab(Afficher_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tablelsaber = new QTableView(tab);
        tablelsaber->setObjectName(QStringLiteral("tablelsaber"));
        tablelsaber->setGeometry(QRect(10, 50, 221, 341));
        tablelsaber->setStyleSheet(QStringLiteral("background-image: url(:/new/white.png);"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 141, 31));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(276, 9, 131, 31));
        tablelaziz = new QTableView(tab);
        tablelaziz->setObjectName(QStringLiteral("tablelaziz"));
        tablelaziz->setGeometry(QRect(250, 50, 221, 341));
        tablelaziz->setStyleSheet(QStringLiteral("background-image: url(:/new/white.png);"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(506, 9, 131, 31));
        tableali = new QTableView(tab);
        tableali->setObjectName(QStringLiteral("tableali"));
        tableali->setGeometry(QRect(490, 50, 221, 341));
        tableali->setStyleSheet(QStringLiteral("background-image: url(:/new/white.png);"));
        tabWidget_2->addTab(tab, QString());
        Ajouter_2 = new QWidget();
        Ajouter_2->setObjectName(QStringLiteral("Ajouter_2"));
        label_idliv = new QLabel(Ajouter_2);
        label_idliv->setObjectName(QStringLiteral("label_idliv"));
        label_idliv->setGeometry(QRect(110, 70, 81, 31));
        label_idliv->setFont(font);
        label_idliv->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        label_idliv->setTextFormat(Qt::AutoText);
        label_livreur = new QLabel(Ajouter_2);
        label_livreur->setObjectName(QStringLiteral("label_livreur"));
        label_livreur->setGeometry(QRect(110, 140, 81, 31));
        label_livreur->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        label_dest = new QLabel(Ajouter_2);
        label_dest->setObjectName(QStringLiteral("label_dest"));
        label_dest->setGeometry(QRect(110, 200, 81, 31));
        label_dest->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        lineEdit_idliv = new QLineEdit(Ajouter_2);
        lineEdit_idliv->setObjectName(QStringLiteral("lineEdit_idliv"));
        lineEdit_idliv->setGeometry(QRect(260, 80, 181, 31));
        lineEdit_idliv->setFont(font1);
        lineEdit_idliv->setLayoutDirection(Qt::LeftToRight);
        lineEdit_idliv->setStyleSheet(QLatin1String("\n"
"border-radius:15px;\n"
"color : rgb(255, 255, 255);"));
        lineEdit_idliv->setLocale(QLocale(QLocale::French, QLocale::France));
        lineEdit_idliv->setMaxLength(8);
        lineEdit_idliv->setCursorPosition(0);
        lineEdit_idliv->setAlignment(Qt::AlignCenter);
        lineEdit_dest = new QLineEdit(Ajouter_2);
        lineEdit_dest->setObjectName(QStringLiteral("lineEdit_dest"));
        lineEdit_dest->setGeometry(QRect(260, 200, 181, 31));
        lineEdit_dest->setFont(font1);
        lineEdit_dest->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_dest->setMaxLength(8);
        lineEdit_dest->setAlignment(Qt::AlignCenter);
        ajouter_liv = new QPushButton(Ajouter_2);
        ajouter_liv->setObjectName(QStringLiteral("ajouter_liv"));
        ajouter_liv->setGeometry(QRect(300, 250, 121, 41));
        ajouter_liv->setFont(font1);
        comboBox = new QComboBox(Ajouter_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(260, 140, 171, 31));
        comboBox->setFont(font1);
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
        dateEdit_3 = new QDateEdit(Ajouter_2);
        dateEdit_3->setObjectName(QStringLiteral("dateEdit_3"));
        dateEdit_3->setGeometry(QRect(490, 150, 110, 22));
        tabWidget_2->addTab(Ajouter_2, QString());
        Modifier_2 = new QWidget();
        Modifier_2->setObjectName(QStringLiteral("Modifier_2"));
        label_idliv_modif = new QLabel(Modifier_2);
        label_idliv_modif->setObjectName(QStringLiteral("label_idliv_modif"));
        label_idliv_modif->setGeometry(QRect(140, 110, 91, 31));
        label_idliv_modif->setFont(font);
        label_idliv_modif->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;\n"
"background:#ffaa00;"));
        modifier_2 = new QPushButton(Modifier_2);
        modifier_2->setObjectName(QStringLiteral("modifier_2"));
        modifier_2->setGeometry(QRect(300, 320, 121, 41));
        modifier_2->setFont(font1);
        lineEdit_idliv_modifier = new QLineEdit(Modifier_2);
        lineEdit_idliv_modifier->setObjectName(QStringLiteral("lineEdit_idliv_modifier"));
        lineEdit_idliv_modifier->setGeometry(QRect(290, 110, 191, 31));
        lineEdit_idliv_modifier->setFont(font1);
        lineEdit_idliv_modifier->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_idliv_modifier->setMaxLength(8);
        lineEdit_idliv_modifier->setAlignment(Qt::AlignCenter);
        label_nouv_dest = new QLabel(Modifier_2);
        label_nouv_dest->setObjectName(QStringLiteral("label_nouv_dest"));
        label_nouv_dest->setGeometry(QRect(130, 230, 141, 31));
        label_nouv_dest->setStyleSheet(QLatin1String("color:white;\n"
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
        label_nouv_liveur = new QLabel(Modifier_2);
        label_nouv_liveur->setObjectName(QStringLiteral("label_nouv_liveur"));
        label_nouv_liveur->setGeometry(QRect(130, 170, 121, 31));
        label_nouv_liveur->setStyleSheet(QLatin1String("color:white;\n"
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
        lineEdit_nouv_dest = new QLineEdit(Modifier_2);
        lineEdit_nouv_dest->setObjectName(QStringLiteral("lineEdit_nouv_dest"));
        lineEdit_nouv_dest->setGeometry(QRect(300, 230, 191, 31));
        lineEdit_nouv_dest->setFont(font1);
        lineEdit_nouv_dest->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_nouv_dest->setMaxLength(8);
        lineEdit_nouv_dest->setAlignment(Qt::AlignCenter);
        comboBox2 = new QComboBox(Modifier_2);
        comboBox2->setObjectName(QStringLiteral("comboBox2"));
        comboBox2->setGeometry(QRect(290, 170, 191, 31));
        comboBox2->setFont(font1);
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
        dateEdit_4 = new QDateEdit(Modifier_2);
        dateEdit_4->setObjectName(QStringLiteral("dateEdit_4"));
        dateEdit_4->setGeometry(QRect(340, 270, 110, 22));
        tabWidget_2->addTab(Modifier_2, QString());
        Supprimer_2 = new QWidget();
        Supprimer_2->setObjectName(QStringLiteral("Supprimer_2"));
        lineEdit_idliv_supp = new QLineEdit(Supprimer_2);
        lineEdit_idliv_supp->setObjectName(QStringLiteral("lineEdit_idliv_supp"));
        lineEdit_idliv_supp->setGeometry(QRect(260, 130, 151, 31));
        lineEdit_idliv_supp->setFont(font1);
        lineEdit_idliv_supp->setStyleSheet(QLatin1String("border-radius:15px;\n"
""));
        lineEdit_idliv_supp->setMaxLength(8);
        lineEdit_idliv_supp->setAlignment(Qt::AlignCenter);
        label_id_ingsupp = new QLabel(Supprimer_2);
        label_id_ingsupp->setObjectName(QStringLiteral("label_id_ingsupp"));
        label_id_ingsupp->setGeometry(QRect(170, 130, 71, 31));
        label_id_ingsupp->setFont(font3);
        label_id_ingsupp->setStyleSheet(QLatin1String("color:white;\n"
"border-radius:15px;"));
        supprimer_2 = new QPushButton(Supprimer_2);
        supprimer_2->setObjectName(QStringLiteral("supprimer_2"));
        supprimer_2->setGeometry(QRect(420, 130, 121, 41));
        supprimer_2->setFont(font2);
        tabWidget_2->addTab(Supprimer_2, QString());
        stackedWidget->addWidget(page_2);
        Livraison_veichule->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Livraison_veichule);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1020, 26));
        Livraison_veichule->setMenuBar(menubar);
        statusbar = new QStatusBar(Livraison_veichule);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Livraison_veichule->setStatusBar(statusbar);

        retranslateUi(Livraison_veichule);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Livraison_veichule);
    } // setupUi

    void retranslateUi(QMainWindow *Livraison_veichule)
    {
        Livraison_veichule->setWindowTitle(QApplication::translate("Livraison_veichule", "Livraisons et Veichules", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Livraison_veichule", "Restau", Q_NULLPTR));
        pushButton_9->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Afficher), QApplication::translate("Livraison_veichule", "Afficher des v\303\251hicules", Q_NULLPTR));
        ajouter_vehicule->setText(QApplication::translate("Livraison_veichule", "AJOUTER", Q_NULLPTR));
        label_matiere->setText(QApplication::translate("Livraison_veichule", "Type", Q_NULLPTR));
        label_disp->setText(QApplication::translate("Livraison_veichule", "Matricule ", Q_NULLPTR));
        label_disp_2->setText(QApplication::translate("Livraison_veichule", "Disponibilit\303\251", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Ajouter), QApplication::translate("Livraison_veichule", "Ajouter une v\303\251hicule ", Q_NULLPTR));
        label_nouvdisp->setText(QApplication::translate("Livraison_veichule", "Disponibilit\303\251 :", Q_NULLPTR));
        label_nouvtype->setText(QApplication::translate("Livraison_veichule", "Nouveau Type :", Q_NULLPTR));
        modifierveh->setText(QApplication::translate("Livraison_veichule", "MODIFIER", Q_NULLPTR));
        label_matmodif->setText(QApplication::translate("Livraison_veichule", "Matricule ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Modifier), QApplication::translate("Livraison_veichule", "Modifier une v\303\251hicule ", Q_NULLPTR));
        Supprimer->setProperty("kk", QVariant(QString()));
        label_matsupp->setText(QApplication::translate("Livraison_veichule", "Matricule", Q_NULLPTR));
        supprimerveh->setText(QApplication::translate("Livraison_veichule", "SUPPRIMER", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Supprimer), QApplication::translate("Livraison_veichule", "Supprimer une v\303\251hicule ", Q_NULLPTR));
        pushButton_5->setText(QString());
        pushButton_trie->setText(QApplication::translate("Livraison_veichule", "Trier/Actualiser", Q_NULLPTR));
        label_3->setText(QApplication::translate("Livraison_veichule", "Recherche par ID", Q_NULLPTR));
        pushButton_search_liv->setText(QApplication::translate("Livraison_veichule", "Recherche", Q_NULLPTR));
        pushButton_8->setText(QString());
        pushButton_statistique->setText(QApplication::translate("Livraison_veichule", "Statistique", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Afficher_2), QApplication::translate("Livraison_veichule", "Afficher une livraison", Q_NULLPTR));
        label->setText(QApplication::translate("Livraison_veichule", "Les livraison de Saber", Q_NULLPTR));
        label_2->setText(QApplication::translate("Livraison_veichule", "Les livraison de Aziz", Q_NULLPTR));
        label_4->setText(QApplication::translate("Livraison_veichule", "Les livraison de Ali", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("Livraison_veichule", "Statistique", Q_NULLPTR));
        label_idliv->setText(QApplication::translate("Livraison_veichule", "ID LIV :", Q_NULLPTR));
        label_livreur->setText(QApplication::translate("Livraison_veichule", "Livreur :", Q_NULLPTR));
        label_dest->setText(QApplication::translate("Livraison_veichule", "Destination :", Q_NULLPTR));
        ajouter_liv->setText(QApplication::translate("Livraison_veichule", "AJOUTER", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Ajouter_2), QApplication::translate("Livraison_veichule", "Ajouter une livraison", Q_NULLPTR));
        label_idliv_modif->setText(QApplication::translate("Livraison_veichule", "ID LIV MODIF", Q_NULLPTR));
        modifier_2->setText(QApplication::translate("Livraison_veichule", "MODIFIER", Q_NULLPTR));
        label_nouv_dest->setText(QApplication::translate("Livraison_veichule", "Nouveau destination :", Q_NULLPTR));
        label_nouv_liveur->setText(QApplication::translate("Livraison_veichule", "Nouveau livreur : ", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Modifier_2), QApplication::translate("Livraison_veichule", "Modifier une livraison", Q_NULLPTR));
        lineEdit_idliv_supp->setText(QString());
        label_id_ingsupp->setText(QApplication::translate("Livraison_veichule", "ID LIV :", Q_NULLPTR));
        supprimer_2->setText(QApplication::translate("Livraison_veichule", "SUPPRIMER", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Supprimer_2), QApplication::translate("Livraison_veichule", "Supprimer une livraison", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Livraison_veichule: public Ui_Livraison_veichule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVRAISON_VEICHULE_H
