#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 Brain screen
  brain Brain;
//

// VEXcode device constructors
  controller Controller1 = controller();
//

//drivetrain motors
motor leftMotorA = motor(PORT1, ratio18_1, false);
motor leftMotorB = motor(PORT2, ratio18_1, false);
motor leftMotorC = motor(PORT3, ratio18_1, true);

motor rightMotorA = motor(PORT10, ratio18_1, true);
motor rightMotorB = motor(PORT9, ratio18_1, true);
motor rightMotorC = motor(PORT8, ratio18_1, false);
//

//Motor Groups
  motor_group LeftDrive = motor_group(leftMotorA, leftMotorB, leftMotorC);
  motor_group RightDrive = motor_group(rightMotorA, rightMotorB,rightMotorC);
//

//Drivetrain 
  drivetrain Drivetrain = drivetrain(LeftDrive, RightDrive,319.19, 320, 130, mm, 1);
//


//LIft
   motor liftA = motor(PORT12, ratio18_1, true);
   motor liftB = motor(PORT13, ratio18_1, false);

// Global Variables(begein with g_ prefix)
  const float g_wheelBase = 0; // [cm] Distance between axles of two wheels on the left or right side of base
  const float g_trackWidth = 28.5; // [cm] Distance between wheel centers of two adjacent wheels
  const float g_robotRadius = sqrtf( powf( (g_trackWidth/2), 2) + powf( (g_wheelBase/2), 2) ); // [cm] 
  const float g_wheelDiameter = 10.16; // [cm]
  const float g_wheelCircumference = g_wheelDiameter * M_PI; // [cm]
  const float g_driveTrainGearRatio = 1/1; // [Driven Gear Teeth Count/ Driving Gear Teeth Count][unit-less]
//


// VEXcode generated functions

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // reset the screen now that the calibration is complete
  Brain.Screen.clearScreen();
  wait(50, msec);
  Brain.Screen.drawRectangle(0, 0, 200, 200);
  Brain.Screen.setFillColor(green);
}
