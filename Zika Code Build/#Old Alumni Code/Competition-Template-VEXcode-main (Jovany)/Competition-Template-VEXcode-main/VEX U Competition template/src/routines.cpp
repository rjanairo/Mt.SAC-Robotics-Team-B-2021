#include "routines.h"
#include "autonomous-functions.h"

void RoutineOne(){
  Movefoward(30, 20, 5);
  wait(2, sec);
  MoveReverse(30, 20, 5);
  wait(2, sec);
  PointTurnClockwise(90, 10, 5);
  wait(2, sec);
  PointTurnCounterClockwise(90, 10, 5);
}