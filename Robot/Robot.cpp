#include "Robot.h"

void Robot::init(int pinS1, int pinS2, int pinD1, int pinD2) {
	this->pinS1 = pinS1;
	this->pinS2 = pinS2;
	this->pinD1 = pinD1;
	this->pinD2 = pinD2;
	for (int pin = 4; pin <= 7; ++pin) {
		pinMode(pin, OUTPUT);
	}
}

void Robot::turnForward() {
	digitalWrite(this->pinD1, HIGH);
	digitalWrite(this->pinD2, HIGH);
}

void Robot::turnBack() {
	digitalWrite(this->pinD1, LOW);
	digitalWrite(this->pinD2, LOW);
}

void Robot::turnLeft() {
	digitalWrite(this->pinD1, LOW);
	digitalWrite(this->pinD2, HIGH);
}

void Robot::turnRight() {
	digitalWrite(this->pinD1, HIGH);
	digitalWrite(this->pinD2, LOW);
}

void Robot::startMoving(int speed = 10) {
	this->turnForward();
	analogWrite(this->pinS1, speed);
	analogWrite(this->pinS2, speed);
}

void Robot::setSpeed(int speed) {
	analogWrite(this->pinS1, speed);
	analogWrite(this->pinS2, speed);
}

void Robot::printVal() {
	Serial.println("10");
}