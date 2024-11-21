//
// Created by iqbal on 21/11/2024.
//

# include <iostream>
using namespace std;


void Xhandler(int test){
    try{
        if(test)
            throw test;
    }
    catch (int i){
        cout << " aught One ! Ex, #: " << i << endl ;
    }
}

int main(){
    cout << "start\n";
    Xhandler (1);
    Xhandler (2);
    Xhandler (0);
    Xhandler (3);
    cout << "end";

    return 0;
}