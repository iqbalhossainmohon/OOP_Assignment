//
// Created by iqbal on 21/11/2024.
//

# include <iostream>
using namespace std;

class B1{
    B1() {
        cout << " Constructing B1\n";
    }
    ~B1() {
        cout << " Destructing B1\n";
    }
};

class B2{
    B2() {
        cout << " Constructing B2\n";
    }
    ~B2() {
        cout << " Destructing B2\n";
    }
};

class D : public B1 , public B2{
    D() { cout << " Constructing D" << endl; }
    ~D() { cout << " Destructing D" << endl; }
};


int main(){
    D ob;

    return 0;
}