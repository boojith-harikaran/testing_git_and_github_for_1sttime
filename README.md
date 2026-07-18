# ESP LED Blinking Project 🚦

A simple, beginner-friendly repository demonstrating how to control a Digital Output using an ESP microcontroller. This project contains code to blink both the onboard LED and an external LED connected to a breadboard.

## 🛠 Hardware Requirements

* **Microcontroller:** [ESP32](https://espressif.com) or [ESP8266 NodeMCU](https://espressif.com)
* **Cable:** Micro-USB or USB-C cable (data capable)
* **Optional (External LED):**
  * 1x Standard LED (any color)
  * 1x 220 Ω or 330 Ω Resistor
  * 1x Breadboard & Jumper wires

---

## 🔌 Circuit Connection (For External LED)

If you are using an external LED instead of the built-in one, wire it as follows:

1. **Anode (Longer leg / +):** Connect to a GPIO pin (e.g., **GPIO 2** for ESP32 or **D4/GPIO 2** for ESP8266).
2. **Cathode (Shorter leg / -):** Connect through a 330 Ω resistor to **GND** (Ground).

---

## 💻 Software & Code

The code initializes a GPIO pin as an output and toggles the voltage HIGH and LOW every second. 

```cpp
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
```

---

## 🚀 How to Run the Project

1. **Install ESP Board Package:** 
   * Open the [Arduino IDE](https://arduino.cc).
   * Go to **File** > **Preferences**.
   * Add `https://espressif.com` (for ESP32) or `http://esp8266.com` (for ESP8266) to the Additional Boards Manager URLs.
   * Go to **Tools** > **Board** > **Boards Manager**, search for `ESP32` or `ESP8266`, and click **Install**.
2. **Select your Board:**
   * Go to **Tools** > **Board** and select your specific ESP development board (e.g., *DOIT ESP32 DEVKIT V1* or *NodeMCU 1.0*).
3. **Connect & Upload:**
   * Connect the board to your PC.
   * Select the correct port in **Tools** > **Port**.
   * Copy the code above and click the **Upload** arrow in the Arduino IDE. 
   * *Tip:* If the upload fails to connect, press and hold the **BOOT/FLASH** button on the ESP board until the code begins uploading.
