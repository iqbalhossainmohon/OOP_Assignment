//
// Created by iqbal on 21/11/2024.
//

#include <iostream>
using namespace std;

class base{
    int i;
public :
    base(int n){
        cout << " Constructing base class" << endl;
        i = n;
    }
    ~ base() {
        cout << " Destructing base class" << endl;
    }
    void showi() {
        cout << i << endl;
    }
};

class derived : public base{
    int j;
public :
    derived(int n) : base (n){
        cout << " Constructing derived class" << endl;
        j = 0;
    }

    ~ derived() {
        cout << " Destructing derived class" << endl;
    }
    void showj() {
        cout << j << endl;
    }
};