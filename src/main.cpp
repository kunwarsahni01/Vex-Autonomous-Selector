#include "main.h"
void initialize() { selector::init(); }

void disabled() {}

void competition_initialize() {}

void autonomous() {}

void opcontrol() {
  while (true) {
    pros::delay(20);
  }
}
