//
// Created by iqbal on 21/11/2024.
//

void outdata(int i){
    cout << i;
}

void outdata ( double d){
    cout << setprecision(10) << setfill('#');
    cout << d;
    cout << setprecision(6) << setfill(' ');
}