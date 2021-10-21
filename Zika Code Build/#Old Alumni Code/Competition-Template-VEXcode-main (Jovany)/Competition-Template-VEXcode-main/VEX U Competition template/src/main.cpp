/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Wed Sep 25 2019                                           */
/*    Description:  Clawbot (Drivetrain) - Template                           */
/*                                                                            */
/*    Name:                                                                   */
/*    Date                                                                    */
/*    Class:                                                                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 10, D
// ClawMotor            motor         3
// ArmMotor             motor         8
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "driver-control.h"
#include "routines.h"

using namespace vex;


void Usercontrol(){
  while(1){
    
    DriveArcade();
    //wait to save resources
    wait(10,msec);
  }


}


void Autonomous(){

  RoutineOne();
}

competition Competition;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  //Use Competition Functions
  Competition.drivercontrol(Usercontrol);
  Competition.autonomous(Autonomous);


}
