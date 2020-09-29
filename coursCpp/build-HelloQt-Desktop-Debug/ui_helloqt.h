/********************************************************************************
** Form generated from reading UI file 'helloqt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOQT_H
#define UI_HELLOQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloQt
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HelloQt)
    {
        if (HelloQt->objectName().isEmpty())
            HelloQt->setObjectName(QString::fromUtf8("HelloQt"));
        HelloQt->resize(800, 600);
        centralwidget = new QWidget(HelloQt);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        HelloQt->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HelloQt);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        HelloQt->setMenuBar(menubar);
        statusbar = new QStatusBar(HelloQt);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HelloQt->setStatusBar(statusbar);

        retranslateUi(HelloQt);

        QMetaObject::connectSlotsByName(HelloQt);
    } // setupUi

    void retranslateUi(QMainWindow *HelloQt)
    {
        HelloQt->setWindowTitle(QApplication::translate("HelloQt", "HelloQt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloQt: public Ui_HelloQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOQT_H
