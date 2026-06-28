/*
Author: Subham
Date: 28-06-2026
Description: LED blink program with serial counter and potentiometer-controlled blink speed.
*/

int blinkCount = 0;
int potentiometerPin = A0;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int delayTime = analogRead(potentiometerPin);
  delayTime = map(delayTime, 0, 1023, 100, 1000);//This fixes the issue #1 blink interval does not increase when the potentiometer is rotated to its maximum position
  

  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(13, LOW);
  delay(delayTime);

  blinkCount++;
  Serial.print("Blink count: ");
  Serial.println(blinkCount);
}
