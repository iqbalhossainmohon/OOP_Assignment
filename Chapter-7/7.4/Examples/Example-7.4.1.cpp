//
// Created by iqbal on 21/11/2024.
//

// Multiple Inheritance
# include <iostream>
using namespace std;

class B1{
    int a;
public:
    B1(int x) {
        a = x;
    }
    int geta() {
        return a;
    }
};

class D1 : public B1{
    int b;
public:
    D1(int x, int y) : B1(y){
        b = x;
    }
    int getb() {
        return b;
    }
};

// Inherit a derived class and an indirect base .
class D2 : public D1{
    int c;
public:
    D2(int x, int y, int z) : D1(y, z){
        c = x;
    }

    /*
    Because bases inherited as public , D2 has access
    to public elements of both B1 and D1.
    */
    void show(){
        cout << geta () << " " << getb () << " ";
        cout << c << endl;
    }
};


int main(){
    D2 ob (1 , 2 , 3);
    ob.show();

    cout << ob. geta () << " " << ob. getb () << endl;

    return 0;
}