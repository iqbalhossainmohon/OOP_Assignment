//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
#include <cstdlib>
using namespace std;

class A_array {
    int *p;
    int size;
public:
    A_array(int sz) {
        p = new int[sz];
        if(!p) {
            exit(1);
        }
        size = sz;
        cout << "Using 'normal' constructor" << endl;
    }
    ~A_array() {
        delete [] p;
    }
    A_array(const A_array &a);
    void put(int i, int j) {
        if(i >= 0 && i < size) {
            p[i] = j;
        }
    }
    int get(int i) {
        return p[i];
    }
};

A_array::A_array(const A_array &a) {
    int i;
    size = a.size;
    p = new int[a.size];
    if(!p) {
        exit(1);
    }
    for(i = 0; i < a.size; i++) {
        p[i] = a.p[i];
        cout << "Using copy constructor" << endl;
    }
}


int main(){
    A_array num(10);
    int i;

    for(i = 0; i < 10; i++) {
        num.put(i, i);
    }

    for(i = 9; i >=0; i--) {
        cout << num.get(i);
    }
    cout << "\n";
    A_array x = num;
    for(i = 0; i < 10; i++) {
        cout << x.get(i);
    }

    return 0;
}
