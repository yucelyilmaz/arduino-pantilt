#include <Servo.h>

/**************************************************************
 * Arduino Pan/Tilt Project - yucelyilmaz
 * Connections
 * Servo 1 = Digital 3.pin of Arduino
 * Servo 2 = Digital 10.pin of Arduino
 * VRx pin of joystick = Analog 3.pin of Arduino
 * VRy pin of joystick = Analog 4.pin of Arduino
 *************************************************************/

const int servo1 = 3; // digital 3.pin for servo 1 of pan/tilt
const int servo2 = 10; // digital 10.pin for servo 2 of pan/tilt
const int yonX = 3; // left-right rotation ( analog 3.pin for joystick )
const int yonY = 4; // up-down rotation ( analog 4.pin for joystick )


int servoAyar;

Servo servomotor1;
Servo servomotor2;


void setup() {

// Servo
servomotor1.attach(servo1);
servomotor2.attach(servo2);

Serial.begin(9600);


}

void loop() {


servoAyar = analogRead(yonX);
servoAyar = map(servoAyar, 0, 1023, 0, 180); 
servomotor2.write(servoAyar);

servoAyar = analogRead(yonY);
servoAyar = map(servoAyar, 0, 1023, 70, 180); 
servomotor1.write(servoAyar);
delay(15);


}


