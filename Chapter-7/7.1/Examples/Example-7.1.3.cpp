//
// Created by iqbal on 21/11/2024.
//


// This program contains an error
# include <iostream>
using namespace std;
class base{
    int x;
    public :
    void setx (int n) {
        x = n;
    }
    void showx () {
        cout << x << endl;
    }
};

// Inherit base as private
class derived : private base
{
    int y;
    public :
    void sety (int n) {
        y = n;
    }
    void showy () {
        cout << y << endl;
    }
};


int main ()
{
    derived ob;
    ob.setx (10) ;     // ERROR - now private to derived class
    ob.sety (20) ;     // Access member of derived class --- OK
    ob.showx ();         // ERROR - now private to derived class
    ob.showy ();         // Access member of derived class --- OK
    return 0;
}