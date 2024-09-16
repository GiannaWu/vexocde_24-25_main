#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller con;
motor l1 = motor(PORT1, ratio6_1, 1);
motor l2 = motor(PORT15, ratio6_1, 1);
motor l3 = motor(PORT21, ratio6_1, 1);
motor_group leftmo = motor_group(l1, l2, l3);
motor r1 = motor(PORT4, ratio6_1, 0);
motor r2 = motor(PORT5, ratio6_1, 0);
motor r3 = motor(PORT6, ratio6_1, 0);
motor_group rightmo = motor_group(r1, r2, r3);
inertial bob = inertial(PORT14);
motor inta = motor(PORT10, ratio18_1, 0);
//motor pner = motor(PORT13, ratio18_1, 0);
digital_out clamp = digital_out(Brain.ThreeWirePort.A);
//digital_out hood = digital_out(Brain.ThreeWirePort.D);
digital_out intakeLift = digital_out(Brain.ThreeWirePort.H);
distance tim = distance(PORT17);
//vision bakchu = vision(PORT7);
// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}
