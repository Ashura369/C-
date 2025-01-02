// Sum of Array Elements Using Pointers

#include<iostream>
using namespace std;

int main()
{
     int arr[9999];
     int n;
        cout<<"enter total elements you want : ";
            cin>>n;
    
     for (int i = 0; i < n; i++)
     {
        cin>>arr[i];
     }

     int *p = arr;
     int sum = 0;
     
     for (int i = 0; i < n; i++)
     {
         sum += *p;
         p++; // "p++" increments the pointer p to point to the next element in the array
         // herev we had to write p++ bcoz *p implies arr[0]
     }

     cout<<"sum is -- "<<sum<<endl;
     



return 0;
}