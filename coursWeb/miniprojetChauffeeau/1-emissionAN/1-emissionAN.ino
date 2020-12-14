//Paramétrage
const int f_echantillonnage=500;
const int nbre_Bit=3;

//Déclaration
int rapport;
int temps;
int tension1,tension2,tension;

//Initialisation
void setup(){
temps=1/f_echantillonnage*1000;
rapport=1024/pow(2,nbre_Bit);
Serial.begin(9600);
}

//Programme
void loop() {
tension = analogRead(A0);
tension=tension/rapport;
delay(temps);
tension1 = analogRead(A0);
tension1=tension1/rapport;
delay(temps);
tension2 = analogRead(A0);
tension2=tension2/rapport;
tension=(tension1+tension2+tension)/3;
Serial.println(tension);
}
