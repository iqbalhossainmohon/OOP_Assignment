//
// Created by iqbal on 21/11/2024.
//

// This example will not work .
# include <iostream>
using namespace std;

int main(){
    cout << "start \n";
    try{
        cout << "Inside try block\n";
        throw 10;
        cout << "This will not execute";
    }
    catch ( double i){
        cout << "Caught One ! Number is: ";
        cout << i << "\n";
    }
    cout << "end ";

    return 0;
}