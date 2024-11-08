#include "robot-config.h"
#include "autons/auton.h"
#include "main.h"
#include "autons/auton_functions.h"
using namespace vex;
using namespace auton;

// void blue_left(){
//     //robot 4 POV blue left side no wall
    
//     driveAndTurn(-2, 0); //can delete later

//     turnToAngle(23);
//     driveAndTurn(-1, 35);
//     clamp.set(true);

//     intamo.spin(reverse, 100, pct);
//     turnToAngle(-12);
//     driveAndTurn(0.60, 0);
//     driveAndTurn(0.02, 0, 50, 50); // can delete later
//     clamp.set(false);
//     driveAndTurn(0.25, 0);
//     turnToAngle(90);
//     driveAndTurn(-0.8, 90, 80, 80); //0.9
//     clamp.set(true);
//     wait(700, msec);

//     turnToAngle(-53);
//     intakeLift.set(true);
//     intamo.spin(reverse, 100, pct);
//     driveAndTurn(1.48, -48);
//     wait(500, msec);
//     intakeLift.set(false);

//     turnToAngle(180);
//     driveAndTurn(0.55, 180);

//      ///////////////////////////////////////

// //     //robot 4 POV blue left with wallstake
// //         // turnToAngle(-15);
// //         // driveAndTurn(0.28, -15);
// //         // driveAndTurn(-1, -15);
// //         // turnToAngle(25);
// //         // driveAndTurn(-0.5, 25);
// //         // clamp.set(true);
// //         // intamo.spin(reverse, 100, pct);
// //         // turnToAngle(125);
// //         // driveAndTurn(1.2, 125);
// //         // turnToAngle(-90);
// //         // clamp.set(false);
// //         // wait(400, msec);
// //         // turnToAngle(33);       
// //         // driveAndTurn(-0.8, 25);
// //         // clamp.set(true);
// //         // turnToAngle(-30);
// //         // // intamo.spin(reverse, 100, pct);
// //         // driveAndTurn(2.6, -18);
// //         // turnToAngle(45);
// //         // driveAndTurn(-0.4, 45);

// }

/////////////////////////////////////

// void red_right(){
// //     //robot 4 POV red left side no wall 
// //     //chasuturn(-85, -100, -35, 900); //the ms can be smaller 
    
//     driveAndTurn(-1.9, 0); 

//     turnToAngle(-30);
//     driveAndTurn(-1, -35);
//     clamp.set(true);

//     intamo.spin(reverse, 100, pct);
//     turnToAngle(12);
//     driveAndTurn(0.60, 0);
//     driveAndTurn(0.02, 0, 50, 50); // can delete later
//     clamp.set(false);
//     driveAndTurn(0.25, 0);
//     turnToAngle(-90);
//     driveAndTurn(-1.1, -90, 80, 80);
//     clamp.set(true);
//     wait(500, msec);

//     turnToAngle(48);
//     intakeLift.set(true);
//     intamo.spin(reverse, 100, pct);
//     driveAndTurn(1.48, 48);
//     intakeLift.set(false);
//     wait(500, msec);
//     turnToAngle(-190);
//     driveAndTurn(0.65, -180); 

    ///////////////////////////////////////

//     //robot 4 POV red right with wallstake

//         // turnToAngle(15);
//         // driveAndTurn(0.28, 15);
//         // driveAndTurn(-1, 15);
//         // turnToAngle(-25);
//         // driveAndTurn(-0.5, -25);
//         // clamp.set(true);
//         // intamo.spin(reverse, 100, pct);
//         // turnToAngle(-125);
//         // driveAndTurn(1.2, -125);
//         // turnToAngle(90);
//         // clamp.set(false);
//         // wait(400, msec);
//         // turnToAngle(-33);       
//         // driveAndTurn(-0.8, -25);
//         // clamp.set(true);
//         // turnToAngle(30);
//         // // intamo.spin(reverse, 100, pct);
//         // driveAndTurn(2.6, 18);
//         // turnToAngle(-45);
//         // driveAndTurn(-0.4, -45);
//}

/////////////////////////////////////

void blue_right(){
    //robot 4 POV blue right side no wall    
    
    driveAndTurn(-1.2, 0);
    clamp.set(true);
    // intamo.spin(reverse, 100, pct);
    
    // turnToAngle(-106);
    // driveAndTurn(1.15, -106);

    // turnToAngle(-185);
    // driveAndTurn(0.65, -180);
    // driveAndTurn(-0.3, -140);  
    // driveAndTurn(0.59, -140);
    // driveAndTurn(-3, -140);
    // clamp.set(false);
    // wait(1000, msec);
    // clamp.set(true);
    // wait(500, msec);
    // turnToAngle(90, 50);
    // driveAndTurn(3, 90);

 /////////////////////////////////////

    //robot 4 POV blue right with wallstake
    turnToAngle(0);
    driveAndTurn(0, 0);
    //implement put down the ring
    driveAndTurn(-0, 0);
    turnToAngle(-0);
    driveAndTurn(0, 0);
    driveAndTurn(-0, 0);
    turnToAngle(0);
    driveAndTurn(-0, 0);
    clamp.set(true);
    turnToAngle(0);
    driveAndTurn(0, 0);
    driveAndTurn(-0, 0);
    turnToAngle(-0);
    driveAndTurn(0, 0);
    driveAndTurn(-0, 0);
    turnToAngle(-0);
    driveAndTurn(0, 0);
    turnToAngle(-0);
    driveAndTurn(-0, 0);
}

/////////////////////////////////////

// void red_left(){
//     // robot 4 POV red right side no wall

//     driveAndTurn(-1.2, 0);
//     clamp.set(true);
//     // intamo.spin(reverse, 100, pct);
    
//     // turnToAngle(106);
//     // driveAndTurn(1.15, 106);

