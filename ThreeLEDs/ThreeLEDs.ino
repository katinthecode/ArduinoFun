//Using 3 LEDs
//Blink redPin 5x
//Blink greenPin 10x
//Blink bluePin 15x

int redPin = 13;
int redCount = 5;

int greenPin = 12;
int greenCount = 10;

int bluePin = 11;
int blueCount = 15;

int delayCount = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < redCount; i++){
    digitalWrite(redPin, HIGH);
    delay(delayCount);

    digitalWrite(redPin, LOW);
    delay(delayCount);
  }
    
  for (int i = 0; i < greenCount; i++){
    digitalWrite(greenPin, HIGH);
    delay(delayCount);

    digitalWrite(greenPin, LOW);
    delay(delayCount);
  }
  
  for (int i = 0; i < blueCount; i++){
    digitalWrite(bluePin, HIGH);
    delay(delayCount);

    digitalWrite(bluePin, LOW);
    delay(delayCount);
  }
}
