/********************************************************************************
** Form generated from reading UI file 'chronometre.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHRONOMETRE_H
#define UI_CHRONOMETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chronometre
{
public:
    QWidget *centralwidget;
    QPushButton *start;
    QPushButton *quit;
    QPushButton *stop;
    QLCDNumber *lcdNumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Chronometre)
    {
        if (Chronometre->objectName().isEmpty())
            Chronometre->setObjectName(QString::fromUtf8("Chronometre"));
        Chronometre->resize(616, 554);
        centralwidget = new QWidget(Chronometre);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        start = new QPushButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(40, 30, 231, 241));
        quit = new QPushButton(centralwidget);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(40, 310, 541, 191));
        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(280, 30, 301, 271));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(40, 270, 231, 31));
        Chronometre->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Chronometre);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 616, 22));
        Chronometre->setMenuBar(menubar);
        statusbar = new QStatusBar(Chronometre);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Chronometre->setStatusBar(statusbar);

        retranslateUi(Chronometre);

        QMetaObject::connectSlotsByName(Chronometre);
    } // setupUi

    void retranslateUi(QMainWindow *Chronometre)
    {
        Chronometre->setWindowTitle(QApplication::translate("Chronometre", "Chronometre", nullptr));
        start->setText(QApplication::translate("Chronometre", "start", nullptr));
        quit->setText(QApplication::translate("Chronometre", "quit", nullptr));
        stop->setText(QApplication::translate("Chronometre", "stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chronometre: public Ui_Chronometre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHRONOMETRE_H
