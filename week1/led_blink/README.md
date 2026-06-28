# LED Blink Project

## Project Title

**Arduino LED Blink with Serial Monitor and Potentiometer Control**

## Project Description

This project demonstrates a basic Arduino LED blinking application. The LED blink interval can be controlled using a potentiometer, and the Serial Monitor displays the number of completed blink cycles. It serves as an introductory project for learning digital output, analog input, and serial communication in Arduino.

---

## Hardware Required

* Arduino Uno (or compatible board)
* USB cable
* LED (built-in LED on pin 13 or external LED)
* 220 Ω resistor (if using an external LED)
* Potentiometer (10 kΩ)
* Breadboard
* Jumper wires

---

## Circuit Diagram Description

* Connect the LED anode (+) to **Digital Pin 13** through a **220 Ω resistor**.
* Connect the LED cathode (–) to **GND**.
* Connect one outer pin of the potentiometer to **5V**.
* Connect the other outer pin of the potentiometer to **GND**.
* Connect the middle (wiper) pin of the potentiometer to **Analog Pin A0**.

---

## How to Upload Code

1. Connect the Arduino board to your computer using a USB cable.
2. Open the Arduino IDE.
3. Open the `led_blink.ino` sketch.
4. Select **Tools → Board → Arduino Uno** (or your board model).
5. Select the correct COM/Serial port from **Tools → Port**.
6. Click the **Verify (✓)** button to compile the program.
7. Click the **Upload (→)** button to upload the code.
8. Open the **Serial Monitor** and set the baud rate to **9600** to view the blink count.

---

## Expected Output

* The LED connected to pin 13 blinks continuously.
* Rotating the potentiometer changes the blinking speed.
* The Serial Monitor displays:

```
Blink count: 1
Blink count: 2
Blink count: 3
...
```

---

## Troubleshooting Tips

1. Ensure the correct Arduino board and COM port are selected in the Arduino IDE.
2. Verify all circuit connections, especially the LED polarity and potentiometer wiring.
3. Confirm that the Serial Monitor baud rate is set to **9600**.
4. If the upload fails, disconnect and reconnect the USB cable and try again.
5. If the LED does not blink, check that it is connected to pin 13 (or update the pin number in the code if using a different pin).

---

## Author
Name : Subham


**Name:** Your Name

**Roll Number:** Your Roll Number

**Course:** IoT Summer School 2026
