/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QLabel *titleLabel;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget_2;
    QWidget *chatPage_2;
    QGridLayout *gridLayout_4;
    QTextEdit *roomTextEdit_2;
    QListWidget *userListWidget_2;
    QLineEdit *sayLineEdit_2;
    QPushButton *sayButton_2;
    QWidget *loginPage_2;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QFrame *loginFrame_2;
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QLineEdit *serverLineEdit_2;
    QLabel *label_4;
    QLineEdit *userLineEdit_2;
    QPushButton *loginButton_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QStringLiteral("chat"));
        chat->resize(1003, 685);
        titleLabel = new QLabel(chat);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(0, -6, 800, 36));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        mainFrame = new QFrame(chat);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setGeometry(QRect(0, 30, 800, 564));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        verticalLayout_3 = new QVBoxLayout(mainFrame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        stackedWidget_2 = new QStackedWidget(mainFrame);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        chatPage_2 = new QWidget();
        chatPage_2->setObjectName(QStringLiteral("chatPage_2"));
        gridLayout_4 = new QGridLayout(chatPage_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        roomTextEdit_2 = new QTextEdit(chatPage_2);
        roomTextEdit_2->setObjectName(QStringLiteral("roomTextEdit_2"));
        roomTextEdit_2->setReadOnly(true);

        gridLayout_4->addWidget(roomTextEdit_2, 0, 0, 1, 1);

        userListWidget_2 = new QListWidget(chatPage_2);
        userListWidget_2->setObjectName(QStringLiteral("userListWidget_2"));

        gridLayout_4->addWidget(userListWidget_2, 0, 1, 1, 2);

        sayLineEdit_2 = new QLineEdit(chatPage_2);
        sayLineEdit_2->setObjectName(QStringLiteral("sayLineEdit_2"));

        gridLayout_4->addWidget(sayLineEdit_2, 1, 0, 1, 2);

        sayButton_2 = new QPushButton(chatPage_2);
        sayButton_2->setObjectName(QStringLiteral("sayButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sayButton_2->sizePolicy().hasHeightForWidth());
        sayButton_2->setSizePolicy(sizePolicy1);
        sayButton_2->setMaximumSize(QSize(50, 16777215));

        gridLayout_4->addWidget(sayButton_2, 1, 2, 1, 1);

        stackedWidget_2->addWidget(chatPage_2);
        loginPage_2 = new QWidget();
        loginPage_2->setObjectName(QStringLiteral("loginPage_2"));
        gridLayout_5 = new QGridLayout(loginPage_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalSpacer_3 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(223, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        loginFrame_2 = new QFrame(loginPage_2);
        loginFrame_2->setObjectName(QStringLiteral("loginFrame_2"));
        sizePolicy1.setHeightForWidth(loginFrame_2->sizePolicy().hasHeightForWidth());
        loginFrame_2->setSizePolicy(sizePolicy1);
        loginFrame_2->setMinimumSize(QSize(300, 0));
        loginFrame_2->setFrameShape(QFrame::StyledPanel);
        gridLayout_6 = new QGridLayout(loginFrame_2);
        gridLayout_6->setSpacing(20);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_3 = new QLabel(loginFrame_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);

        serverLineEdit_2 = new QLineEdit(loginFrame_2);
        serverLineEdit_2->setObjectName(QStringLiteral("serverLineEdit_2"));

        gridLayout_6->addWidget(serverLineEdit_2, 0, 1, 1, 1);

        label_4 = new QLabel(loginFrame_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_6->addWidget(label_4, 1, 0, 1, 1);

        userLineEdit_2 = new QLineEdit(loginFrame_2);
        userLineEdit_2->setObjectName(QStringLiteral("userLineEdit_2"));

        gridLayout_6->addWidget(userLineEdit_2, 1, 1, 1, 1);

        loginButton_2 = new QPushButton(loginFrame_2);
        loginButton_2->setObjectName(QStringLiteral("loginButton_2"));
        sizePolicy1.setHeightForWidth(loginButton_2->sizePolicy().hasHeightForWidth());
        loginButton_2->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(loginButton_2, 2, 1, 1, 1);


        gridLayout_5->addWidget(loginFrame_2, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(223, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 267, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 2, 1, 1, 1);

        stackedWidget_2->addWidget(loginPage_2);

        verticalLayout_3->addWidget(stackedWidget_2);


        retranslateUi(chat);

        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QDialog *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "Dialog", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("chat", "Chatter Box", Q_NULLPTR));
        sayButton_2->setText(QApplication::translate("chat", "Say", Q_NULLPTR));
        label_3->setText(QApplication::translate("chat", "Server name:", Q_NULLPTR));
        label_4->setText(QApplication::translate("chat", "User name:", Q_NULLPTR));
        loginButton_2->setText(QApplication::translate("chat", "Login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
