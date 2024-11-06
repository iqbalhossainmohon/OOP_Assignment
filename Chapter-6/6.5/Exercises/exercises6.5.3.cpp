//
// Created by iqbal on 03/11/2024.
//
#include <iostream>
using namespace std;

class coord {
    int x, y;       // Coordinate values
public:
    coord(){x = 0; y =0;}
    coord(int i, int j) {
        x = i; y = j;
    }
    void get_xy(int &i, int &j) {
        i = x; j = y;
    }
    friend coord operator-- (coord &ob);   // Prefix
    friend coord operator-- (coord &ob, int notused);       // postfix
};

// Overload  -- (prefix) for coord class using a friend.
coord operator-- (coord &ob) {
    ob.x--;
    ob.y--;

    return ob;
}

// Overload  -- (postfix) for coord class using a friend.
coord operator-- (coord &ob, int notused) {
    ob.x--;
    ob.y--;

    return ob;
}


int main(){
    coord o1(10, 10);
    int x, y;

    -- o1;
    o1.get_xy(x,y);
    cout << "(--O1) X: " << x << ", Y: " << y << endl;

    o1--;
    o1.get_xy(x,y);
    cout << "(O1--) X: " << x << ", Y: " << y << endl;

    return 0;
}
