// Write a C++ program that reads an array of integers from the user 
// and swaps the first and last elements of the array using pointers.

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

    //  pointers to the first and last element
     int *Pfirst = &arr[0]; // pFirst is a pointer that points to the first element of the array (arr[0]).
     int *Plast = &arr[n-1]; // pLast is a pointer that points to the last element of the array (arr[n-1]).


    //  swapping the first and last element
    int temporary = *Pfirst; // We create a temporary variable temp and store the value pointed to by pFirst (the first element) in it.
    *Pfirst = *Plast; // We then assign the value pointed to by pLast (the last element) to the location pointed to by pFirst.
    *Plast = temporary; // Finally, we assign the value stored in temp (original first element) to the location pointed to by pLast.


    // printing the swapped elements
    cout<<"printing the swapped elements : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<", ";
    }
    
     
return 0;
}