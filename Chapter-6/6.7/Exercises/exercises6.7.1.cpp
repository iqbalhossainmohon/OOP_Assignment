//
// Created by iqbal on 03/11/2024.
//
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    char *p;
    int len;
public:
    strtype(char *s);
    ~strtype() {
        cout << "Freeing " << (unsigned) p << endl;
        delete [] p;
    }
    char *get() {
        return p;
    }
    strtype &operator = (strtype &ob);
    char &operator[](int i);
};

strtype::strtype(char *s) {
    int l;
    l = strlen(s) +1;

    p = new char [l];
    if(!p) {
        cout << "Allocation error." << endl;
        exit(1);
    }
    len = l;
    strcpy(p, s);
}

strtype &strtype::operator=(strtype &ob) {
    if(len < ob.len) {
        delete [] p;
        p = new char [ob.len];
        if(!p) {
            cout << "Allocation error." << endl;
            exit(1);
        }
    }
    len = ob.len;
    strcpy(p, ob.p);
    return *this;
}

char &strtype::operator[](int i) {
    if(i < 0 || i > len - 1) {
        cout << endl;
        cout << "Index value of " << i << " is out-of-bounds." << endl;
        exit(1);
    }
    return p[i];
}


int main(){
    strtype a("Iqbal "), b("Hossain");
    cout << a.get() << endl;
    cout << b.get() << endl;

    a = b;
    cout << a.get() ;
    cout << b.get();

    cout << a[0] << a[1] << a[2] << endl;

    a[0] = 'X';
    a[1] = 'Y';
    a[2] = 'Z';
    cout << a.get() << endl;

    return 0;
}
