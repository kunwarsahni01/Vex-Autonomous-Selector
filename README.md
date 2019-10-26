# Vex Autonomous Selector for PROS
![Screenshot_of_Selector](https://user-images.githubusercontent.com/22580992/67626102-d9e1d080-f814-11e9-84cd-63a44e6a35af.png)

## How to use:
1. Download the zip file release from here: https://github.com/kunwarsahni01/Vex-Autonomous-Selector/releases
2. Put the selector.h file in your include folder in your PROS Project.
3. Put the selector.cpp file in your sec folder in your PROS Project.
4. Place **selectorInit();** in void initazlize(){} in your main.cpp file.
5. Make if statements in your void **void autonomous() {}** like so:

  if(autonSelection == 1){ //run auton for Front Blue }

6. Create multiple if statements for all possible numbers of autonSelection.
7. All possible cases are listed below:

* autonSelection == 1 :Blue Fro nt 
* autonSelection == 2 : Blue Back
* autonSelection == 3 : Do Nothing
* autonSelection == -1 : Red Front
* autonSelection == -2 : Red Back
* autonSelection == -3 : Do Nothing
* autonSelection == 0 : Skills
