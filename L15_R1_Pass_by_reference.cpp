// learning pass by reference

#include<iostream>
using namespace std;

class vehicle
{
    public :

    string name;
    int wheels;
    int seats;
};

void print(vehicle v){
    cout<<"name : "<<v.name<<", wheels : "<<v.wheels<<", seats : "<<v.seats<<endl;
}

void change(vehicle & v) //we wanted to change the name of vehicle, hence we took "(vehicle & v)" -- called pass by reference
// you can change whatever you like
// when you remove the "&" it wil print the same value, there will be no change
    // this is called pass by value
{
    v.name="bike";
    v.wheels=2;
    v.seats=2;
}

int main()
{
     vehicle v;
        v.name="car";
        v.wheels=6;
        v.seats=4;
    

    print(v); // older v
    change(v); // pass by reference -- here value got changed
    print(v); // new v
    

return 0;
}