#pragma once

#include <string>
#include "display/lvgl.h"

//selector configuration
#define HUE 360
#define DEFAULT 1
#define AUTONS "Do Nothing", "Front", "Back"

namespace selector{

class Selector {

private:
	static lv_res_t redBtnmAction(lv_obj_t *btnm, const char *txt);
	static lv_res_t blueBtnmAction(lv_obj_t *btnm, const char *txt);
	static lv_res_t skillsBtnAction(lv_obj_t *btn);

public:
	static int auton;
	static int autonCount;
	static int hue;
	static const char *btnmMap[];
	void init();

};

const char *btnmMap[] = {AUTONS, ""};

void init(int hue = HUE, int default_auton = DEFAULT, const char **autons = btnmMap);

}
