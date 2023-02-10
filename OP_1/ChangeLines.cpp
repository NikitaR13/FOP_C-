//
// Created by Nikita Roman on 09.02.2023.
//
#include <iostream>
#include "voider.h"

void ChangeLinesLink (int (&matrix)[3][3], int &x, int &y){
    for (int i = 0; i < 3; i++){
        int tmp = matrix[x][i];
        matrix [x][i] = matrix [y][i];
        matrix [y][i] = tmp;
    }
}

void ChangeLinesPointer (int (*matrix)[3][3], int *x, int *y) {
    for (int i = 0; i < 3; i++){
        int tmp = *matrix[*x][i];
        *matrix [*x][i] = *matrix [*y][i];
        *matrix [*y][i] = tmp;
    }
}