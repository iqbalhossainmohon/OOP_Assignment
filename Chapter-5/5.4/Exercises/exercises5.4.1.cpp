//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
#include <cstdlib>
using namespace std;

long mystrtol(const char *s, char **end, int base = 10) {
        return strtol(s, end, base);
    }

int main(){
    long x;
    char *s1 = "100234";
    char *p;

    x = mystrtol(s1, &p, 16);
    cout << "Base 16: " << x << endl;

    x = mystrtol(s1, &p, 10);
    cout << "Base 10: " << x << endl;

    x = mystrtol(s1, &p);
    cout << "Base 10 by default: " << x << endl;

    return 0;
}
