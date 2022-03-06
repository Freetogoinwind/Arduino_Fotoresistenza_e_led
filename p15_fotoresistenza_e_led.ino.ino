/*
 * Accensione e spegnimento di un led mediante l'utilizzo di una fotoresistenza (luce crepuscolare) 
 */
 
int FotoPin = A0;                     // dichiara il pin della fotoresistenza
int FotoValue;                        // dichiara il valore della fotoresistenza
int ledPin = 4;                       // dichiara il pin del led

void setup() {
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}
void loop() {
FotoValue = analogRead(FotoPin);
Serial.println(FotoValue);
if (FotoValue > 50) {                 // spegne il led se il valore della fotoresistenza è > a 50 (luce)
digitalWrite(ledPin, LOW);
} else {
digitalWrite(ledPin, HIGH);             // accende il led se il valore della fotoresistenza è < a 50 (buio)
}
delay(10);
}
