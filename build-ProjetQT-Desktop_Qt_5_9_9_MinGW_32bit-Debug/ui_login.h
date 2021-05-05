/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(1065, 604);
        login->setStyleSheet(QLatin1String("\n"
"background-image: url(:/images/background.jpg);"));
        frame = new QFrame(login);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(230, 0, 541, 511));
        frame->setStyleSheet(QStringLiteral("background-image: url(:/images/Empty.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 360, 251, 41));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
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
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 170, 301, 61));
        lineEdit->setMouseTracking(false);
        lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"border:2px solid #000;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 280, 301, 61));
        lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid gray;\n"
"border-radius: 8px;\n"
"border:2px solid #000;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
""));
        lineEdit_2->setMaxLength(8);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setDragEnabled(false);
        lineEdit_2->setReadOnly(false);
        lineEdit_2->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEdit_2->setClearButtonEnabled(false);
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 0, 121, 111));
        pushButton_3->setStyleSheet(QStringLiteral("image: url(:/new/restaurant-confortable-gens-serveur_175935-230.jpg);"));
        pushButton_2 = new QPushButton(login);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 550, 101, 41));
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

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Login", Q_NULLPTR));
        pushButton->setText(QApplication::translate("login", "Login ", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QApplication::translate("login", "Quitter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
