//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

class myclass {
    int x;
public:
    myclass() {
        x = 0;
    }
    myclass(int n) {
        x = n;
    }
    int get_x() {
        return x;
    }
    void set_x(int n) {
        x = n;
    }
};

int main(){
    myclass *p;
    myclass ob(10);

    p = new myclass[10];
    if(!p) {
        cout << "Allocation error." << endl;
        return 1;
    }

    for(int i = 0; i < 10; i++) {
        cout << "p[" << i << "]: " << p[i].get_x() << endl;
    }

    return 0;
}
