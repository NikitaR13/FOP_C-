#include <iostream>
#include "header.h"


    Matrix3x3::Matrix3x3() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    Matrix3x3::Matrix3x3(int arr[3][3]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = arr[i][j];
            }
        }
    }

    Matrix3x3 Matrix3x3::multiply(Matrix3x3 other) {
        Matrix3x3 result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }

        return result;
    }

    void Matrix3x3::print() {
        for (int i = 0; i < 3; i++) {
            std::cout << "{";
            for (int j = 0; j < 3; j++) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << "}" << std::endl;
        }
    }

    Matrix3x3 Matrix3x3::multiplyByScalar(double scalar) {
        Matrix3x3 result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.matrix[i][j] = matrix[i][j] * scalar;
            }
        }

        return result;
    }

    Matrix3x3 Matrix3x3::add(Matrix3x3 other) {
        Matrix3x3 result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }

        return result;
    }

    Matrix3x3 Matrix3x3::subtract(Matrix3x3 other) {
        Matrix3x3 result;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                result.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
            }
        }

        return result;
    }

    bool Matrix3x3::operator==(const Matrix3x3& other) const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (matrix[i][j] != other.matrix[i][j]) {
                    return false;
                }
            }
        }

        return true;
    }

    bool Matrix3x3::operator!=(const Matrix3x3& other) const {
        return !(*this == other);
    }

    bool Matrix3x3::operator>(const Matrix3x3& other) const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (matrix[i][j] <= other.matrix[i][j]) {
                    return false;
                }
            }
        }

        return true;
    }

    bool Matrix3x3::operator<(const Matrix3x3& other) const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (matrix[i][j] >= other.matrix[i][j]) {
                    return false;
                }
            }
        }

        return true;
    }