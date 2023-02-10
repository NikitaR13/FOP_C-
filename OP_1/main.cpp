#include <iostream>
#include "voider.h"

int main() {
    int matrix [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int x = 12;
    int y = 14;

    ChangeToModLink(x, y);
    std::cout<<x<<"\n"<<y<<"\n";
    
    double z = 2.5;
    ChangeToReversePointer(&z);
    std::cout<<z<<"\n";

    double r = 10;
    double m = 7;
    ChangeRadiusLink(r, m);
    std::cout<<r<<"\n";

    int first = 1;
    int second = 2;
    ChangeLinesPointer(&matrix, &first, &second);
    std::cout<<matrix[0][0]<<" "<<matrix[0][1]<<" "<<matrix[0][2]<<"\n";
    std::cout<<matrix[1][0]<<" "<<matrix[1][1]<<" "<<matrix[1][2]<<"\n";
    std::cout<<matrix[2][0]<<" "<<matrix[2][1]<<" "<<matrix[2][2]<<"\n";
    return 0;
}
