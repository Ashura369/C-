/*

We can add integer values to Pointers and the pointer is adjusted based on the size of the data type it points to. 
For example, if an integer pointer stores the address 1000 and we add the value 5 to the pointer, 
it will store the new address as:
    >1000 + (5 * 4(size of an integer)) = 1020

*/

// CPP program to demonstrate the addition of a constant to
// a pointer
#include <iostream>
using namespace std;

int main()
{

    int num = 20;
    int* ptr = &num;

    cout << "Address stored in ptr: " << ptr << endl;

    // Adding the integer value 1 to the pointer ptr
    ptr = ptr + 1;
    cout << "Adding 1 to ptr: " << ptr << endl;

    // Adding the integer value 2 to the pointer ptr
    ptr = ptr + 2;
    cout << "Adding 2 to ptr: " << ptr << endl;

    return 0;
}
