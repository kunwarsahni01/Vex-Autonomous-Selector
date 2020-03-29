#ifndef SELECTION_H
#define SELECTION_H

namespace selector{

void init();
extern int autonSelection;

// selector configuration
#define HUE 360 // color of theme from 0-360
#define AUTONS "Do Nothing", "Front", "Back" //names of the autonomos programs
#define DEFAULT 1 // default auton

} // namespace selector

#endif
