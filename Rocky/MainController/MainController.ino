#include <Phantom.h>
#include "Robot.h"
#include <Wire.h>

Robot robot;

void setup() {
	robot.setup();
	SerialUSB.begin(57600);
	Wire.begin(); // As master
}

void loop() {
	robot.update();
	robot.loop();
}