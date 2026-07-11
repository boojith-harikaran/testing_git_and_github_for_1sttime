// LED Blink - Arduino Uno
// Blinks the built-in LED on pin 13 every 1 second

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Set pin 13 as output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // LED ON
  delay(1000);                      // Wait 1 second
  digitalWrite(LED_BUILTIN, LOW);   // LED OFF
  delay(1000);                      // Wait 1 second
}