/*************************************************************************
	> File Name: menu.c
	> Author: 
	> Mail: 
	> Created Time: 2017年12月10日 星期日 18时47分04秒
 ************************************************************************/

#include<stdio.h>

#include"menu.h"

void menu1OnOK(){

    printf("[%s][%s]\n", __FILE__, __func__);
}

void menu1Cancel(){

    printf("[%s][%s]\n", __FILE__, __func__); 
}

void menu2OnOK(){

    printf("[%s][%s]\n", __FILE__, __func__);
}

void menu2Cancel(){

    printf("[%s][%s]\n", __FILE__, __func__); 
}

void menu3OnOK(){

    printf("[%s][%s]\n", __FILE__, __func__);
}

void menu3Cancel(){

    printf("[%s][%s]\n", __FILE__, __func__); 
}



static SysMenu menu[MENU_NUM] = {
    {"menu1", 0, 48, menu1OnOK, menu1Cancel},    
    {"menu2", 1, 48, menu2OnOK, menu2Cancel},    
    {"menu3", 2, 48, menu3OnOK, menu3Cancel},    
};

void onOkKey(int current){
    if(current>=MENU_NUM){
        printf("error\n");
        return;
    }
    menu[current].onOkFun();
}

void onCancelKey(int current){
    if(current>=MENU_NUM){
        printf("error\n");
        return;
    }
    menu[current].onCancelFun();
}


