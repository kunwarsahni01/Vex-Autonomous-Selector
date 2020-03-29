# Vex Autonomous Selector for PROS
![Screenshot_of_Selector](https://user-images.githubusercontent.com/22580992/67626102-d9e1d080-f814-11e9-84cd-63a44e6a35af.png)

## How to use:
1. Download the zip file release from here: [Releases](https://github.com/kunwarsahni01/Vex-Autonomous-Selector/releases)
2. Run this command from terminal: `prosv5 c fetch autoSelect@1.0.0.zip`
3. Then `cd` into your pros project directory in your terminal.
4. And Run this command from terminal: `prosv5 c apply autoSelect@1.0.0`
4. Put this: `#include "selection.h"` at the top of your main.cpp file in your PROS Project.
5. Place `selectorInit();` in `void initazlize(){}` in your main.cpp file.
6. Make if statements in your void `void autonomous() {}` like so:

  `if(autonSelection == 1){ //run auton for Front Red }`

7. Create multiple if statements for all possible numbers of autonSelection.
8. All default cases are listed below:

* autonSelection == 1 : Do Nothing
* autonSelection == 2 :Red Front
* autonSelection == 3 : Red Back
* autonSelection == -1 : Do Nothing
* autonSelection == -2 : Blue Front
* autonSelection == -3 : Blue Back
* autonSelection == 0 : Skills

##How to customize the selector
All configuration is done from the `selection.h` file.

Credit also to Sully|80508X
