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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloQt
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HelloQt)
    {
        if (HelloQt->objectName().isEmpty())
            HelloQt->setObjectName(QString::fromUtf8("HelloQt"));
        HelloQt->resize(448, 208);
        centralWidget = new QWidget(HelloQt);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        HelloQt->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HelloQt);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 448, 22));
        HelloQt->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HelloQt);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HelloQt->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HelloQt);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HelloQt->setStatusBar(statusBar);

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
