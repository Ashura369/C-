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

     int *SecondElement = &arr[1];
     int *SecondLastElement = &arr[n-2]; // (n-2)  refers second last element

     int temporary = *SecondElement;
     *SecondElement = *SecondLastElement;
     *SecondLastElement = temporary;

     cout<<"swapped elements of second and sceond last element : ";
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<", ";
     }
     

return 0;
}