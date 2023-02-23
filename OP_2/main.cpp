#include <iostream>
#include "header.h"



int main() {
    char name[20];
    int x = 7;
    double z = 30.3123123;
    std::string a = "Privet progery";
    std::cin>>name;
    StreamWriter A(name);
    A.GetName();
    A.IsOpen();
    A.OpenFile();
    A.IsOpen();
    A.WriteString(a);
    A.WriteInt(x);
    A.WriteDouble(z);
    A.CloseFile();
    return 0;

}
