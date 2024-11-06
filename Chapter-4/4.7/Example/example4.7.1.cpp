//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

class  myclass {
    int who;
public:
    myclass(int n) {
        who = n;
        cout << "Constructing " << who << endl;
    }
    ~myclass() {
        cout << "Destructing " << who << endl;
    }
    int id() {
        return who;
    }
};
void f(myclass o) {
    cout << "Received " << o.id() << endl;
}

int main(){
    myclass x(1);
    f(x);

    return 0;
}
