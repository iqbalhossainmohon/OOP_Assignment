//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

void f(unsigned char c) {
    cout << c;
}
void f(char c) {
    cout << c;
}

int main(){
    f('c');
    f(86);      // Which f() is called??

    return 0;
}
