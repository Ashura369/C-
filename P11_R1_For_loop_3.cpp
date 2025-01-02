// SUM OF ALL THE EVEN AND ODD NUMBERS FROM 0 TO 100

#include<iostream>;
using namespace std;

int main()
{
    

        int i;
        int sum=0;
        /*
        here we have to get "int sum=0;", if we dont do so the compiler will take any random number
        we cant write "int sum;"
        */
            for ( i = 0; i <=100; i+=2)
            
            {
            cout<<i<<endl;
            sum += i;      
            }

            cout<<endl;
            cout<<"the sum is :"<<sum<<endl;
            cout<<endl;

        int a;
        int add=0;

            for (a = 1; a <= 100; a+=2)
            {
            cout<<a<<endl;
            add += a;      
            }

            cout<<endl;
            cout<<"the add is :"<<add;
            cout<<endl;

     int plus_of_all = 0;
     plus_of_all = sum + add;
     cout<<"THE SUMMATION OF ALL THE EVEN AND ODD NUMBERS FROM 0 TO 100 :"<<plus_of_all;
     
return 0;
}