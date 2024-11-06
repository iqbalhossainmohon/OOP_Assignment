//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
#include <cstdlib>
using namespace std;

class a_array {
    int isize, jsize;
    int *p;
public:
    a_array(int i, int j);
    int &put(int i, int j);
    int get(int i, int j);
};

a_array::a_array(int i, int j) {
    p = new int [i*j];
    if(!p) {
        cout << "Allocation error.\n";
        exit(1);
    }
    isize = i;
    jsize = j;
}

int &a_array::put(int i, int j) {
    if(i < 0 || i >= isize || j < 0 || j >= jsize) {
        cout << "Bounds error!\n";
        exit(1);
    }
    return p[i*jsize + j];
}

int a_array::get(int i, int j) {
    if(i < 0 || i >= isize || j < 0 || j >= jsize) {
        cout << "Bounds error!\n";
        exit(1);
    }
    return p[i*jsize + j];
}


int main(){

    a_array a(2, 3);
    int i, j;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            a.put(i, j) = i + j;
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            cout << a.get(i, j) << ' ';
        }
    }

    a.put(10, 10);

    return 0;
}
