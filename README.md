# ARDUINO Smart Bin

**Institution:** Tecnológico de Monterrey, Campus Ciudad de México  
**Course:** Liderazgo Emprendedor  
**Project Type:** High School Engineering Project

**Authors:**
- Arturo Vargas Cuevas (A01652564@tec.mx)

**Date:** May 02, 2019

---

## Overview

Arduino Smart Bin is a motion-activated waste management system developed through four progressive phases. The system integrates a PIR motion sensor with RGB LED status indicators and a servo-controlled lid mechanism.

## Project Phases

### Phase 1: PIR Motion Sensor Testing
![PIR LED Connection](./assets/1_PIR_LED_CONNECTION.jpg)
- Basic motion detection with LED feedback
- 30-second calibration period
- Serial logging of motion events

### Phase 2: Servo Motor Control
![Servo Door Assembly](./assets/2_SERVO_DOOR_Assemble.jpg)
- Servo motor testing and positioning
- Pin 8 servo attachment
- Rotation between 0 and 180 degrees

### Phase 3: Motion-Triggered Actuator Control
![PIR LED Servo Function](./assets/3_PIR_LED_SERVO_function.gif)
- PIR sensor input on pin 10
- Actuator outputs on pins 9 and 12
- Motion-triggered response sequences

### Phase 4: RGB LED and Servo Integration (Final)
![Final Build](./assets/4_final_build.gif)
- RGB LED color-coded status system
- Multi-stage motion response sequence
- Servo actuation with timing logic
- Blue (detecting) → Green (ready) → Red (blocked) states

## Hardware Components

- Arduino Microcontroller
- PIR Motion Sensor (pin 10)
- RGB LED (Red: pin 12, Green: pin 11, Blue: pin 9)
- Servo Motor (pin 8)
- LED indicators and supporting electronics
