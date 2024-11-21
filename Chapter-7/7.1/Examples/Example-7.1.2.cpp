//
// Created by iqbal on 21/11/2024.
//

#include <iostrem>
using namespace std;

class base
{
    int x;
    public :
    void setx (int n) { x = n; }
    void showx () {
        cout << x << endl;
    }
};


class derived : public base
{
    int y;
    public :
    void sety (int n) {
        y = n;
    }
    /*
    Cannot access private member of base class .
    x is a private member of base and not available
    within derived .
    */
    void show_sum () {
        cout << x+y << endl;
    } // Error !
    void showy () {
        cout << y << endl;
    }
};