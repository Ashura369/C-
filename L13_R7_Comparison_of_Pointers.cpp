// C++ Program to illustrate the pointer comparison
#include <iostream>
using namespace std;

int main()
{
    // declaring some pointers
    int num = 10;
    int* ptr1 = &num;
    int** ptr2 = &ptr1;
    int* ptr3 = *ptr2;

    // comparing equality
    if (ptr1 == ptr3) {
        cout << "Both point to same memory location";
    }
    else {
        cout << "ptr1 points to: " << ptr1 << endl;
        cout << "ptr3 points to: " << ptr3 << endl;
    }
    return 0;
}
