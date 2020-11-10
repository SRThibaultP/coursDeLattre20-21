
int A=255;
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.print("Attention ça arrive...            ");
delay(100);
Serial.print(A);
delay(50);
Serial.print('\n');
delay(50);
A++;
}
