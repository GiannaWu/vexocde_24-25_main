#include "basic_control.h"
#include "main.h"
#include "robot-config.h"



void keybind(){
    intaout();
    intain();
}

void intaout(){
    intamo.spin(fwd, 100, pct);
}
void intain(){
    intamo.spin(reverse, 100, pct);
}
