#ifndef OP_2_HEADER_H
#define OP_2_HEADER_H
#include <fstream>
#include <iostream>

using namespace std;

class StreamWriter {
private:
    ofstream file;
    char a[20] = {'d','e','f','.','t','x','t'};
public:

    StreamWriter() {ofstream file(a);}
    StreamWriter(char name[20]){
        for (int i = 0; i<20; ++i){
            a[i] = name[i];
        }
        ofstream file(name);
    }

    void OpenFile ();
    void CloseFile();
    void GetName();
    void IsOpen();
    void WriteString(std::string A);
    void WriteInt (int A);
    void WriteDouble (double A);

};
#endif //OP_2_HEADER_H
