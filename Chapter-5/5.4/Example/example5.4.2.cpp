//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

double rect_area(double length, double width) {
    return length * width;
}

double rect_area(double length) {
    return length * length;
}

int main(){
    cout << "10 x 5.8 rectangle has area: ";
    cout << rect_area(10.0, 5.8) << endl;

    cout << "10 x 10 square has area: ";
    cout << rect_area(10.0) << endl;

    return 0;
}
