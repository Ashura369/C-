/*
We can also subtract a constant from Pointers and 
it is the same as the addition of a constant to a pointer. 
For example, if an integer pointer stores the address 1000 and we subtract the value 5 from the pointer, 
it will store the new address as:

    >1000 - (5 * 4(size of an integer)) = 980
*/

// CPP program to demonstrate the subtraction of a constant
// from a pointer
#include <iostream>
using namespace std;

int main()
{

    int num = 100;

    int* ptr = &num;

    cout << "Address stored in ptr: " << ptr << endl;

    // Subtracting the integer value 1 from pointer ptr
    ptr = ptr - 1;
    cout << "Subtract 1 from ptr: " << ptr << endl;
    
    return 0;
}
