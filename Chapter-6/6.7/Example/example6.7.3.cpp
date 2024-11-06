//
// Created by iqbal on 03/11/2024.
//
#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE = 5;

class arraytype {
    int a[SIZE];
public:
    arraytype() {
        for(int i = 0; i < SIZE; i++) {
            a[i] = i;
        }
    }
    int &operator[] (int i);
};

int &arraytype::operator[](int i) {
    if(i < 0 || i > SIZE-1) {
        cout << "Index value of " << i << " is out of bounds." << endl;
        exit(1);
    }
    return a[i];
}



int main(){
    arraytype ob;

    for(int i = 0; i < SIZE; i++) {
        cout << ob[i] << " ";
    }

    // this generates a run-time error because ob[SIZE + 100] is out of range
    ob[SIZE + 100] = 99;        // error...!

    return 0;
}
