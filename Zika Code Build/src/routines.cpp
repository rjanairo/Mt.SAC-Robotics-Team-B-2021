#include "routines.h"
#include "autonomous-functions.h"

void RoutineOne(){ //Auton Arm back included, bot needs to face backwards
  MoveReverse(125, 50, 10); //bot moves from backwards assuming the arm is still in backside
  wait(300, msec);
  IntakeControl(90, 90.5); //arm close down to take the mobile goal
  wait(300,  msec);
  Movefoward(125, 50, 10); //bot returns back to the starting point
}
