int LM35_PIN = A1;
void setup() { Serial.begin(9600);
}
void loop() {
int input = analogRead(LM35_PIN); // Obtengo el valor sensado por el LM35
float mv = (5000 / 1024.0) * input; // Convierto el valor leido a mV
float cel = mv / 10; // Convierto los mV leidos a grados celsius
Serial.println(cel);
delay(1000);
}
