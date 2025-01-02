// FIND THE SUM OF ALL THE EVEN NUMBERS FROM 0 TO 100, using FOR LOOP

#include<iostream>;
using namespace std;

int main()
{
     int i;
     int sum=0;
     for ( i = 2; i <= 100 ; i+=2)
     
     /*

     {
      cout<<i<<endl; 
     }

     // this will first print all the even numbers fron  0 to 100
     // this "i" here represents all the even numbers from 0 to 100

     if we remove the comments function, and run the programme, it will add the last odd number ie 100 
     and add it to the sum value.

     */

      {
        cout<<i<<endl; // if you do this the compiler will not add the final even number to the "sum"
         sum += i; // this will give the sum of all the even numbers from 0 to 100
         // in "sum += i" this "i" here represents all the even numbers from 0 to 100
      }

      cout<<"the sum of all even numbers will be :" << sum<<endl;
     
return 0;
}