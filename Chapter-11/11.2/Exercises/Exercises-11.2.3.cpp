//
// Created by iqbal on 21/11/2024.
//

#include <iostream>
using namespace std;

template <class X> class input {
    X data;
public:
    input(char *s, X min, X max);
    //...
};

template <class X>input<X> :: input(char *s, X min, X max) {
    do {
        cout << s << ": ";
        cin >> data;
    }
    while (data < min || data > max);
}

int main() {
    input <int> i ("Enter int", 0, 10);
    input <char> c ("Enter char", 'A', 'Z');

    return 0;
}