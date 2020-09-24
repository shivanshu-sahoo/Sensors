#include <Stepper.h>//Including the library

const int steps_per_revolution = 200;  // change this to fit the number of steps per revolution
//If your motor has a gear shaft, then steps per revolution is (360/Stride Angle)* Gear Reduction Ratio
//Otherwise Steps per revolution is 360/Step Angle
// initialize the stepper library on pins 8 through 11:
Stepper my_stepper(steps_per_revolution, 8, 10, 9, 11);

void setup() {
  // set the speed at 6 rpm:
  my_stepper.setSpeed(6);
  Serial.begin(9600);
}

void loop() {
  // step one revolution  in one direction:
  Serial.println("clockwise");
  my_stepper.step(steps_per_revolution);
  delay(500);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  my_stepper.step(-steps_per_revolution);
  delay(500);
}
