#include "vex.h"
#include "driver-control.h"

using namespace vex;

//defining functions from header files

void DriveArcade(){

  if(abs(Controller1.Axis3.value()) > 5 || abs(Controller1.Axis1.value()) > 5){
    LeftDrive.spin(forward, ( Controller1.Axis3.value() + Controller1.Axis1.value() )/2 , pct);
    RightDrive.spin(forward, ( Controller1.Axis3.value() - Controller1.Axis1.value() )/2 , pct);
  } else {
    LeftDrive.stop();
    RightDrive.stop();
  }

}

void DriveTank(){
  if( abs( Controller1.Axis1.value() ) > 5 && abs( Controller1.Axis3.value() ) > 5 ){
    LeftDrive.spin(forward,Controller1.Axis3.value(), pct);
    RightDrive.spin(forward, Controller1.Axis2.value(),pct);
  } else {
    LeftDrive.stop();
    RightDrive.stop();
  }

}


void DriveXDrive(){

  //Folllowing code is for a 4 wheel omni x-drive. 
  //Assuming that when Axis 4 is held in the positive direction, all wheels produce a movement that moves robot foward. 

  if(abs(Controller1.Axis1.value()) > 5 || abs(Controller1.Axis3.value()) > 5 || abs(Controller1.Axis4.value()) > 5){
    motor_FrontLeft.spin(forward, (Controller1.Axis4.value() + Controller1.Axis1.value() + Controller1.Axis3.value())/3 , pct);
    motor_BackLeft.spin(forward, (Controller1.Axis4.value() + Controller1.Axis1.value() - Controller1.Axis3.value())/3 , pct);
    motor_FrontRight.spin(forward, (Controller1.Axis4.value() - Controller1.Axis1.value() - Controller1.Axis3.value())/3 , pct);
    motor_BackRight.spin(forward, (Controller1.Axis4.value() - Controller1.Axis1.value() + Controller1.Axis3.value())/3 , pct);
  } else {
    motor_FrontLeft.stop();
    motor_BackLeft.stop();
    motor_FrontRight.stop();
    motor_BackRight.stop();
  }
  
}