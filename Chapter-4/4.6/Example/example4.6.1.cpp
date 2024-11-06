//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

void swapargs(int &x, int &y);

int main(){
    int i = 10, j = 19;

    cout << "i = " << i << ", ";
    cout << "j = " << j << endl;

    swapargs(i, j);
    cout << "After swapping: ";
    cout << "i = " << i << ", ";
    cout << "j = " << j << endl;

    return 0;
}

void swapargs(int &x, int &y) {
    int t;
    t = x;
    x = y;
    y = t;
}
