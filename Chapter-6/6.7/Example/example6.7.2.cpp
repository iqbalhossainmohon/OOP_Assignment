//
// Created by iqbal on 03/11/2024.
//
#include <iostream>
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
    int &operator[] (int i) {
        return a[i];
    }
};


int main(){
    arraytype ob;

    for(int i = 0; i < SIZE; i++) {
        cout << ob[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < SIZE; i++) {
        ob[i] = ob[i] + 10;     // [] on left of =
    }

    for(int i = 0; i < SIZE; i++) {
        cout << ob[i] << " ";
    }

    return 0;
}
