//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

class squares {
    int num, sqr;
public:
    squares(int a, int b){num = a; sqr = b;}
    void show() {
        cout << num << ' ' << sqr << "\n" ;
    }
};

int main()
{
    squares ob[10] = {
        squares(1, 1),
        squares(2, 4),
        squares(3, 9),
        squares(4, 16),
        squares(5, 25),
        squares(6, 36),
        squares(7, 49),
        squares(8, 64),
        squares(9, 81),
        squares(10, 100),
    };
    int i;
    for(i = 0; i < 10; i++) {
        ob[i].show();
    }
    return 0;
}
