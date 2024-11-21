//
// Created by iqbal on 21/11/2024.
//

// This program will not compile .
# include <iostream>
using namespace std;
class base{
    protected:
        int a, b;
    public :
        void setab(int n, int m) {
        a = n; b = m;
    }
};

class derived : protected base{
    int c;
public :
    void setc(int n) {
        c = n;
    }
    // this function has access to a and b from base
    void showabc(){
        cout << a << " " << b << " " << c << endl;
    }
};

int main(){
    derived ob;

    // ERROR : setab () is now a protected member of base .
    ob.setab(1 , 2); // setab () is not accessible here .
    ob.setc(3) ;
    ob.showabc();

    return 0;
}