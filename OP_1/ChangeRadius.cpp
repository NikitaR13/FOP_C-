//
// Created by Nikita Roman on 09.02.2023.
//
#include <iostream>
#include "voider.h"

void ChangeRadiusLink (double &x, double &y){
    if (x > y){
        x = x - y;
    }else{
        std::cout<<"error (R<0)";
    }
}

void ChangeRadiusPointer (double *x, double *y){
    double *tmp;
    *tmp = *x - *y;
    if (*x > *y){
        *x = *tmp;
    }else{
        std::cout<<"error (R<0)";
    }
}