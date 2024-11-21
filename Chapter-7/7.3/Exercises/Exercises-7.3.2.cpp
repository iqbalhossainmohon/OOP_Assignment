//
// Created by iqbal on 21/11/2024.
//

# include <iostream>
using namespace std;


class vehicle{
    int num_wheels ;
    int range ;
public:
    vehicle (int w, int r){
        num_wheels = w;
        range = r;
    }
    void showv (){
        cout << " Wheels : " << num_wheels << endl;
        cout << " Range : " << range << endl;
    }
};

class car : public vehicle{
    int passengers ;
public:
    void show(){
        showv();
        cout << " Passengers : " << passengers << endl;
    }
};

class truck : public vehicle{
    int loadlimit ;
public:
    void show(){
        showv ();
        cout << " Loadlimit : " << loadlimit << endl;
    }
};
int main(){
    car c(5, 4, 500) ;
    truck t(3000 , 12 , 1200) ;

    cout << "Car: " << endl;
    c.show();
    cout << "\nTruck: " << endl;
    t.show();

    return 0;
}