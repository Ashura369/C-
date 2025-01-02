// Practicing arrays with pointers

#include<iostream>
using namespace std;

int main()
{
    int arr[9999];
    int n;
    cout << "Enter total elements you want: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "All elements of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
    cout << endl;

    // Using pointers 
    int *a = &arr[0];  // Pointer `a` now points to the first element of the array `arr`
    
    cout << "*a -- " << *a << ", ";  // It will print the first element of the array
    cout << endl;
    cout << endl;
    
    cout << "a -- " << a << ", ";  // It will print the address of the first element of the array
    cout << endl;
    cout << endl;
    
    cout << "&a -- " << &a << ", ";  // It will print the address of the pointer `a` itself
    cout << endl;
    cout << endl;
    
    cout << "n -- " << n << ", ";  // It will print the total number of elements stored in the array
    cout << endl;
    cout << endl;

    // Printing all the values through an array using a pointer
    cout << "The elements of the array are (by using a pointer): ";
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << ", ";  // Moving the pointer to access subsequent elements of the array
    }
    
    cout << endl;
    cout << endl;


    /********************************************************************************************************/



    // printing even and odd no.s
    int evens=0,odds=0;
    cout<<"even no.s : ";
    for (int even = 0; even < n; even++)
    {
        if (arr[even] %2 == 0)
        {
            evens = arr[even];
            cout<<evens<<", ";
        }   
    }

    cout<<endl;
    cout<<endl;

    cout<<"odd no.s : ";
    for (int odd = 0; odd < n; odd++)
    {
        if (arr[odd] %2 == 1)
        {
            odds = arr[odd];
            cout<<odds<<", ";
        }
    }
    
    return 0;
}
