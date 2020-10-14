/********************************************************************************
** Form generated from reading UI file 'testesdig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTESDIG_H
#define UI_TESTESDIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
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
            TestESDIg->setObjectName(QStringLiteral("TestESDIg"));
        TestESDIg->resize(800, 852);
        centralwidget = new QWidget(TestESDIg);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        txtbarriereEntree = new QLabel(centralwidget);
        txtbarriereEntree->setObjectName(QStringLiteral("txtbarriereEntree"));
        txtbarriereEntree->setGeometry(QRect(70, 60, 151, 17));
        txtbarriereSortie = new QLabel(centralwidget);
        txtbarriereSortie->setObjectName(QStringLiteral("txtbarriereSortie"));
        txtbarriereSortie->setGeometry(QRect(460, 50, 181, 17));
        barriereEntree = new QGroupBox(centralwidget);
        barriereEntree->setObjectName(QStringLiteral("barriereEntree"));
        barriereEntree->setGeometry(QRect(50, 80, 211, 151));
        ArretBE = new QRadioButton(barriereEntree);
        ArretBE->setObjectName(QStringLiteral("ArretBE"));
        ArretBE->setGeometry(QRect(10, 40, 201, 23));
        MonteeBE = new QRadioButton(barriereEntree);
        MonteeBE->setObjectName(QStringLiteral("MonteeBE"));
        MonteeBE->setGeometry(QRect(10, 70, 281, 23));
        DescenteBE = new QRadioButton(barriereEntree);
        DescenteBE->setObjectName(QStringLiteral("DescenteBE"));
        DescenteBE->setGeometry(QRect(10, 100, 291, 23));
        barriereSortie = new QGroupBox(centralwidget);
        barriereSortie->setObjectName(QStringLiteral("barriereSortie"));
        barriereSortie->setGeometry(QRect(430, 70, 211, 141));
        ArretBS = new QRadioButton(barriereSortie);
        ArretBS->setObjectName(QStringLiteral("ArretBS"));
        ArretBS->setGeometry(QRect(10, 40, 201, 23));
        MonteeBS = new QRadioButton(barriereSortie);
        MonteeBS->setObjectName(QStringLiteral("MonteeBS"));
        MonteeBS->setGeometry(QRect(10, 70, 281, 23));
        DescenteBS = new QRadioButton(barriereSortie);
        DescenteBS->setObjectName(QStringLiteral("DescenteBS"));
        DescenteBS->setGeometry(QRect(10, 100, 291, 23));
        modifierAfficheur = new QPushButton(centralwidget);
        modifierAfficheur->setObjectName(QStringLiteral("modifierAfficheur"));
        modifierAfficheur->setGeometry(QRect(60, 270, 141, 25));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(270, 270, 48, 26));
        txtposBarriereEntree = new QLabel(centralwidget);
        txtposBarriereEntree->setObjectName(QStringLiteral("txtposBarriereEntree"));
        txtposBarriereEntree->setGeometry(QRect(110, 310, 191, 20));
        txtposBarriereSortie = new QLabel(centralwidget);
        txtposBarriereSortie->setObjectName(QStringLiteral("txtposBarriereSortie"));
        txtposBarriereSortie->setGeometry(QRect(460, 310, 241, 17));
        niveauEntree = new QPushButton(centralwidget);
        niveauEntree->setObjectName(QStringLiteral("niveauEntree"));
        niveauEntree->setGeometry(QRect(10, 430, 121, 25));
        niveauSortie = new QPushButton(centralwidget);
        niveauSortie->setObjectName(QStringLiteral("niveauSortie"));
        niveauSortie->setGeometry(QRect(650, 420, 131, 25));
        sliderEntree = new QSlider(centralwidget);
        sliderEntree->setObjectName(QStringLiteral("sliderEntree"));
        sliderEntree->setGeometry(QRect(190, 350, 16, 160));
        sliderEntree->setOrientation(Qt::Vertical);
        sliderSortie = new QSlider(centralwidget);
        sliderSortie->setObjectName(QStringLiteral("sliderSortie"));
        sliderSortie->setGeometry(QRect(540, 340, 16, 160));
        sliderSortie->setOrientation(Qt::Vertical);
        etatBPE = new QPushButton(centralwidget);
        etatBPE->setObjectName(QStringLiteral("etatBPE"));
        etatBPE->setGeometry(QRect(150, 550, 89, 25));
        etatBPS = new QPushButton(centralwidget);
        etatBPS->setObjectName(QStringLiteral("etatBPS"));
        etatBPS->setGeometry(QRect(500, 550, 89, 25));
        presenceVehiculeEntree = new QPushButton(centralwidget);
        presenceVehiculeEntree->setObjectName(QStringLiteral("presenceVehiculeEntree"));
        presenceVehiculeEntree->setGeometry(QRect(100, 660, 201, 25));
        presenceVehiculeSortie = new QPushButton(centralwidget);
        presenceVehiculeSortie->setObjectName(QStringLiteral("presenceVehiculeSortie"));
        presenceVehiculeSortie->setGeometry(QRect(440, 670, 201, 25));
        gridWidgetBT1 = new QWidget(centralwidget);
        gridWidgetBT1->setObjectName(QStringLiteral("gridWidgetBT1"));
        gridWidgetBT1->setGeometry(QRect(110, 580, 160, 80));
        gridLayoutBT1 = new QGridLayout(gridWidgetBT1);
        gridLayoutBT1->setObjectName(QStringLiteral("gridLayoutBT1"));
        labelBT1 = new QLabel(gridWidgetBT1);
        labelBT1->setObjectName(QStringLiteral("labelBT1"));

        gridLayoutBT1->addWidget(labelBT1, 0, 0, 1, 1);

        gridWidgetBT2 = new QWidget(centralwidget);
        gridWidgetBT2->setObjectName(QStringLiteral("gridWidgetBT2"));
        gridWidgetBT2->setGeometry(QRect(470, 580, 160, 80));
        gridLayoutBT2 = new QGridLayout(gridWidgetBT2);
        gridLayoutBT2->setObjectName(QStringLiteral("gridLayoutBT2"));
        labelBT2 = new QLabel(gridWidgetBT2);
        labelBT2->setObjectName(QStringLiteral("labelBT2"));

        gridLayoutBT2->addWidget(labelBT2, 0, 0, 1, 1);

        gridWidgetBT3 = new QWidget(centralwidget);
        gridWidgetBT3->setObjectName(QStringLiteral("gridWidgetBT3"));
        gridWidgetBT3->setGeometry(QRect(120, 710, 160, 80));
        gridLayoutBT3 = new QGridLayout(gridWidgetBT3);
        gridLayoutBT3->setObjectName(QStringLiteral("gridLayoutBT3"));
        labelBT3 = new QLabel(gridWidgetBT3);
        labelBT3->setObjectName(QStringLiteral("labelBT3"));
        labelBT3->setScaledContents(true);

        gridLayoutBT3->addWidget(labelBT3, 0, 0, 1, 1);

        gridWidgetBT4 = new QWidget(centralwidget);
        gridWidgetBT4->setObjectName(QStringLiteral("gridWidgetBT4"));
        gridWidgetBT4->setGeometry(QRect(450, 710, 321, 80));
        gridLayoutBT4 = new QGridLayout(gridWidgetBT4);
        gridLayoutBT4->setObjectName(QStringLiteral("gridLayoutBT4"));
        labelBT4 = new QLabel(gridWidgetBT4);
        labelBT4->setObjectName(QStringLiteral("labelBT4"));
        labelBT4->setScaledContents(true);

        gridLayoutBT4->addWidget(labelBT4, 0, 0, 1, 1);

        TestESDIg->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TestESDIg);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TestESDIg->setStatusBar(statusbar);

        retranslateUi(TestESDIg);

        QMetaObject::connectSlotsByName(TestESDIg);
    } // setupUi

    void retranslateUi(QMainWindow *TestESDIg)
    {
        TestESDIg->setWindowTitle(QApplication::translate("TestESDIg", "TestESDIg", Q_NULLPTR));
        txtbarriereEntree->setText(QApplication::translate("TestESDIg", "Barri\303\250re Entr\303\251e", Q_NULLPTR));
        txtbarriereSortie->setText(QApplication::translate("TestESDIg", "Barri\303\250re de sortie", Q_NULLPTR));
        barriereEntree->setTitle(QString());
        ArretBE->setText(QApplication::translate("TestESDIg", "Arr\303\252t Barri\303\250re Entr\303\251e", Q_NULLPTR));
        MonteeBE->setText(QApplication::translate("TestESDIg", "Mont\303\251e Barri\303\250re Entr\303\251e", Q_NULLPTR));
        DescenteBE->setText(QApplication::translate("TestESDIg", "Descente Barri\303\250re Entr\303\251e", Q_NULLPTR));
        barriereSortie->setTitle(QString());
        ArretBS->setText(QApplication::translate("TestESDIg", "Arr\303\252t Barri\303\250re Sortie", Q_NULLPTR));
        MonteeBS->setText(QApplication::translate("TestESDIg", "Mont\303\251e Barri\303\250re Sortie", Q_NULLPTR));
        DescenteBS->setText(QApplication::translate("TestESDIg", "Descente Barri\303\250re Sortie", Q_NULLPTR));
        modifierAfficheur->setText(QApplication::translate("TestESDIg", "Modifier Afficheur", Q_NULLPTR));
        txtposBarriereEntree->setText(QApplication::translate("TestESDIg", "Position Barri\303\250re Entr\303\251e", Q_NULLPTR));
        txtposBarriereSortie->setText(QApplication::translate("TestESDIg", "Position Barri\303\250re Sortie", Q_NULLPTR));
        niveauEntree->setText(QApplication::translate("TestESDIg", "Niveau Entr\303\251e", Q_NULLPTR));
        niveauSortie->setText(QApplication::translate("TestESDIg", "Niveau Sortie", Q_NULLPTR));
        etatBPE->setText(QApplication::translate("TestESDIg", "Etat BPE", Q_NULLPTR));
        etatBPS->setText(QApplication::translate("TestESDIg", "Etat BPS", Q_NULLPTR));
        presenceVehiculeEntree->setText(QApplication::translate("TestESDIg", "PresenceVehicule Entr\303\251e", Q_NULLPTR));
        presenceVehiculeSortie->setText(QApplication::translate("TestESDIg", "PresenceVehicule Sortie", Q_NULLPTR));
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
