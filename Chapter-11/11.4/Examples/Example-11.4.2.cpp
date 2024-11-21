//
// Created by iqbal on 21/11/2024.
//

// This example catch (...) as a default .
# include <iostream>
using namespace std;

void Xhandler (int test){
    try{
        if(test ==0)
            throw test;
        if(test ==1)
            throw 'a';
        if(test ==2)
            throw 123.23;
    }
    catch (int i){
        cout << "Caught " << i << endl;
    }
    catch (...){
        cout << "Caught One !\n";
    }
}


int main(){
    cout << "start\n";
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    cout << "end ";

    return 0;
}