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

class Ui_chronometre
{
public:
    QWidget *centralwidget;
    QPushButton *start;
    QPushButton *stop;
    QPushButton *quit;
    QLCDNumber *lcdNumber;
    QPushButton *reset;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chronometre)
    {
        if (chronometre->objectName().isEmpty())
            chronometre->setObjectName(QString::fromUtf8("chronometre"));
        chronometre->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(117, 80, 123, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        chronometre->setPalette(palette);
        centralwidget = new QWidget(chronometre);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        centralwidget->setPalette(palette1);
        start = new QPushButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(0, 0, 461, 261));
        QPalette palette2;
        QBrush brush2(QColor(138, 226, 52, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        start->setPalette(palette2);
        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(460, 0, 341, 141));
        QPalette palette3;
        QBrush brush3(QColor(193, 125, 17, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        stop->setPalette(palette3);
        quit = new QPushButton(centralwidget);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(0, 260, 801, 291));
        QPalette palette4;
        QBrush brush4(QColor(255, 0, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        quit->setPalette(palette4);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(460, 140, 341, 121));
        QPalette palette5;
        QBrush brush5(QColor(239, 41, 41, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush6(QColor(190, 190, 190, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lcdNumber->setPalette(palette5);
        reset = new QPushButton(centralwidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(210, 140, 401, 211));
        QPalette palette6;
        QBrush brush7(QColor(114, 159, 207, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        reset->setPalette(palette6);
        chronometre->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chronometre);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        chronometre->setMenuBar(menubar);
        statusbar = new QStatusBar(chronometre);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        chronometre->setStatusBar(statusbar);

        retranslateUi(chronometre);

        QMetaObject::connectSlotsByName(chronometre);
    } // setupUi

    void retranslateUi(QMainWindow *chronometre)
    {
        chronometre->setWindowTitle(QApplication::translate("chronometre", "chronometre", nullptr));
        start->setText(QApplication::translate("chronometre", "start", nullptr));
        stop->setText(QApplication::translate("chronometre", "stop", nullptr));
        quit->setText(QApplication::translate("chronometre", "quit", nullptr));
        reset->setText(QApplication::translate("chronometre", "reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chronometre: public Ui_chronometre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHRONOMETRE_H
