/* 
 * ESP LED Blink Sketch
 * Toggles an LED on and off every 1 second.
 */

// Define the pin connected to your LED
// Note: ESP32 built-in LED is usually GPIO 2. ESP8266 NodeMCU built-in LED is GPIO 2 (D4).
const int ledPin = 2; 

void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Turn the LED ON
  delay(1000);                  // Wait for 1 second
  digitalWrite(ledPin, LOW);    // Turn the LED OFF
  delay(1000);                  // Wait for 1 second
}
