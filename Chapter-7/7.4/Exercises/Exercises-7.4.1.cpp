//
// Created by iqbal on 21/11/2024.
//

# include <iostream>
using namespace std;


class A{
    A() {
        cout << " Constructing A\n";
    }
    ~A() {
        cout << " Destructing A\n";
    }
};

class B{
    B() {
        cout << " Constructing B\n";
    }
    ~B() {
        cout << " Destructing B\n";
    }
};

class C : public A, public B{
    public :
    C() {
        cout << " Constructing C\n";
    }
    ~C() {
        cout << " Destructing C\n";
    }
};


int main (){
    C ob;

    return 0;
}