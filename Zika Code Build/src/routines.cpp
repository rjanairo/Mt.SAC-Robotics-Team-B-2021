#include "routines.h"
#include "autonomous-functions.h"

void RoutineOne(){ //Auton Arm back included, bot needs to face backwards
  intakeAuton(90, 91);//clawFangControl(90,91);
  Movefoward(51, 80, 5); //(51, 80, 5);
  wait(300, msec);
  clawFangAuton(90, 91);//IntakeControl(90, 91);
  wait(300,  msec);
  //MoveReverse(50.5, 100, 3); //(50.5, 100, 3);
}
