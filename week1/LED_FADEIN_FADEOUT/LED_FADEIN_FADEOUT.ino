int ledPins[] = {3, 5, 6, 9, 10, 11};
int totalLEDs = 6;                    

void setup() {
  for (int i = 0; i < totalLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < totalLEDs; i++) { 
    for (int brightness = 0; brightness <= 255; brightness++) {
      analogWrite(ledPins[i], brightness);
      delay(3);
    }
    for (int brightness = 255; brightness >= 0; brightness--) {
      analogWrite(ledPins[i], brightness);
      delay(3);
    }

  }
}
