//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
#include <cstdlib>
using namespace std;

class myclass {
    int *p;
public:
    myclass(int i);
    myclass(const myclass &o);
    ~myclass(){delete p;}
    friend int get_val(myclass o);
};

myclass::myclass(int i) {
    p = new int;
    if(!p) {
        cout << "Allocation error." << endl;
        exit(1);
    }
    *p = i;
}

// Copy Constructor
myclass::myclass(const myclass &o) {
    p = new int;
    if(!p) {
        cout << "Allocation error." << endl;
        exit(1);
    }
    *p = *o.p;
}

int get_val(myclass o) {
    return *o.p;
}



int main(){
    myclass a(1), b(2);

    cout << get_val(a) << " " << get_val(b) << endl;
    cout << get_val(a) << " " << get_val(b) << endl;

    return 0;
}
