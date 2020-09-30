/********************************************************************************
** Form generated from reading UI file 'mytimer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYTIMER_H
#define UI_MYTIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyTimer
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyTimer)
    {
        if (MyTimer->objectName().isEmpty())
            MyTimer->setObjectName(QString::fromUtf8("MyTimer"));
        MyTimer->resize(400, 300);
        menuBar = new QMenuBar(MyTimer);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MyTimer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyTimer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyTimer->addToolBar(mainToolBar);
        centralWidget = new QWidget(MyTimer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MyTimer->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MyTimer);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyTimer->setStatusBar(statusBar);

        retranslateUi(MyTimer);

        QMetaObject::connectSlotsByName(MyTimer);
    } // setupUi

    void retranslateUi(QMainWindow *MyTimer)
    {
        MyTimer->setWindowTitle(QApplication::translate("MyTimer", "MyTimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyTimer: public Ui_MyTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYTIMER_H
