//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    char *p;
public:
    strtype(char *s);
    ~strtype() {
        delete []p;
    }
    char *get() {
        return p;
    }
};

strtype::strtype(char *s) {
    int l;

    l = strlen(s) + 1;
    p = new char[1];

    if(!p) {
        cout << "Allocation error.\n";
        exit(1);
    }
    strcpy(p, s);
}

void show(strtype &x) {
    char *s;
    s = x.get();
    cout << s << "\n";
}

int main(){
    strtype a("Hello"), b("There");

    show(a);
    show(b);

    return 0;
}
