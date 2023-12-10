#include "Robot.h"

Robot bot;

void setup(){
  bot.init(4, 7, 5, 6);
  Serial.begin(9600);
}

void loop(){
  bot.setSpeed(100);
  bot.startMoving();
  bot.turnBack();
  bot.printVal();
}
