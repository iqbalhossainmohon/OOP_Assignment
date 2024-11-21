//
// Created by iqbal on 21/11/2024.
//

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


class B2{
    int b;
public:
    B2(int x) {
        b = x;
    }
    int getb() {
        return b;
    }
};


class D : public B1 , public B2{
    int c;
public:
    D(int x, int y, int z) : B1(z), B2(y){
        c = x;
    }

    /*
        Because bases inherited as public , D has access
        to public elements of both B1 and B2.
    */

    void show(){
        cout << geta() << " " << getb() << " ";
        cout << c << endl;
    }
};


int main(){
    D ob (1 , 2 , 3);
    ob.show();

    return 0;
}