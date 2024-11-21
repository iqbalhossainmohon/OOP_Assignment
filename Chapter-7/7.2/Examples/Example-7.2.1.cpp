//
// Created by iqbal on 21/11/2024.
//

# include <iostream>
using namespace std;

class samp{
    int a;
protected :
    int b;
    public :
    int c;

    samp (int n, int m) {
        a = n; b = m;
    }
    int geta() {
        return a;
    }
    int getb() {
        return b;
    }
};


int main(){
    samp ob(10, 10) ;

    // ob.b = 99; Error ! b is protected and thus private
    ob.c = 30; // OK , c is public
    cout << ob.geta() << " ";
    cout << ob.getb() << " " << ob.c << endl;

    return 0;
}