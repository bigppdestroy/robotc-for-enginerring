#pragma config(Sensor, in1,    light,          sensorReflection)
#pragma config(Sensor, in2,    linefollow,     sensorLineFollower)
#pragma config(Sensor, in3,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl1,  ultrasonicrange, sensorSONAR_inch)
#pragma config(Sensor, dgtl5,  qencoder2,      sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  buttonswitch,   sensorTouch)
#pragma config(Sensor, dgtl8,  limitswitch,    sensorTouch)
#pragma config(Sensor, dgtl9,  greenLED,       sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           SErvo,         tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
Project Title: 3.1.1
Team Members: Elijah A
Date: 3/15/2023
Section: 5th period

Task Description: VEX MOTORS AND SENSORS EXPLORATION ACTIVITY

Psuedocode: NONE
*/

task main()


{

	wait(1);
	turnLEDOff(greenLED);
	wait(1);
	turnLEDOn(greenLED);
	wait(5);
	turnLEDOff(greenLED);


	startMotor(rightMotor, 69);
	wait(5);
	stopMotor(rightMotor);





}
