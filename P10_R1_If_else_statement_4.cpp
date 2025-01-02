// write a programme that writes wheather is number is even or odd, using else if statement

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"TYPE THE NUMBER : ";
    cin>>num;

    if (num % 2 == 0 ){ /*here to find wheather a number is even or odd, we need to divide that number with 2*/
    /*if we get 0 as remainder, then its even. if we get 1 as remainder, then its odd*/
        /* the formula for this is ---> num % 2 == 0 (for even), num % 0 == 1 (for odd) */
            /*here we use "%" sign not "/" sign*/
        cout<<"EVEN";
    }

    else {
        cout<<"ODD";
    }
    
    
    return 0;
}
