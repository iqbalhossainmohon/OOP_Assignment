//
// Created by iqbal on 21/11/2024.
//

template <class X>
void swapargs (X &a, X &b){
    X temp;
    temp = a;
    a = b;
    b= temp;
}

// This will not compile .
template <class X>
int i;
void swapargs (X &a, X &b){
    X temp;
    temp = a;
    a = b;
    b= temp;
}