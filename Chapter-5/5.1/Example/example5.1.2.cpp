//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

class myclass {
    int x;
public:
    myclass() {
        x = 0;
    }
    myclass(int n) {
        x = n;
    }
    int get_x() {
        return x;
    }
};

int main(){
    myclass o1[10];
    myclass o2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < 10; i++) {
        cout << "o1[" << i << "]: " << o1[i].get_x() << endl;
        cout << "o2[" << i << "]: " << o2[i].get_x() << endl;
    }

    return 0;
}
