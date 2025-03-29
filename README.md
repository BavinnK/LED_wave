# LED Chaser with Arduino

## Description
This project controls a set of 6 LEDs connected to an Arduino, creating a chasing effect. The sequence moves forward, then in reverse, and finally turns all LEDs on at once before restarting the loop.

## Features
- Sequential LED lighting in forward direction
- Reverse LED lighting
- All LEDs turn on simultaneously for a brief period
- Continuous loop for a dynamic lighting effect

## Components Required
- **Arduino Board** (Uno, Mega, etc.)
- **6 LEDs**
- **6 Resistors** (220Ω - 330Ω recommended)
- **Jumper Wires**
- **Breadboard**

## Circuit Diagram
- Connect each LED to digital pins **13, 12, 11, 10, 9, 8** on the Arduino.
- Use a **220Ω - 330Ω resistor** in series with each LED to limit current.
- Connect the other end of each LED to **GND**.
![Neat Jarv-Wolt](https://github.com/user-attachments/assets/f47bb82d-3eee-4923-ba28-578101720538)



## How to Use
1. Upload the code to your **Arduino Board** using the Arduino IDE or VScode+PlatformIO.
2. Connect the LEDs as per the circuit diagram.
3. Observe the LED sequence animation.

## Troubleshooting
- Ensure all connections are secure.
- Verify that the resistors are properly connected.
- Make sure the correct pins are assigned in the code.

## License
This project is open-source and free to use for educational and personal purposes.



