//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

int f(int a) {
    return a * a;
}
int f(int a, int b = 0) {
    return a * b;
}

int main(){
    cout << f(10, 2) << endl;
    cout << f(10);      // ambiguous - call f(int) or f(int, int)??

    cout << "\n";
    return 0;
}
