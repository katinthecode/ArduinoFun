int number = 15;

int pin1000 = 13;
int pin100 = 12;
int pin10 = 11;
int pin1 = 10;

int delayTime = 1000;


void setup() {
  pinMode(pin1000, OUTPUT);
  pinMode(pin100, OUTPUT);
  pinMode(pin10, OUTPUT);
  pinMode(pin1, OUTPUT);
}

void loop() {
  // Count from 0 to 1111 (15) in binary
  for (int i = 0; i <= 15; i++) {
    setBinaryLights(i);
    delay(delayTime);
  }

  clearBinaryLights();
  delay(delayTime);
}

void setBinaryLights(int num) {
  int ans = num;
  if (ans % 2 > 0) {
    digitalWrite(pin1, HIGH);
  } else {
    digitalWrite(pin1, LOW);
  }
  
  ans = ans / 2;
  if (ans % 2 > 0) {
    digitalWrite(pin10, HIGH);
  } else {
    digitalWrite(pin10, LOW);
  }
  
  ans = ans / 2;
  if (ans % 2 > 0) {
    digitalWrite(pin100, HIGH);
  } else {
    digitalWrite(pin100, LOW);
  }
  
  ans = ans / 2;
  if (ans % 2 > 0) {
    digitalWrite(pin1000, HIGH);
  } else {
    digitalWrite(pin1000, LOW);
  }
}
 
void clearBinaryLights() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin10, LOW);
  digitalWrite(pin100, LOW);
  digitalWrite(pin1000, LOW);
}
