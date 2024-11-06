//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
#include <cmath>
using namespace std;

void round(double &num);

int main(){
    double i = 100.4;
    cout << i << " rounded is ";
    round(i);
    cout << i << endl;

    i = 10.9;
    cout << i << " rounded is ";
    round(i);
    cout << i << endl;

    return 0;
}

void round(double &num) {
    double frac;
    double val;

    frac = modf(num, &val);
    if(frac - 0.5) {
        num = val;
    }
    else {
        num = val + 1.0;
    }
}

