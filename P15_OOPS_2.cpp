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
// this is a programme we wrote which will print the values repeteadly
// you need to remember that you have to write (vehich v), 
// at the end of the programme you  just need to write print(v1) and print(v2)
// you can write depending on the no. of elements you have created


int main()
{
     vehicle v1;
        v1.name="car";
        v1.wheels=6;
        v1.seats=4;
    
     vehicle truck; // you can change the name of your sub-class and the complier will still work
        truck.name="truck";
        truck.wheels=12;
        truck.seats=6;
    
    print(v1);
    print(truck);

return 0;
}