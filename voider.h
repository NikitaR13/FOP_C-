#ifndef OP_1_VOIDER_H
#define OP_1_VOIDER_H

void ChangeToModLink (int &x, int &y);
void ChangeToModPointer (int *x, int *y);

void ChangeToReverseLink (double &x);
void ChangeToReversePointer (double *x);

void ChangeRadiusLink (double &x, double &y);
void ChangeRadiusPointer (double *x, double *y);

void ChangeLinesLink (int (&matrix)[3][3], int &x, int &y);
void ChangeLinesPointer (int (*matrix)[3][3], int *x, int *y);
#endif
