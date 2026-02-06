#include <Servo.h>   // Servo library

Servo obj;           // create servo object

int servopin = 8;    // servo connected to pin 8
int value;

void setup() {

  obj.attach(servopin);
  Serial.begin(9600);

}

void loop() {

  // Wait until data comes from LabVIEW/Serial
  while (Serial.available() == 0) {
    // do nothing
  }

  value = Serial.parseInt();   // Read angle value (0 to 180)

  // Limit safety (optional but good)
  if (value < 0) value = 0;
  if (value > 180) value = 180;

  obj.write(value);           // Move servo to angle

  delay(100);                // small delay (not 5 sec like video)
}
