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
   int operator== (coord ob2);
   int operator&& (coord ob2);
};

// Overload the == operator for coord class.
int coord::operator==(coord ob2) {
    return x == ob2.x && y == ob2.y;
}

// Overload the && operator for coord class.
int coord::operator&&(coord ob2) {
    return (x == ob2.x) && (y == ob2.y);
}


int main(){
    coord o1(10, 10), o2(5, 3), o3(10, 10), o4(0, 0);

    if(o1 == o2) {
        cout << "O1 same as O2" << endl;
    }
    else {
        cout << "O1 and O2 differ" << endl;
    }

    if(o1 == o3) {
        cout << "O1 same as O3" << endl;
    }
    else {
        cout << "O1 and O3 differ" << endl;
    }

    if(o1 && o2) {
        cout << "O1 && O2 is true" << endl;
    }
    else {
        cout << "O1 && O2 is false" << endl;
    }

    if(o1 && o4) {
        cout << "O1 && O4 is true" << endl;
    }
    else {
        cout << "O1 && O4 is false" << endl;
    }

    return 0;
}
