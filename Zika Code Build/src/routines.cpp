#include "routines.h"
#include "autonomous-functions.h"

void RoutineOne(){ //boolean switch, forward = reverse and reverse = forward (inverted variable naming)
  MoveReverse(100, 50, 10);
  wait(800, msec);
  PointTurnCounterClockwise(100, 20, 5);
  wait(300, msec);
  MoveReverse(30, 20, 6);
  wait(800, msec);
  PointTurnCounterClockwise(100, 20, 5);
  wait(300,  msec);
  MoveReverse(100, 50, 10);
}
