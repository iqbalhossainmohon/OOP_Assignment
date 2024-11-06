//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

class myclass {
    int x;
public:
    myclass(int n = 0) {
        x = n;
    }
    int get_x() {
        return x;
    }
};

int main(){
    myclass o1(10);
    myclass o2;

    cout << "O1: " << o1.get_x() << endl;
    cout << "O2: " << o2.get_x() << endl;

    return 0;
}
