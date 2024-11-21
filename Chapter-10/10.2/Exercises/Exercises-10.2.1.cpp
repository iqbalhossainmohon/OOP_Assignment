//
// Created by iqbal on 21/11/2024.
//

#include <iostream>
using namespace std;

class num {
public:
    int i;
    num(int x) {
        i = x;
    }
    virtual void shownum() {
        cout << i << endl;
    }
};

class outhex : public num {
public:
    outhex (int n): num(n) {

    }
    void shownum() {
        cout << hex << i << endl;
    }
};

class outoct: public num {
public:
    outoct(int n): num(n) {

    }
    void shownum() {
        cout << oct << i << endl;
    }
};

int main() {
    outoct o(10);
    outhex h(20);

    o.shownum();
    h.shownum();

    return 0;
}