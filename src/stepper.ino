#include "accelstepper.h"

int stepPin=3;
int dirPin=2;
int enablePin=4;


AccelStepper motor{AccelStepper::DRIVER,stepPin,dirPin}


void setup(){
	motor.setSpeed(100);
	motor.setMaxSpeed(100);
	motor.setAcceleration(100);

}

void loop(){
	if(motor.distanceToGo()==0){
		int dir = rand()%2;
		if(dir==0){
			motor.move(100);
		} else {
			motor.move(-100);
		}
	}
	motor.run();
}