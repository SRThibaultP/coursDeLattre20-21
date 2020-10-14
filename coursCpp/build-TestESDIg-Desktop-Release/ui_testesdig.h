/********************************************************************************
** Form generated from reading UI file 'testesdig.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTESDIG_H
#define UI_TESTESDIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestESDIg
{
public:
    QWidget *centralwidget;
    QLabel *txtbarriereEntree;
    QLabel *txtbarriereSortie;
    QGroupBox *barriereEntree;
    QRadioButton *ArretBE;
    QRadioButton *MonteeBE;
    QRadioButton *DescenteBE;
    QGroupBox *barriereSortie;
    QRadioButton *ArretBS;
    QRadioButton *MonteeBS;
    QRadioButton *DescenteBS;
    QPushButton *modifierAfficheur;
    QSpinBox *spinBox;
    QLabel *txtposBarriereEntree;
    QLabel *txtposBarriereSortie;
    QPushButton *niveauEntree;
    QPushButton *niveauSortie;
    QSlider *sliderEntree;
    QSlider *sliderSortie;
    QPushButton *etatBPE;
    QPushButton *etatBPS;
    QPushButton *presenceVehiculeEntree;
    QPushButton *presenceVehiculeSortie;
    QWidget *gridWidgetBT1;
    QGridLayout *gridLayoutBT1;
    QLabel *labelBT1;
    QWidget *gridWidgetBT2;
    QGridLayout *gridLayoutBT2;
    QLabel *labelBT2;
    QWidget *gridWidgetBT3;
    QGridLayout *gridLayoutBT3;
    QLabel *labelBT3;
    QWidget *gridWidgetBT4;
    QGridLayout *gridLayoutBT4;
    QLabel *labelBT4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestESDIg)
    {
        if (TestESDIg->objectName().isEmpty())
            TestESDIg->setObjectName(QString::fromUtf8("TestESDIg"));
        TestESDIg->resize(800, 852);
        centralwidget = new QWidget(TestESDIg);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        txtbarriereEntree = new QLabel(centralwidget);
        txtbarriereEntree->setObjectName(QString::fromUtf8("txtbarriereEntree"));
        txtbarriereEntree->setGeometry(QRect(70, 60, 151, 17));
        txtbarriereSortie = new QLabel(centralwidget);
        txtbarriereSortie->setObjectName(QString::fromUtf8("txtbarriereSortie"));
        txtbarriereSortie->setGeometry(QRect(460, 50, 181, 17));
        barriereEntree = new QGroupBox(centralwidget);
        barriereEntree->setObjectName(QString::fromUtf8("barriereEntree"));
        barriereEntree->setGeometry(QRect(50, 80, 211, 151));
        ArretBE = new QRadioButton(barriereEntree);
        ArretBE->setObjectName(QString::fromUtf8("ArretBE"));
        ArretBE->setGeometry(QRect(10, 40, 201, 23));
        MonteeBE = new QRadioButton(barriereEntree);
        MonteeBE->setObjectName(QString::fromUtf8("MonteeBE"));
        MonteeBE->setGeometry(QRect(10, 70, 281, 23));
        DescenteBE = new QRadioButton(barriereEntree);
        DescenteBE->setObjectName(QString::fromUtf8("DescenteBE"));
        DescenteBE->setGeometry(QRect(10, 100, 291, 23));
        barriereSortie = new QGroupBox(centralwidget);
        barriereSortie->setObjectName(QString::fromUtf8("barriereSortie"));
        barriereSortie->setGeometry(QRect(430, 70, 211, 141));
        ArretBS = new QRadioButton(barriereSortie);
        ArretBS->setObjectName(QString::fromUtf8("ArretBS"));
        ArretBS->setGeometry(QRect(10, 40, 201, 23));
        MonteeBS = new QRadioButton(barriereSortie);
        MonteeBS->setObjectName(QString::fromUtf8("MonteeBS"));
        MonteeBS->setGeometry(QRect(10, 70, 281, 23));
        DescenteBS = new QRadioButton(barriereSortie);
        DescenteBS->setObjectName(QString::fromUtf8("DescenteBS"));
        DescenteBS->setGeometry(QRect(10, 100, 291, 23));
        modifierAfficheur = new QPushButton(centralwidget);
        modifierAfficheur->setObjectName(QString::fromUtf8("modifierAfficheur"));
        modifierAfficheur->setGeometry(QRect(60, 270, 141, 25));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(270, 270, 48, 26));
        txtposBarriereEntree = new QLabel(centralwidget);
        txtposBarriereEntree->setObjectName(QString::fromUtf8("txtposBarriereEntree"));
        txtposBarriereEntree->setGeometry(QRect(110, 310, 191, 20));
        txtposBarriereSortie = new QLabel(centralwidget);
        txtposBarriereSortie->setObjectName(QString::fromUtf8("txtposBarriereSortie"));
        txtposBarriereSortie->setGeometry(QRect(460, 310, 241, 17));
        niveauEntree = new QPushButton(centralwidget);
        niveauEntree->setObjectName(QString::fromUtf8("niveauEntree"));
        niveauEntree->setGeometry(QRect(10, 430, 121, 25));
        niveauSortie = new QPushButton(centralwidget);
        niveauSortie->setObjectName(QString::fromUtf8("niveauSortie"));
        niveauSortie->setGeometry(QRect(650, 420, 131, 25));
        sliderEntree = new QSlider(centralwidget);
        sliderEntree->setObjectName(QString::fromUtf8("sliderEntree"));
        sliderEntree->setGeometry(QRect(190, 350, 16, 160));
        sliderEntree->setOrientation(Qt::Vertical);
        sliderSortie = new QSlider(centralwidget);
        sliderSortie->setObjectName(QString::fromUtf8("sliderSortie"));
        sliderSortie->setGeometry(QRect(540, 340, 16, 160));
        sliderSortie->setOrientation(Qt::Vertical);
        etatBPE = new QPushButton(centralwidget);
        etatBPE->setObjectName(QString::fromUtf8("etatBPE"));
        etatBPE->setGeometry(QRect(150, 550, 89, 25));
        etatBPS = new QPushButton(centralwidget);
        etatBPS->setObjectName(QString::fromUtf8("etatBPS"));
        etatBPS->setGeometry(QRect(500, 550, 89, 25));
        presenceVehiculeEntree = new QPushButton(centralwidget);
        presenceVehiculeEntree->setObjectName(QString::fromUtf8("presenceVehiculeEntree"));
        presenceVehiculeEntree->setGeometry(QRect(100, 660, 201, 25));
        presenceVehiculeSortie = new QPushButton(centralwidget);
        presenceVehiculeSortie->setObjectName(QString::fromUtf8("presenceVehiculeSortie"));
        presenceVehiculeSortie->setGeometry(QRect(440, 670, 201, 25));
        gridWidgetBT1 = new QWidget(centralwidget);
        gridWidgetBT1->setObjectName(QString::fromUtf8("gridWidgetBT1"));
        gridWidgetBT1->setGeometry(QRect(110, 580, 160, 80));
        gridLayoutBT1 = new QGridLayout(gridWidgetBT1);
        gridLayoutBT1->setObjectName(QString::fromUtf8("gridLayoutBT1"));
        labelBT1 = new QLabel(gridWidgetBT1);
        labelBT1->setObjectName(QString::fromUtf8("labelBT1"));

        gridLayoutBT1->addWidget(labelBT1, 0, 0, 1, 1);

        gridWidgetBT2 = new QWidget(centralwidget);
        gridWidgetBT2->setObjectName(QString::fromUtf8("gridWidgetBT2"));
        gridWidgetBT2->setGeometry(QRect(470, 580, 160, 80));
        gridLayoutBT2 = new QGridLayout(gridWidgetBT2);
        gridLayoutBT2->setObjectName(QString::fromUtf8("gridLayoutBT2"));
        labelBT2 = new QLabel(gridWidgetBT2);
        labelBT2->setObjectName(QString::fromUtf8("labelBT2"));

        gridLayoutBT2->addWidget(labelBT2, 0, 0, 1, 1);

        gridWidgetBT3 = new QWidget(centralwidget);
        gridWidgetBT3->setObjectName(QString::fromUtf8("gridWidgetBT3"));
        gridWidgetBT3->setGeometry(QRect(120, 710, 160, 80));
        gridLayoutBT3 = new QGridLayout(gridWidgetBT3);
        gridLayoutBT3->setObjectName(QString::fromUtf8("gridLayoutBT3"));
        labelBT3 = new QLabel(gridWidgetBT3);
        labelBT3->setObjectName(QString::fromUtf8("labelBT3"));
        labelBT3->setScaledContents(true);

        gridLayoutBT3->addWidget(labelBT3, 0, 0, 1, 1);

        gridWidgetBT4 = new QWidget(centralwidget);
        gridWidgetBT4->setObjectName(QString::fromUtf8("gridWidgetBT4"));
        gridWidgetBT4->setGeometry(QRect(450, 710, 321, 80));
        gridLayoutBT4 = new QGridLayout(gridWidgetBT4);
        gridLayoutBT4->setObjectName(QString::fromUtf8("gridLayoutBT4"));
        labelBT4 = new QLabel(gridWidgetBT4);
        labelBT4->setObjectName(QString::fromUtf8("labelBT4"));
        labelBT4->setScaledContents(true);

        gridLayoutBT4->addWidget(labelBT4, 0, 0, 1, 1);

        TestESDIg->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TestESDIg);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TestESDIg->setStatusBar(statusbar);

        retranslateUi(TestESDIg);

        QMetaObject::connectSlotsByName(TestESDIg);
    } // setupUi

    void retranslateUi(QMainWindow *TestESDIg)
    {
        TestESDIg->setWindowTitle(QApplication::translate("TestESDIg", "TestESDIg", nullptr));
        txtbarriereEntree->setText(QApplication::translate("TestESDIg", "Barri\303\250re Entr\303\251e", nullptr));
        txtbarriereSortie->setText(QApplication::translate("TestESDIg", "Barri\303\250re de sortie", nullptr));
        barriereEntree->setTitle(QString());
        ArretBE->setText(QApplication::translate("TestESDIg", "Arr\303\252t Barri\303\250re Entr\303\251e", nullptr));
        MonteeBE->setText(QApplication::translate("TestESDIg", "Mont\303\251e Barri\303\250re Entr\303\251e", nullptr));
        DescenteBE->setText(QApplication::translate("TestESDIg", "Descente Barri\303\250re Entr\303\251e", nullptr));
        barriereSortie->setTitle(QString());
        ArretBS->setText(QApplication::translate("TestESDIg", "Arr\303\252t Barri\303\250re Sortie", nullptr));
        MonteeBS->setText(QApplication::translate("TestESDIg", "Mont\303\251e Barri\303\250re Sortie", nullptr));
        DescenteBS->setText(QApplication::translate("TestESDIg", "Descente Barri\303\250re Sortie", nullptr));
        modifierAfficheur->setText(QApplication::translate("TestESDIg", "Modifier Afficheur", nullptr));
        txtposBarriereEntree->setText(QApplication::translate("TestESDIg", "Position Barri\303\250re Entr\303\251e", nullptr));
        txtposBarriereSortie->setText(QApplication::translate("TestESDIg", "Position Barri\303\250re Sortie", nullptr));
        niveauEntree->setText(QApplication::translate("TestESDIg", "Niveau Entr\303\251e", nullptr));
        niveauSortie->setText(QApplication::translate("TestESDIg", "Niveau Sortie", nullptr));
        etatBPE->setText(QApplication::translate("TestESDIg", "Etat BPE", nullptr));
        etatBPS->setText(QApplication::translate("TestESDIg", "Etat BPS", nullptr));
        presenceVehiculeEntree->setText(QApplication::translate("TestESDIg", "PresenceVehicule Entr\303\251e", nullptr));
        presenceVehiculeSortie->setText(QApplication::translate("TestESDIg", "PresenceVehicule Sortie", nullptr));
        labelBT1->setText(QString());
        labelBT2->setText(QString());
        labelBT3->setText(QString());
        labelBT4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TestESDIg: public Ui_TestESDIg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTESDIG_H
