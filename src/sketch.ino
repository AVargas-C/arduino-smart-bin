/**
 * Title: Phase 4 - PIR detection, RGB LED status and Servo Motion Control
 *
 * Brief: Monitors motion on pin 10 and controls RGB LED status indicators with 
 *        servo motor actuation. Setup initializes RGB LED and servo. Motion detection
 *        triggers servo movement and multi-stage LED color sequence (blue→green→red)
 *        with specific timing. Idle state maintains green LED.
 *
 * Author: Arturo Vargas Cuevas (a01652564@tec.mx)
 * Date:   2019-05-02
 */


int motion = 0;  // Variable to store motion sensor state
int red = 12;    // Red LED on pin 12
int green = 11;  // Green LED on pin 11
int blue = 9;    // Blue LED on pin 9


#include <Servo.h>
Servo servo;     // Servo motor instance

void setup(){
  // Configure pin modes
  pinMode(9, OUTPUT);   // Blue LED output
  pinMode(11,OUTPUT);   // Green LED output
  pinMode(12, OUTPUT);  // Red LED output
  pinMode(10, INPUT);   // Motion sensor input
  servo.attach(8);      // Attach servo to pin 8

  delay(200);
  // Turn on all LEDs for startup indication
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  delay(2000);
  // Test servo movement
  servo.write(90);
  delay(1000);
  servo.write(0);
  

  // Startup blink sequence - 30 cycles of all LEDs
  for(int i=1; i<=30; i++){

  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW); 
  delay(500); 
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);  
  delay(500);
  }
  // Turn off all LEDs after startup
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW); 
}
 
void loop(){
  // Read motion sensor state
  motion = digitalRead(10);
  
  if (motion == HIGH){  // Motion detected
    digitalWrite(green, LOW);
    
    // Blue LED blink sequence (3 pulses at 300ms intervals)
    digitalWrite(blue, HIGH);
    delay(300);
    digitalWrite(blue, LOW);
    delay(300);
    digitalWrite(blue, HIGH);
    delay(300);
    digitalWrite(blue, LOW);
    delay(300);
    digitalWrite(blue, HIGH);
    delay(300);
    digitalWrite(blue, LOW);
    delay(300);
  
    // Activate servo and blink blue
    digitalWrite(blue, HIGH);
    servo.write(90);  // Move servo to 90 degrees
    delay(1000);
    servo.write(0);   // Return servo to 0 degrees
    delay(200);
  
    // Switch to green LED after servo action
    digitalWrite(blue, LOW);
    digitalWrite(green, HIGH);
    delay(1800);
  
    // Switch to red LED - final state (warning/blocked)
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
    delay(6500);  // Red on for 6.5 seconds
    digitalWrite(red, LOW);
    delay(3000);  // Delay before next motion check
    

    } else {  // No motion detected
      // Idle state - turn off red, keep green on
      digitalWrite(red, LOW);
      digitalWrite(green, HIGH);
  }
}
