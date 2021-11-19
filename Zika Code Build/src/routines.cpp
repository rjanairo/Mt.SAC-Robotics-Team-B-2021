#include "routines.h"
#include "autonomous-functions.h"

void RoutineOne(){ //Auton Arm back included, bot needs to face backwards
  MoveReverse(51, 80, 5);
  wait(300, msec);
  IntakeControl(90, 90.5);
  wait(300,  msec);
  Movefoward(50.5, 100, 3);
}
