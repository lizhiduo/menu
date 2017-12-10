/*************************************************************************
	> File Name: menu.h
	> Author: 
	> Mail: 
	> Created Time: 2017年12月10日 星期日 18时32分39秒
 ************************************************************************/

#ifndef _MENU_H
#define _MENU_H

#define MENU_NUM 4

typedef struct tagSysMenu{
    char          *text;
    unsigned char xpos;
    unsigned char ypos;
    void (*onOkFun)();
    void (*onCancelFun)();
}SysMenu, *pSysMenu;

void onOkKey(int current);
void onCancelKey(int current);

#endif
