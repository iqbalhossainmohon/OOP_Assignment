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
    coord operator- (coord ob2);    // binary minus
    coord operator- ();     // unary  minus
};

// Overload - relative to coord class.
coord coord::operator-(coord ob2) {
    coord temp;

    temp.x = x - ob2.x;
    temp.y = y - ob2.y;

    return temp;
}

// Overload - relative to coord class.
coord coord::operator-() {
    x = -x;
    y = -y;

    return *this;
}


int main(){
    coord o1(10, 10), o2(5, 7);
    int x, y;

    o1 = o1 - o2;       //subtraction
    o1.get_xy(x, y);
    cout << "(o1 - o2) X: " << x << ", Y: " << y << endl;

    o1 = -o1;       // negation
    o1.get_xy(x, y);
    cout << "(-o1) X: " << x << ", Y: " << y << endl;

    return 0;
}
