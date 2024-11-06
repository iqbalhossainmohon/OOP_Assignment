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
    coord operator+ (coord ob2);
    coord operator- (coord ob2);
    coord operator= (coord ob2);
};

// Overload + relative to coord class.
coord coord::operator+(coord ob2) {
    coord temp;

    temp.x = x + ob2.x;
    temp.y = y + ob2.y;

    return temp;
}

// Overload - relative to coord class.
coord coord::operator-(coord ob2) {
    coord temp;

    temp.x = x - ob2.x;
    temp.y = y - ob2.y;

    return temp;
}

// Overload = relative to coord class.
coord coord::operator=(coord ob2) {
        x = ob2.x;
    y = ob2.y;

    return *this;
}

int main(){
    coord o1(10, 10), o2(5, 3), o3;
    int x, y;

    // add two objects = this calls operator+()
    o3 = o1 + o2;
    o3.get_xy(x, y);
    cout << "(o1 + O2) X: " << x << ", Y: " << y << endl;

    // subtract two objects
    o3 = o1 - o2;
    o3.get_xy(x, y);
    cout << "(o1 - O2) X: " << x << ", Y: " << y << endl;

    // Assign an object.
    o3 = o1;
    o3.get_xy(x, y);
    cout << "(O3 = O1) X: " << x << ", Y: " << y << endl;

    return 0;
}