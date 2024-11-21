//
// Created by iqbal on 21/11/2024.
//

# include <iostream>
using namespace std;

void Xhandler(){
    try{
        throw "hello";
    }
    catch (const char *){
        cout << "Caught const char * inside Xhandler\n";
        throw;
    }
}


int main(){
    cout << "start\n";

    try{
        Xhandler();
    }

    catch (const char *){
        cout << "Caught const char * inside main\n";
    }
    cout << "end";

    return 0;
}