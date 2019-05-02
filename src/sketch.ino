/**
 * Title: Phase 2 - Servo Motor Control Test
 *
 * Brief: Tests servo motor control on pin 8. Rotates between 0 and 180 degrees 
 *        with 1-second intervals. Includes initial 2-second calibration delay.
 *
 * Author: Arturo Vargas Cuevas (a01652564@tec.mx)
 * Date:   2019-05-02
 */

 #include <Servo.h>

Servo servo;
void setup() {
  servo.attach(8);
  servo.write(0);
  delay(2000);

}

void loop() {

  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000); 

}
