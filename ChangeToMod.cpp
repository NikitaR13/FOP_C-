//
// Created by Nikita Roman on 09.02.2023.
//
#include <iostream>
#include "voider.h"
void ChangeToModLink (int &x, int &y){
    int tmp;
    if (x > y){
        x = x % y;
    }else{
        y = y % x;
    }
}

void ChangeToModPointer (int *x, int *y){
    int tmp;
    if (x>y){
        tmp = *x % *y;
        *x = tmp;
    }else{
        tmp = *y % *x;
        *y = tmp;
    }
}
