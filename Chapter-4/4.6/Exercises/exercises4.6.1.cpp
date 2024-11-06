//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

void rneg(int &i);
void pneg(int *i);

int main(){
    int i = 10, j = 20;
    rneg(i);
    pneg(&j);

    cout << i << ' ' << j << "\n";

    return 0;
}

void rneg(int &i) {
    i = -i;
}

void pneg(int *i) {
    *i = -*i;
}


