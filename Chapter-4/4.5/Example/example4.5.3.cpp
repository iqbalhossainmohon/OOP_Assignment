//
// Created by iqbal on 02/11/2024.
//
#include<iostream>
using namespace std;

int main(){
    int *p;
    p = new int[5];

    if(!p) {
        cout << "Allocation error" << endl;
        return 1;
    }

    int i;
    for(i=0; i<5; i++){
        cout << "Here is integer at p [ " << i << " ]: " ;
        cout << p [ i ] << endl ;
    }
    delete [] p;

    return 0;
}