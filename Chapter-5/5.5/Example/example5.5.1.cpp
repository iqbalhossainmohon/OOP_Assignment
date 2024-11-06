//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

float f(float i) {
    return i / 2.0;
}
double f(double i) {
    return i /3.0;
}

int main(){
    float x = 10.09;
    double y = 10.09;

    cout << f(x) << endl;
    cout << f(y) << endl;
    cout << f(10.0);        // ambiguous, convert 10 to double or float??
    return 0;
}
