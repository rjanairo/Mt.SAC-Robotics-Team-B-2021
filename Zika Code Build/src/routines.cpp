#include "routines.h"
#include "autonomous-functions.h"

void RoutineOne(){
  Movefoward(30, 20, 5);
  wait(800, msec);
  MoveReverse(30, 20, 5);
  wait(800, msec);
  PointTurnClockwise(90, 10, 5);
  wait(800, msec);
  PointTurnCounterClockwise(90, 10, 5);
}