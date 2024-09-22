//Send SOS

int ledPin = 13;
int dot = 200;
int dash = 500;
int longWait = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  printMorseS();
  printMorseO();
  printMorseS();

  delay(longWait);
}

void printMorseS() {
  //S = ...
  for (int i = 0; i < 3; i++){
    digitalWrite(ledPin, HIGH);
    delay(dot);

    digitalWrite(ledPin, LOW);
    delay(dot);
  }
  
  delay(longWait);
}

void printMorseO() {
  //S = ---
  for (int i = 0; i < 3; i++){
    digitalWrite(ledPin, HIGH);
    delay(dash);

    digitalWrite(ledPin, LOW);
    delay(dash);
  }
  
  delay(longWait);
}