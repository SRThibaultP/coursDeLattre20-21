//*********************************************************************
// Fichier : MyButton.cpp
// Classe : MyButton
//*********************************************************************
#include "mybutton.h"
MyButton::MyButton(const QString & texte, QWidget *parent) : QPushButton(texte,parent)
{
}
MyButton::~MyButton()
{
}
void MyButton::slotChangeText()
{
if (text() == QString("Docteur Jeckyl"))
setText(QString("Mister Hide"));
else
setText(QString("Docteur Jeckyl"));
}



