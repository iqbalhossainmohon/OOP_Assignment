//
// Created by iqbal on 21/11/2024.
//

// Use typename
template <typename X> void swapargs (X &a, X &b){
    X temp;
    temp = a;
    a = b;
    b= temp;
}