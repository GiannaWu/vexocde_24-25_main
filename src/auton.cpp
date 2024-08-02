#include "robot-config.h"
#include "autons/auton.h"
#include "main.h"
#include "autons/auton_functions.h"
using namespace vex;
using namespace auton;

void testForward() {
    setHeading(0);
    driveAndTurn(1, 0);
    driveAndTurn(-1, 0);
    driveAndTurn(2, 0);
    driveAndTurn(-2, 0);
}

void testTurning() {
    setHeading(0);
    turnToAngle(90);
    turnToAngle(-90);
    turnToAngle(180);
    turnToAngle(-180);
    turnToAngle(0);
}

void close_qua(){
/* Testing auton functions */

if (true) {
    testForward();
    //testTurning();
    return;
}

// vex::pneumatics intawings = vex::pneumatics(Brain.ThreeWirePort.D);
// wait(1,msec);


/* Actual auton */

setHeading(270);

driveAndTurn(-1.2, 270);
//clip.set(true);
// turnToAngle(-100);
turnToAngle(180);
driveAndTurn(0.9, 120);
driveAndTurn(1.95, 0, 90, 80);
inta.spin(reverse);
driveAndTurn(0.2, 0);
turnToAngle(80);
driveAndTurn(1, 0);

// driveAndTurn(0.35,270);
// driveAndTurn(2,340);

// pner.spin(fwd,100,pct);
// wait(1000, msec);
// pner.stop(hold);

// inta.spin(fwd,100,pct);
// driveAndTurn(2.3, 28,100,50);
// turnToAngle(0);
// driveAndTurn(-3, 43,55,100);
// turnToAngle(135);

// clip.set(true);
// turnToAngle(-270);
// turnToAngle(135);
// clip.set(false);
// driveAndTurn(1.3, 90, 100, 87);
// inta.stop(brake);
// driveAndTurn(0.8,90);
// inta.spin(reverse,100,pct);

}
