#ifndef Robot_h
#define Robot_h
#include <Arduino.h>

class Robot {
private:
    int pinS1, pinS2;
    int pinD1, pinD2;
    int speed;
public:
    void init(int pinS1, int pinS2, int pinD1, int pinD2);
    void turnForward();
    void turnBack();
    void turnLeft();
    void turnRight();
    void startMoving(int speed = 10);
    void setSpeed(int speed);
    void printVal();
};
#endif