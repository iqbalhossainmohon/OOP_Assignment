//
// Created by iqbal on 21/11/2024.
//

#include <iostream>
#include <cstring>
using namespace std;

template <class X> int find(X object, X *list, int size) {
    int i;

    for(i = 0; i < size; i++) {
        if(object == list[i]) {
            return i;
        }
        return -1;
    }
}

int main() {
    int a[] = {1, 2, 3, 4};
    char *c = "This is a text";
    double d[] = {1.1, 2.2, 3.3};

    cout << find(3, a, 4) << endl;
    cout << find('a', c, (int) strlen(c)) << endl;
    cout << find(0.0, d, 3);

    return 0;
}