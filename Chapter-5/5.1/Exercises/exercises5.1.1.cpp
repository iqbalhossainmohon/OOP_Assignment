//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    char *p;
    int len;
public:
    strtype();
    strtype(char *s, int l);
    char *get_string() {
        return p;
    }
    int get_length() {
        return len;
    }
};

strtype::strtype() {
    p = new char [255];
    if(!p) {
        cout << "Allocation error" << endl;
        exit(1);
    }
    *p = '\0';
    len = 255;
}

strtype::strtype(char *s, int l) {
    if(strlen(s) >= l) {
        cout << "Allocating too little memoey!" << endl;
        exit(1);
    }
    p = new char[l];
    if(!p) {
        cout << "Allocation error" << endl;
        exit(1);
    }
    strcpy(p, s);
    len = l;
}

int main(){
    strtype s1;
    strtype s2("This is a test", 100);

    cout << "S1: " << s1.get_string() << " - Length: ";
    cout << s1.get_length() << endl;

    cout << "S2: " << s2.get_string() << " - Length: ";
    cout << s2.get_length() << endl;

    return 0;
}
