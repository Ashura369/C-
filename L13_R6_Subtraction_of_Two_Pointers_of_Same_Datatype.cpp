/*
The Subtraction of two pointers can be done only when both pointers are of the same data type. 
The subtraction of two pointers gives the number of elements present between the two pointers.
*/

// CPP program to demonstrate the subtraction of two
// pointers
#include <iostream>
using namespace std;

int main()
{

    int num = 45;

    int* ptr1 = &num;

    // Adding 4 to ptr1 and stored in ptr2
    int* ptr2 = ptr1 + 4;

    cout << "Address stored in ptr1:" << ptr1 << endl;
    cout << "Address stored in ptr2:" << ptr2 << endl;

    // Subtracting ptr2 from ptr1
    cout << "ptr2 - ptr1 = " << ptr2 - ptr1 << endl;

    
    return 0;
}
