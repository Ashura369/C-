// Write a C++ program that uses a switch statement to determine the month name based on a numerical input (1-12). 
// The program should display the corresponding month name (e.g., 1 for January, 12 for December). 
// If the user enters an invalid number (outside the range of 1-12), // display an error message.


#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout<<"ENETER THE NUMBER : ";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"january";
        break;
    case 2:
        cout<<"february";
        break;
    case 3:
        cout<<"march";
        break;
    case 4:
        cout<<"april";
        break;
    case 5:
        cout<<"may";
        break;
    case 6:
        cout<<"june";
        break;
    case 7:
        cout<<"july";
        break;
    case 8:
        cout<<"august";
        break;
    case 9:
        cout<<"september";
        break;
    case 10:
        cout<<"october";
        break;
    case 11:
        cout<<"november";
        break;
    case 12:
        cout<<"december";
        break;
    
    
    default:
        cout<<"ERROR";
        break;
    }
    return 0;
}



