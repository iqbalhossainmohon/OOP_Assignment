//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
using namespace std;

class letters {
    char ch;
public:
    letters (char c) {ch = c;}
    char get_ch() {
        return ch;
    }
};

int main() {
letters ob[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'ì', 'j' };

    int i;

    for(i=0; i<10; i++) {
        cout << ob[i].get_ch() <<' ';
    }
    cout << "\n";

    return 0;
}