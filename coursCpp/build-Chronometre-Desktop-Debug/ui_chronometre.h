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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
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
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 80, 89, 25));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 200, 89, 25));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 190, 89, 25));
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
        pushButton->setText(QApplication::translate("Chronometre", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("Chronometre", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("Chronometre", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chronometre: public Ui_Chronometre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHRONOMETRE_H
