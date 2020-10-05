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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chronometre
{
public:
    QWidget *centralWidget;
    QLCDNumber *lcdNumber;
    QPushButton *start;
    QPushButton *stop;
    QPushButton *reset;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Chronometre)
    {
        if (Chronometre->objectName().isEmpty())
            Chronometre->setObjectName(QString::fromUtf8("Chronometre"));
        Chronometre->resize(400, 300);
        centralWidget = new QWidget(Chronometre);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(290, 70, 91, 51));
        start = new QPushButton(centralWidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(140, 70, 89, 25));
        stop = new QPushButton(centralWidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(30, 200, 89, 25));
        reset = new QPushButton(centralWidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(260, 190, 89, 25));
        Chronometre->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Chronometre);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        Chronometre->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Chronometre);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Chronometre->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Chronometre);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Chronometre->setStatusBar(statusBar);

        retranslateUi(Chronometre);

        QMetaObject::connectSlotsByName(Chronometre);
    } // setupUi

    void retranslateUi(QMainWindow *Chronometre)
    {
        Chronometre->setWindowTitle(QApplication::translate("Chronometre", "Chronometre", nullptr));
        start->setText(QApplication::translate("Chronometre", "start", nullptr));
        stop->setText(QApplication::translate("Chronometre", "stop", nullptr));
        reset->setText(QApplication::translate("Chronometre", "reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chronometre: public Ui_Chronometre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHRONOMETRE_H
