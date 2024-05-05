// Define the pins for the LEDs
const int numLED = 10;
int ledPins[numLED] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

void setup() {
  // Initialize all LED pins as outputs
  for (int i = 0; i < numLED; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Knight Rider effect: LEDs moving back and forth
  for (int i = 0; i < numLED; i++) {
    // Turn on the current LED
    digitalWrite(ledPins[i], HIGH);
    // Turn off the previous LED (if it's not the first LED)
    if (i > 0) {
      digitalWrite(ledPins[i - 1], LOW);
    }
    delay(100); // Adjust the delay time to change the speed
  }

  // Knight Rider effect: LEDs moving back
  for (int i = numLED - 1; i >= 0; i--) {
    // Turn on the current LED
    digitalWrite(ledPins[i], HIGH);
    // Turn off the next LED (if it's not the last LED)
    if (i < numLED - 1) {
      digitalWrite(ledPins[i + 1], LOW);
    }
    delay(100); // Adjust the delay time to change the speed
  }
}
