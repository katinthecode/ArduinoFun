//Using 3 LEDs
//Blink red 5x
//Blink green 10x
//Blink blue 15x

int RED = 13;
int GREEN = 12;
int BLUE = 11;

void setup() {
  // put your setup code here, to run once:
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < 5; i++){
    digitalWrite(RED, HIGH);
    delay(500);

    digitalWrite(RED, LOW);
    delay(500);
  }
    
  for (int i = 0; i < 10; i++){
    digitalWrite(GREEN, HIGH);
    delay(500);

    digitalWrite(GREEN, LOW);
    delay(500);
  }
  
  for (int i = 0; i < 15; i++){
    digitalWrite(BLUE, HIGH);
    delay(500);

    digitalWrite(BLUE, LOW);
    delay(500);
  }
}
