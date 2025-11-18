# 8-LED Chenillard (Light Chaser) with Arduino

A simple Arduino project that creates a scrolling light effect with 8 LEDs.

## 📋 Description

This project creates a sequential light effect where LEDs light up one by one, creating a "chasing" or scrolling pattern. The sequence follows these steps:

1. **Sequential Lighting**: Each LED turns on progressively (one every 500ms) and remains lit
2. **Flash Effect**: Once all 8 LEDs are lit, they flash together for 5 seconds
3. **Reset**: All LEDs turn off simultaneously, and the cycle repeats

## 🔧 Hardware Requirements

- **Arduino board** (Uno)
- **8 LEDs** (any color)
- **8 resistors** (220Ω)
- **Breadboard**
- **Jumper wires**

## 🔌 Circuit Diagram

### Connections

| LED # | Arduino Pin | Components                 |
| ----- | ----------- | -------------------------- |
| LED 1 | Pin 2       | LED + 220Ω resistor to GND |
| LED 2 | Pin 3       | LED + 220Ω resistor to GND |
| LED 3 | Pin 4       | LED + 220Ω resistor to GND |
| LED 4 | Pin 5       | LED + 220Ω resistor to GND |
| LED 5 | Pin 6       | LED + 220Ω resistor to GND |
| LED 6 | Pin 7       | LED + 220Ω resistor to GND |
| LED 7 | Pin 8       | LED + 220Ω resistor to GND |
| LED 8 | Pin 9       | LED + 220Ω resistor to GND |

### Wiring Instructions

1. Connect the **anode** (long leg) of each LED to its corresponding Arduino digital pin
2. Connect the **cathode** (short leg) of each LED to a 220Ω resistor
3. Connect the other end of each resistor to **GND** (ground)


<img width="1076" height="586" alt="image" src="https://github.com/user-attachments/assets/74e88e0b-3802-415b-a0f0-3794a15a5072" />

