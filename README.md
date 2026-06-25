# Suit Activation System

An Arduino-based superhero suit activation prop built as an introduction to 
embedded systems development.

## Demo


https://github.com/nlowe56/suit-activation-system/blob/main/Suit Activation System.mp4

## What It Does

On button press, four LEDs light up sequentially alongside an ascending jingle 
played through a buzzer, simulating suit systems coming online. The LCD reads 
"INITIALIZING..." during the sequence, then switches to "SUIT ONLINE / POWER: 100%" 
once complete. After a short delay the system returns to "SUIT SYSTEM / STANDBY..." 
and waits for the next activation.

## What I Learned

This was my first hands-on project with the Arduino Uno. Getting all components 
working on their own pins simultaneously was the core challenge, coordinating the 
LEDs, buzzer, button input, and LCD without conflicts required careful pin mapping 
and debugging. Key concepts I worked through:

- Digital input and output
- PWM tone generation
- Parallel LCD communication (16-pin interface)
- Hardware debugging and wiring diagnosis

## Components

- ELEGOO UNO R3
- LCD1602 16x2 display
- 4x LEDs with 220 ohm resistors
- Passive buzzer
- Tactile push button
- Potentiometer for LCD contrast
- Breadboard and jumper wires

## Roadmap

- Live power level reading via potentiometer and ADC
- DHT11 temperature sensor for suit diagnostics HUD
- Conditional activation based on minimum power threshold
