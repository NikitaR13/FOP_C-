//
// Created by Nikita Roman on 10.02.2023.
//
#include "iostream"
#include "header.h"

void StreamWriter::OpenFile() {
    file.open(StreamWriter::a);
}

void StreamWriter::CloseFile(){
    file.close();
}

void StreamWriter::GetName() {
    std::cout<<StreamWriter::a<<"\n";
}

void StreamWriter::IsOpen() {
    if (file.is_open()){
        std::cout<<"File is open\n";
        return;
    }
    std::cout<<"File is closed\n";
}

void StreamWriter::WriteString(std::string A){
    file << A<<"\n";
}

void StreamWriter::WriteInt(int A){
    file << A<<"\n";
}

void StreamWriter::WriteDouble(double A){
    file << A<<"\n";
}