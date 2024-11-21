//
// Created by iqbal on 21/11/2024.
//


/*
    Throwing an exception from a function outside
    the try block.
*/
# include <iostream>
using namespace std;

void Xtest (int test){
    cout << "Inside Xtest, test is: " << test << "\n";
    if(test)
        throw test;
}


int main(){
    cout << "start\n";
    try{
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }

    catch (int i){
        cout << "Caught One ! Number is: ";
        cout << i << "\n";
    }
    cout << "end ";

    return 0;
}