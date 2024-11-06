//
// Created by iqbal on 03/11/2024.
//
#include <iostream>
using namespace std;

class coord {
    int x, y;
public:
    coord(){x = 0; y =0;}
    coord(int i, int j) {
        x = i; y = j;
    }
    void get_xy(int &i, int &j) {
        i = x; j = y;
    }
    coord operator-- ();        // prefix
    coord operator-- (int notused);     // postfix
};

// Overload prefix -- for coord class.
coord coord::operator--() {
    x--;
    y--;
    return *this;
}

// Overload postfix -- for coord class.
coord coord::operator--(int notused) {
    x--;
    y--;
    return *this;
}


int main(){
    coord o1(10, 10);
    int x, y;

    o1--;       // decrement an object
    o1.get_xy(x, y);
    cout << "(o1--) X: " << x << ", Y: " << y << endl;

    --o1;       // decrement an object.
    o1.get_xy(x, y);
    cout << "(--o1) X: " << x << ", Y: " << y << endl;

    return 0;
}
