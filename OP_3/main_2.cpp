#include <iostream>
#include "header_2.h"


int main(){
/*Square s1(0.0, 0.0, 5.0, 3.14 / 4.0);
    Square s2(0.0, 0.0, 5.0, 3.14 / 4.0);

    cout << "area s1: " << s1.area() << endl;
    cout << "area s2: " << s2.area() << endl;

    if (s1 == s2) {
        cout << "s1 == s2" << endl;
    }
    else if (s1 < s2) {
        cout << "s1 < s2" << endl;
    }
    else if (s1 > s2) {
        cout << "s1 > s2" << endl;
    }
    else {
        cout << "s1 != s2" << endl;
    }

    s1.scale(2);
    cout << "area s1: " << s1.area() << endl;

    s1.move(1, 2);
    s1.kordi();*/

int arr1[10] = { 1, 3, 1, 0, 1, 0, 1, 0, 1, 0 };
int arr2[10] = { 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 };

Subset s1(arr1);
Subset s2(arr2);

// Test operator+
Subset s3 = s1 + s2;
s3.print(); // Expected output: { 0 1 2 3 4 5 6 7 8 9 }

// Test operator==
if (s1 == s2) {
std::cout << "s1 is equal to s2" << std::endl;
}
else {
std::cout << "s1 is not equal to s2" << std::endl;
}

// Test operator!=
if (s1 != s2) {
std::cout << "s1 is not equal to s2" << std::endl;
}
else {
std::cout << "s1 is equal to s2" << std::endl;
}

// Test operator+=
s1 += 5;
s1.print(); // Expected output: { 1 5 7 9 }

// Test operator-=
s2 -= 2;
s2.print(); // Expected output: { 1 3 5 7 9 }

return 0;
}