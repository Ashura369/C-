/*

A year is a leap year if it follows the condition, the year should be evenly divisible by 4 then the year should be evenly divisible by 100 then lastly year should evenly divisible by 400 otherwise the year is not a leap year. 

Algorithm-->
If the year is divisible by 4,
    If the year is divisible by 100,
        If the year is divisible by 400, the year is a leap year
        else the year is not a leap year.
    else the year is a leap year
else, the year is not a leap year.

*/

#include<iostream>;
using namespace std;

int main()
{
     int year;
     cout<<"ENTER THE YEAR : ";
        cin>>year;
     if (year%4==0)
     {
        if (year%100 == 0)
        {
            if (year%400 == 0)
            {
                printf("%d YEAR IS A LEAP YEAR", year);
            }
            else{
                printf("%d YEAR IS NOT A LEAP YEAR", year);
            }
            
        }
        else{
            printf("%d YEAR IS A LEAP YEAR", year);
        }
        
     }
     else{
        printf("%d YEAR IS NOT A LEAP YEAR", year);
     }
     
return 0;
}