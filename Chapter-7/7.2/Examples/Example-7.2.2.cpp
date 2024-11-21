//
// Created by iqbal on 21/11/2024.
//

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

class derived : public base{
    int c;
    public :
    void setc (int n) { c = n; }
    void showbc ()
    {
        cout << a << " " << b << " " << c << endl;
    }
};

int main(){
    derived ob;

    /*
    a and b are not accessible here because they are
    private to both base and derived .
    */

    ob.setab (1, 2);
    ob.setc (3);
    ob.showbc ();

    return 0;
}