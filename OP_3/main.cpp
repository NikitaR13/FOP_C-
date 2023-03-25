#include <iostream>
#include "header.h"


int main() {

    int m1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    Matrix3x3 matrix1(m1);
    matrix1.print();

    Matrix3x3 matrix2;
    matrix2 = matrix1.multiplyByScalar(2.0);
    matrix2.print();

    Matrix3x3 matrix3;
    int m3[3][3] = { {1, 1, 1}, {1, 1, 1}, {1, 1, 1} };
    matrix3 = Matrix3x3(m3);
    matrix3.print();

    Matrix3x3 matrix4;
    matrix4 = matrix2.add(matrix3);
    matrix4.print();

    Matrix3x3 matrix5;
    int m5[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };
    matrix5 = Matrix3x3(m5);
    matrix5.print();

    Matrix3x3 matrix6;
    matrix6 = matrix4.multiply(matrix5);
    matrix6.print();

    if (matrix6 == matrix4) {
        std::cout << "Matrix6 is equal to Matrix4." << std::endl;
    }
    else {
        std::cout << "Matrix6 is not equal to Matrix4." << std::endl;
    }

    if (matrix6 > matrix4) {
        std::cout << "Matrix6 is greater than Matrix4." << std::endl;
    }
    else {
        std::cout << "Matrix6 is not greater than Matrix4." << std::endl;
    }

    if (matrix6 < matrix4) {
        std::cout << "Matrix6 is less than Matrix4." << std::endl;
    }
    else {
        std::cout << "Matrix6 is not less than Matrix4." << std::endl;
    }

    return 0;
}