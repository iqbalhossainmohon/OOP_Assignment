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


int main(){
    strtype a("Iqbal "), b("Hossain");
    cout << a.get() << endl;
    cout << b.get() << endl;

    a = b;
    cout << a.get() ;
    cout << b.get();

    return 0;
}
