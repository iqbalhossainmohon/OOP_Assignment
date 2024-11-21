//
// Created by iqbal on 21/11/2024.
//

#include <iostream>
#include <cstdlib>
using namespace std;

double divide(double a, double b) {
    try {
        if(!b) {
            throw(b);
        }
    }
    catch (double) {
        cout << "Cannot divide by Zero." << endl;
        exit(1);
    }
    return a/b;
}

int main() {
    cout << divide(10.0, 2.5);
    cout << divide(10.0, 0.0);

    return 0;
}