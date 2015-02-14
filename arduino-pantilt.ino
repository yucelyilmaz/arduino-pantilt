#include <Servo.h>

const int servo1 = 3; // 3 numaralı pin
const int servo2 = 10; // 10 numaralı pin
const int yonX = 3; // sol sağ
const int yonY = 4; // yukarı aşağı


int servoAyar;

Servo servomotor1;
Servo servomotor2;


void setup() {

// Servolar
servomotor1.attach(servo1);
servomotor2.attach(servo2);

Serial.begin(9600);


}

void loop() {


servoAyar = analogRead(yonX);
servoAyar = map(servoAyar, 0, 1023, 0, 180); // 0-180 derece arası dönüs

servomotor2.write(servoAyar);

servoAyar = analogRead(yonY);
servoAyar = map(servoAyar, 0, 1023, 70, 180); // 70-180 derece arası

servomotor1.write(servoAyar);
delay(15);


}

