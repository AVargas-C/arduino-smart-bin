/**
 * Title: Phase 3 - Motion-Triggered Actuator Control
 *
 * Brief: Reads motion input on pin 10 and controls actuators on pins 9 and 12.
 *        When motion is detected, blinks pin 9 six times at 200ms intervals and 
 *        sets pin 12 LOW. When no motion, sets pin 9 LOW and pin 12 HIGH.
 *
 * Author: Arturo Vargas Cuevas (a01652564@tec.mx)
 * Date:   2019-05-02
 */

int motion = 0;
 
void setup(){
 
  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, INPUT);
}
 
void loop(){
 
  motion = digitalRead(10);
  if (motion == HIGH){
    digitalWrite(12, LOW);
 
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9, LOW);
    delay(200);
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9, LOW);
    delay(200);
    digitalWrite(9, HIGH);
    delay(200);
    digitalWrite(9, LOW);
    delay(200);
   
    } else {
 
      digitalWrite(9, LOW);
      digitalWrite(12, HIGH);
  }
}
