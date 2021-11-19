#include "routines.h"
#include "autonomous-functions.h"

void RoutineOne(){ //Auton Arm back included, bot needs to face backwards
  MoveReverse(51, 80, 5); //bot moves from backwards assuming the arm is still in backside
  wait(300, msec);
  IntakeControl(90, 90.5); //arm close down to take the mobile goal
  wait(300,  msec);
  Movefoward(50.5, 100, 3); //bot returns back to the starting point
}
