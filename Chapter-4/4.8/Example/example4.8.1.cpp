//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

int &f();
int x;

int main(){

    f() = 100;
    cout << x << endl;

    return 0;
}

int &f() {
    return x;
}
