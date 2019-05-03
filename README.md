# ARDUINO Smart Bin

**Institution:** Tecnológico de Monterrey, Campus Ciudad de México  
**Course:** Liderazgo Emprendedor  
**Project Type:** High School Engineering Project

**Authors:**
- Arturo Vargas Cuevas (A01652564@tec.mx)

**Date:** May 02, 2019

---

## Overview

Arduino Smart Bin is a motion-activated waste management system that encourages recycling by dispensing metro/subway tickets as rewards. When users dispose of trash in the bin, the system automatically detects the motion and dispenses a ticket as an incentive. Developed through four progressive phases, the system integrates a PIR motion sensor with RGB LED status indicators and a servo-controlled ticket dispenser mechanism.

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

## How It Works

**Arduino-based system with:**
- **PIR Sensor** - Located inside trash can, detects motion when items are disposed
- **Servo Motor** - Controlled dispenser mechanism that releases metro/subway tickets as rewards
- **RGB LED** - Real-time status indicator showing system state (detecting, ready, blocking)

When trash is detected, the system triggers a reward sequence dispensing a ticket while providing visual feedback through the RGB LED.
