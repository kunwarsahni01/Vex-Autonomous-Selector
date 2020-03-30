#include "main.h"
void initialize() { selector::init(); }

void disabled() {}

void competition_initialize() {}

void autonomous() {
  printf("Selected Auton: %d\n", selector::get());
  pros::delay(500);
}

void opcontrol() {
  pros::Controller master(CONTROLLER_MASTER);
  while (true) {
    if(master.get_digital(DIGITAL_LEFT))
      autonomous();
    pros::delay(20);
  }
}
