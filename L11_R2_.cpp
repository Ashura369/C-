// write a proramme that in which the numbers keep increasing by 2 till 100, 
// starting from 0 so that only even numbers will be printed
// for this we have to use FOR LOOP function

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;

    for (int i = 0; i <= 100; i++) /*here we took i=0 bcoz we want print even numbers till 100 and 0+2 = 2, and so on.... If we take i=1, then it will print only odd numbers till 100 as it begins from 1 and 1+2=3 and so on...*/
    {
        cout<<i<<endl;
        i++; /* here we have added extra "i++" bcoz we want to keep printing the numbers by 2*/
        // i++; /*you can add another i++ here to increase the numbers by 3 till 100*/
    }
    
    return 0;
}
