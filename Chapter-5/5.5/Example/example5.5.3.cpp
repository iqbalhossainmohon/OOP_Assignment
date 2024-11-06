//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

int f(int a, int b) {
    return a + b;
}
int f(int a, int &b) {
    return a - b;
}

int main(){
    int x = 1, y = 2;

    cout << f(x, y);    // which version of f() is called??

    return 0;
}
