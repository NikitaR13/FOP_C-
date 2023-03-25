#ifndef OP_3_HEADER_H
#define OP_3_HEADER_H


class Matrix3x3 {
private:
    int matrix[3][3];

public:
    Matrix3x3();

    Matrix3x3(int arr[3][3]);

    Matrix3x3 multiply(Matrix3x3 other);

    void print();

    Matrix3x3 multiplyByScalar(double scalar);

    Matrix3x3 add(Matrix3x3 other);

    Matrix3x3 subtract(Matrix3x3 other);

    bool operator==(const Matrix3x3 &other) const;

    bool operator!=(const Matrix3x3 &other) const;

    bool operator>(const Matrix3x3 &other) const;

    bool operator<(const Matrix3x3 &other) const;
};

#endif