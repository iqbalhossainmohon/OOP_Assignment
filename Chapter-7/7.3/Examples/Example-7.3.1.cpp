//
// Created by iqbal on 21/11/2024.
//

# include <iostream>
using namespace std;

class base{
    public :
        base() {
             cout << " Constructing base class" << endl;
        }
        ~ base() {
            cout << " Destructing base class" << endl;
        }
};

class derived : public base{
    public :
        derived(){
            cout << " Constructing derived class" << endl;
        }
        ~ derived(){
            cout << " Destructing derived class" << endl;
    }
};

int main(){
    derived o;

    return 0;
}