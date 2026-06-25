# Suit Activation System

An Arduino-based superhero suit activation prop built as an introduction to embedded systems.

## Demo
Press the button to trigger a sequential LED power-up sequence, musical jingle, and LCD status display.

## Features
- Button-triggered activation sequence
- 4 sequential LEDs powering up with ascending musical notes
- LCD display showing suit status (STANDBY / INITIALIZING / SUIT ONLINE)
- Passive buzzer jingle using PWM tone generation

## Components
- ELEGOO UNO R3 (Arduino compatible)
- LCD1602 16x2 display (parallel interface)
- 4x LEDs with 220 ohm resistors
- Passive buzzer
- Tactile push button
- Potentiometer (LCD contrast control)
- Breadboard and jumper wires

## Concepts Demonstrated
- Digital input and output
- PWM tone generation
- Parallel LCD communication
- Hardware debugging and pin mapping

## Next Steps
- Add potentiometer voltage sensing with ADC
- Add DHT11 temperature sensor for live HUD stats
- Add conditional activation based on power level threshold
