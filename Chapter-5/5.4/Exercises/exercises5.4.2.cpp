//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
#include <conio.h>
using namespace std;

void myclreol(int len = -1);

int main(){
    int i;
    gotoxy(1, 1);
    for(i = 0; i < 24; i++) {
        cout << "abcdefghijklmnopurstuvwxyz1234567890" << endl;
    }
    gotoxy(1, 2);
    myclreol();
    gotoxy(1, 4);
    myclreol(20);

    return 0;
}

void myclreol(int len) {
    int x, y;
    x = wherex();
    y = wherex();

    if(len == -1) {
        len = 80 -x;
    }
    int i = x;
    for( ; i <= len; i++) {
        cout << ' ';
    }
    gotoxy(x, y);
}

