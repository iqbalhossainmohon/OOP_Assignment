//
// Created by iqbal on 02/11/2024.
//
#include <iostream>
#include <cstdio>
using namespace std;

class  date {
    int day, month, year;
public:
    date(char *str);
    date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    void show() {
        cout << month << "/" << day << "/" << year << endl;
    }
};

date::date(char *str) {
    sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}


int main(){
    date sdate("11/02/2024");
    date idate(11, 02,2024);

    sdate.show();
    idate.show();

    return 0;
}
