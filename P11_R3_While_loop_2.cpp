// print the first multiple of 5 which is also a multiple of 7

#include<iostream>
using namespace std;

int main()
{
     cout<<endl;
     cout<<endl;

     int i = 1;
     /*
     you should start i from 1 instead of 0
     Start from i = 1: Starting from 1 ensures that 0 is not considered, as 0 is divisible by any number.
     */
     cout<<"the first no. divisible by both 5 and 7 are using while loop : ";
     while (true)
     {
        if (i % 5 == 0 && i %7 ==0)
        {
            cout<<i<<endl;  
            break;
        }
        
        i++;
     }

     cout<<endl;
     cout<<endl;

     cout<<"the first no. divisible by both 5 and 7 are using for loop : ";
     for (int j = 1; ; i++)
     {
        if (i%5==0 && i%7==0)
        {
            cout<<i<<endl;
            break;
        }
        
     }
     
     

     
return 0;
}