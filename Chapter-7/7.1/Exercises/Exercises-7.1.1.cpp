//
// Created by iqbal on 21/11/2024.
//

# include <iostream>
using namespace std;

class mybase{
    int a, b;
public :
    int c;
    void setab(int i, int j){
        a = i; b = j;
    }
    void getab(int &i, int &j){
        i = a; j = b;
    }
};

class derived1 : public mybase{
    // ...
};

class derived2 : private mybase{
    // ...
};

int main(){
    derived1 o1;
    derived2 o2;
    int i, j;

    // ...
}