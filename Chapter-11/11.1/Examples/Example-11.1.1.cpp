//
// Created by iqbal on 21/11/2024.
//

// Function template example .
# include <iostream>
using namespace std;

// This is a function template.
template <class X> void swapargs (X &a, X &b){
    X temp;
    temp = a;
    a = b;
    b= temp;
}

int main(){
    int i=10, j =20;
    float x=10, y =23.3;

    cout << "Original i, j: " << i << ' ' << j << endl;
    cout << "Original x, y: " << x << ' ' << y << endl;

    swapargs(i, j); // swap integers
    swapargs(x, y); // swap floats

    cout << "Swapped i, j: " << i << ' ' << j << endl;
    cout << "Swapped x, y: " << x << ' ' << y << endl;

    return 0;
}