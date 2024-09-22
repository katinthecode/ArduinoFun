//Send SOS

int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  printMorseS();
  delay(200);
  printMorseO();
  delay(200);
  printMorseS();
  delay(1000);
}

void printMorseS() {
  //S = ...
  for (int i = 0; i < 3; i++){
    digitalWrite(ledPin, HIGH);
    delay(200);

    digitalWrite(ledPin, LOW);
    delay(200);
  }
}

void printMorseO() {
  //S = ---
  for (int i = 0; i < 3; i++){
    digitalWrite(ledPin, HIGH);
    delay(500);

    digitalWrite(ledPin, LOW);
    delay(500);
  }
}