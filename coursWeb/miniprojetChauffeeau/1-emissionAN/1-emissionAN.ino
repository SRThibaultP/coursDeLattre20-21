int A=255;
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.print("Attention ça arrive...            ");
Serial.print(A);
Serial.print('\n');
delay(50);
A++;
}
