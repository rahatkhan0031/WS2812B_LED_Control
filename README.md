# 🌈 WS2812B RGB LED Control with FastLED

This project demonstrates how to control WS2812B RGB LED strips using the **FastLED** library for Arduino.

---

## 🛠 Components
- Arduino Uno / Nano / Mega
- WS2812B RGB LED strip
- 5V power supply (capable of handling LED current draw)
- 330Ω resistor (between Arduino pin and LED data pin)
- 1000µF capacitor (across 5V and GND at LED power input)
- Jumper wires

---

## 💡 Functionality
- Uses the **FastLED** library for easy control of WS2812B LEDs.
- Demonstrates various color animations and effects.
- Adjustable brightness and speed.

---

## 📂 Files
- `sketch_fastLED_run.ino` — Main Arduino sketch.

---

## 📷 Wiring Diagram
*(Add image once uploaded)*  
Typical connection:
- Arduino pin **D6** → LED strip **Data In** (with 330Ω resistor in series)
- LED strip **+5V** → 5V power supply
- LED strip **GND** → Arduino GND and power supply GND

---

## ▶ How to Run
1. Install the **FastLED** library in Arduino IDE (Sketch → Include Library → Manage Libraries → Search "FastLED")
2. Wire the WS2812B LEDs according to the diagram above.
3. Upload the `.ino` file to your Arduino.
4. Power the LED strip.
5. Enjoy colorful effects!

---

## 📜 License
MIT
