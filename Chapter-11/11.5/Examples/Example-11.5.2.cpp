//
// Created by iqbal on 21/11/2024.
//

# include <iostream>
# include <new>
using namespace std;

int main(){
    double *p;
    do{
        try{
            p = new double [100000];
        }

        catch (bad_alloc xa){
            cout << "Allocation failure.\n";
            return 1;
        }
    }
    while (p);

    return 0;
}