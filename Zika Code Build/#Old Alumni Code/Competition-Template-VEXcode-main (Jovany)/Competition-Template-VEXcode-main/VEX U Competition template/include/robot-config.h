using namespace vex;

extern brain Brain;

// Controller  Declarations
extern controller Controller1;

// VEXcode devices
extern drivetrain Drivetrain;
extern motor ClawMotor;
extern motor ArmMotor;

//drivetrain motors
extern motor motor_FrontLeft;
extern motor motor_BackLeft;

extern motor motor_FrontRight;
extern motor motor_BackRight;


//Motor Groups
extern motor_group LeftDrive;
extern motor_group RightDrive;

//sensor declarations
extern gyro myGyro;

// Global Variables(begein with g_ prefix)

extern const float g_wheelBase; // [cm] Distance between axles of two wheels on the left or right side of base
extern const float g_trackWidth; // [cm] Distance between wheel centers of two adjacent wheels

extern const float g_robotRadius; // [cm] 
extern const float g_wheelDiameter; // [cm]
extern const float g_wheelCircumference; // [cm]
extern const float g_driveTrainGearRatio; // [Driven Gear Teeth Count/ Driving Gear Teeth Count]


/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void);