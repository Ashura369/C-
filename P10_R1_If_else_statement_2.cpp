// Write a C++ program that determines the day of the week based on a numerical input (1-7). 
// The program should display the corresponding day name (e.g., 1 for Monday, 7 for Sunday). 
// If the user enters an invalid number (outside the range of 1-7), display an error message.

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cout<<"ENTER THE NUMBER : "<<endl;
    cin>>number;

    if(number==1){
        cout<<"MONDAY";
    }
    else if(number==2){
        cout<<"TUESDAY";
    }
    else if(number==3){
        cout<<"WEDNESDAY";
    }
    else if(number==4){
        cout<<"THURSDAY";
    }
    else if(number==5){
        cout<<"FRIDAY";
    }
    else if(number==6){
        cout<<"SATURDAY";
    }
    else if(number==7){
        cout<<"SUNDAY";
    }

    else{
        cout<<"ERROR";
    }

    return 0;
}
