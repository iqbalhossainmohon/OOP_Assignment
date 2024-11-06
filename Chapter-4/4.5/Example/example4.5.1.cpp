//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

int main(){
    int *p;
    p = new int(9);

    if(!p) {
        cout << "Allocation error." << endl;
        return 1;
    }
    cout << "Here is integer at p: " << *p << endl;
    delete p;

    return 0;
}