//     // turnToAngle(185);
//     // driveAndTurn(0.65, 180);
//     // driveAndTurn(-0.3, 140);  
//     // driveAndTurn(0.59, 140);
//     // driveAndTurn(-3, 140);
//     // clamp.set(false);
//     // wait(1000, msec);
//     // clamp.set(true);
//     // wait(500, msec);
//     // turnToAngle(-90, 50);
//     // driveAndTurn(3, -90);

//  /////////////////////////////////////

//     //robot 4 POV red left with wallstake
//     turnToAngle(0);
//     driveAndTurn(0, 0);
//     //implement put down the ring
//     driveAndTurn(-0, 0);
//     turnToAngle(-0);
//     driveAndTurn(0, 0);
//     driveAndTurn(-0, 0);
//     turnToAngle(0);
//     driveAndTurn(-0, 0);
//     clamp.set(true);
//     turnToAngle(0);
//     driveAndTurn(0, 0);
//     driveAndTurn(-0, 0);
//     turnToAngle(-0);
//     driveAndTurn(0, 0);
//     driveAndTurn(-0, 0);
//     turnToAngle(-0);
//     driveAndTurn(0, 0);
//     turnToAngle(-0);
//     driveAndTurn(-0, 0);
// }





/////////////////////////////////////






// void other(){
//     //75% 5 pts POV red

//     // setHeading(270);

//     // driveAndTurn(-1.1, 0);
//     // clip.set(true);

//     // intamo.spin(reverse, 80, pct);
//     // turnToAngle(-106);
//     // driveAndTurn(1, -90);
//     // turnToAngle(60);
//     // intakeLift.set(true);
//     // intamo.spin(reverse, 80, pct);

//     // driveAndTurn(2.1, 63, 80, 80);
//     // // driveAndTurn(1.7, 63, 80, 80);
//     // // driveAndTurn(0.4, 63);
//     // intakeLift.set(false);
//     // intamo.spin(reverse, 80, pct);
//     // turnToAngle(150);

//     // driveAndTurn(0.7, 150);
//     // intakeLift.set(true);
//     // clip.set(false);
//     // inta.stop(brake);

//     ///////////////////////////////////////

//     //100% 7pts POV red 

//     // setHeading(290);
//     // driveAndTurn(-2.28, 0);
//     // clip.set(true);
//     // intamo.spin(reverse, 80, pct);
//     // turnToAngle(-40);
//     // driveAndTurn(0.46, 0);
//     // clip.set(false);

//     // driveAndTurn(1.7, 63, 80, 80);
//     // driveAndTurn(0.4, 63);
//     // intakeLift.set(false);
//     // turnToAngle(150);
//     // intakeLift.set(true);
//     // turnToAngle(0); //change value

//     // inta.stop(brake);
//     // driveAndTurn(0.9, 128);
//     // clip.set(true);
//     // intamo.spin(reverse, 80, pct);

//     // driveAndTurn(0.7, 0); //change value

//     ///////////////////////////////////////

//     //75% 5 pts POV blue

//     // setHeading(90);

//     // driveAndTurn(-1.1, 0);
//     // clip.set(true);

//     // intamo.spin(reverse, 80, pct);
//     // turnToAngle(106);
//     // driveAndTurn(1, 90);
//     // turnToAngle(-60);
//     // intakeLift.set(true);
//     // intamo.spin(reverse, 80, pct);

//     // driveAndTurn(2.1, -63, 80, 80);
//     // intakeLift.set(false);
//     // intamo.spin(reverse, 80, pct);
//     // turnToAngle(-150);

//     // driveAndTurn(0.35, -150);
//     // intakeLift.set(true);
//     // clip.set(false);
//     // inta.stop(brake);

//     ///////////////////////////////////////

//     // turnToAngle(30);
//     // driveAndTurn(-0.43, 30);
//     // clip.set(true);
//     // turnToAngle(-20);
//     // intamo.spin(reverse, 100, pct);
//     // driveAndTurn(0.7, 0);
//     // clip.set(true);

//     // driveAndTurn(0.2, 0);
//     // turnToAngle(80);
//     // driveAndTurn(1, 0);

//     // driveAndTurn(0.35,270);
//     // driveAndTurn(2,340);

//     // pner.spin(fwd,100,pct);
//     // wait(1000, msec);
//     // pner.stop(hold);

//     // intamo.spin(fwd,100,pct);
//     // driveAndTurn(2.3, 28,100,50);
//     // turnToAngle(0);
//     // driveAndTurn(-3, 43,55,100);
//     // turnToAngle(135);

//     // clip.set(true);
//     // turnToAngle(-270);
//     // turnToAngle(135);
//     // clip.set(false);
//     // driveAndTurn(1.3, 90, 100, 87);
//     // inta.stop(brake);
//     // driveAndTurn(0.8,90);
//     // intamo.spin(reverse,100,pct);

//     ///////////////////////////////////////

//     //75% 6pts POV red 
//     //write in far_qua later

//     // setHeading(270);

//     // driveAndTurn(-1.1, 0);
//     // clip.set(true);

//     // intamo.spin(reverse, 80, pct);
//     // turnToAngle(148);
//     // driveAndTurn(1, 150);
//     // turnToAngle(88, 100);
//     // driveAndTurn(1, 90, 100, 100);

//     // intamo.spin(reverse, 80, pct);
//     // driveAndTurn(-1.2, 110);

//     // turnToAngle(55);
//     // intamo.spin(reverse, 80, pct);
//     // driveAndTurn(0.7, 55, 100, 100);

//     // turnToAngle(-135);
//     // clip.set(false);
//     // intakeLift.set(true);
//     // driveAndTurn(0.75, -130);
//     // inta.stop(brake);
// }
