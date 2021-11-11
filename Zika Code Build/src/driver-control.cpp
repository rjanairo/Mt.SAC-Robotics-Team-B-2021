#include "vex.h"
#include "driver-control.h"
#include "robot-config.h"

using namespace vex;

//defining functions from header files
void DriveArcade(){

  if(abs(Controller1.Axis3.value()) > 5 || abs(Controller1.Axis1.value()) > 5){

    LeftDrive.setVelocity(( Controller1.Axis3.value() + Controller1.Axis1.value() ) , percent);
    LeftDrive.spin(reverse);

    RightDrive.setVelocity(( Controller1.Axis3.value() - Controller1.Axis1.value() ) , percent);
    RightDrive.spin(reverse);

  } else {
    LeftDrive.stop();
    RightDrive.stop();
  }

}
void DriveTank(){
   if( abs( Controller1.Axis2.value() ) > 5 && abs( Controller1.Axis3.value() ) > 5 ){
     LeftDrive.spin(forward,Controller1.Axis3.value(), pct);
     RightDrive.spin(forward, Controller1.Axis2.value(),pct);
   } else {
     LeftDrive.stop();
     RightDrive.stop();
   }

 }
void LiftControl(){
  if(Controller1.ButtonR1.pressing()){
    liftA.spin(reverse,100, pct);
    liftB.spin(reverse,100, pct);
  }else if(Controller1.ButtonR2.pressing()){
    liftA.spin(forward,100, pct);
    liftB.spin(forward,100, pct);
  }else{
    liftA.stop(hold);
    liftB.stop(hold);
  }
}

void DriveXDrive(){

  //Folllowing code is for a 4 wheel omni x-drive. 
  //Assuming that when Axis 4 is held in the positive direction, all wheels produce a movement that moves robot foward. 

  if(abs(Controller1.Axis1.value()) > 5 || abs(Controller1.Axis3.value()) > 5 || abs(Controller1.Axis4.value()) > 5){
    LeftDrive.spin(forward, (Controller1.Axis4.value() + Controller1.Axis1.value() + Controller1.Axis3.value())/3 , pct);
    LeftDrive.spin(forward, (Controller1.Axis4.value() + Controller1.Axis1.value() - Controller1.Axis3.value())/3 , pct);
    RightDrive.spin(forward, (Controller1.Axis4.value() - Controller1.Axis1.value() - Controller1.Axis3.value())/3 , pct);
    RightDrive.spin(forward, (Controller1.Axis4.value() - Controller1.Axis1.value() + Controller1.Axis3.value())/3 , pct);
  } else {
    LeftDrive.stop();
    LeftDrive.stop();

    RightDrive.stop();
    RightDrive.stop();
  }
  
}
