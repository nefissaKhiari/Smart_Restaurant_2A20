/********************************************************************************
** Form generated from reading UI file 'stati.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATI_H
#define UI_STATI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stati
{
public:
    QWidget *widget;
    QWidget *widget_4;
    QWidget *widget_5;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *widget_6;
    QLabel *label_2;

    void setupUi(QDialog *stati)
    {
        if (stati->objectName().isEmpty())
            stati->setObjectName(QStringLiteral("stati"));
        stati->resize(861, 481);
        widget = new QWidget(stati);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 31, 31));
        widget->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 255);"));
        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(10, 10, 16, 16));
        widget_4->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 255);"));
        widget_5 = new QWidget(stati);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(20, 90, 31, 31));
        widget_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label_4 = new QLabel(stati);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 90, 131, 31));
        QFont font;
        font.setPointSize(14);
        label_4->setFont(font);
        label_3 = new QLabel(stati);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 50, 91, 31));
        label_3->setFont(font);
        widget_6 = new QWidget(stati);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(20, 50, 31, 31));
        widget_6->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 0);"));
        label_2 = new QLabel(stati);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 10, 111, 31));
        label_2->setFont(font);

        retranslateUi(stati);

        QMetaObject::connectSlotsByName(stati);
    } // setupUi

    void retranslateUi(QDialog *stati)
    {
        stati->setWindowTitle(QApplication::translate("stati", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("stati", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("stati", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("stati", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class stati: public Ui_stati {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATI_H
