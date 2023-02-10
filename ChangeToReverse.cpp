//
// Created by Nikita Roman on 09.02.2023.
//
#include <iostream>
#include "voider.h"

void ChangeToReverseLink (double &x){
    x = 1 / x;
}
void ChangeToReversePointer (double *x){
    double tmp;
    tmp = 1 / *x;
    *x = tmp;
}