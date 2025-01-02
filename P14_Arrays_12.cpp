// Write a C++ program to count how many even and odd numbers are in an array. 
// The program should take the array size and elements as input and then output the counts.

#include<iostream>
using namespace std;

int main()
{
     int a[9999];
     int b;
     int even_nums=0;
     int odd_nums=0;

     cout<<"enter total no.s ";
        cin>>b;
    
     for (int i = 0; i < b; i++)
     {
        cin>>a[i];
     }

        for (int i = 0; i < b; i++)
        {
            if (i%2==0)
            {
                even_nums++;
            }
            else{
               odd_nums++;
            }
            
        }
        cout<<"evens : "<<even_nums<<endl;
        cout<<"odds : "<<odd_nums<<endl;
     
return 0;
}