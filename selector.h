#ifndef _SELECTOR_H_
#define _SELECTOR_H_


#include "api.h"
class selector
{
public:


static lv_res_t redBtnmAction(lv_obj_t *btnm, const char *txt);


static lv_res_t blueBtnmAction(lv_obj_t *btnm, const char *txt);


static lv_res_t skillsBtnAction(lv_obj_t *btn);

};

extern int autonSelection;

void selectorInit(void);


#endif
