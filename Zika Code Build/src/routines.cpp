#include "routines.h"
#include "autonomous-functions.h"

void RoutineOne(){ // robot move forward, grab yellow goal, backward
  intakeAuton(45, 100);
  wait(550, msec);
  Movefoward(100, 80, 1);
  wait(2000, msec);
  clawFangAuton(90, 100);
  wait(550,msec);
  clawFangAuton(0, 85);
  wait(500,  msec);
  MoveReverse(100, 100, 1);
}

/*
void RoutineKenta() { // Bot starts backwards in front of circle thing
  MoveReverse(160, 100, 5); // move "forward" (quickly to get time to go on the scale properly)
}
*/
