//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

int dif(int a, int b) {
    return a - b;
}

float dif(float a, float b){
    return a - b;
}

int main(){
    int (*p1)(int, int);
    float (*p2)(float, float);

    p1 = dif;
    p2 = dif;

    cout << p1(10, 5);
    cout << p2(10.5, 8.5);

    return 0;
}
