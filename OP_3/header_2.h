#ifndef OP_3_HEADER_2_H
#define OP_3_HEADER_2_H

class Subset {
private:
    int set[10] = { 0 };

public:
    Subset();

    Subset(int arr[10]);

    Subset operator+(const Subset& other) const;

    bool operator==(const Subset& other) const;

    bool operator!=(const Subset& other) const;

    Subset& operator+=(int num);

    Subset& operator-=(int num);

    void print() const;
};

#endif //OP_3_HEADER_2_H
