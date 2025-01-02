// Write a C++ program to reverse the elements of an array using pointers. 
// Do not use any additional arrays.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pointers to the beginning and end of the array
    int *pStart = arr; // Here "arr" refers to to "&arr[0]"
    int *pEnd = arr + n - 1;

            /*
                
                                    Let's break down the expression "arr + n - 1" in the context 

            Understanding "arr"-->
                --arr is the name of the array, and in C++, the name of an array is essentially a pointer to its first element.
                --So, arr is equivalent to &arr[0], meaning it points to the memory address of the first element in the array.
            Understanding "n"-->
                --n is an integer variable that holds the number of elements in the array. 
                --For example, if the array has 5 elements, then n = 5.
            
            Understanding Pointer Arithmetic-->
                --In C++, when you add an integer to a pointer, 
                    the result is a new pointer that is offset from the original pointer by that integer number of elements, not bytes.
                --If arr is a pointer to the first element of an array, then arr + 1 points to the second element, arr + 2 points to the third element, and so on.
            
            Breaking Down "arr + n - 1"
                --arr + n would point to the memory address just past the end of the array. For example, 
                    if n = 5, then arr + 5 would point to the memory location just after the last element in the array.
                --arr + n - 1 adjusts this to point to the last valid element in the array, 
                    which is the element at index n - 1 (since array indices start at 0).
                
                
            */

    // Reverse the array using pointers
    while (pStart < pEnd) 
        {
        int temp = *pStart; // This places the first element at the last position.
        *pStart = *pEnd; // This effectively moves the last element to the first position.
        *pEnd = temp; // The original first element (stored in temp) is assigned to the position where pEnd is pointing. 
                      // This places the first element at the last position.
        pStart++;
        pEnd--;
        // pStart++ increments the pStart pointer, moving it to the next element in the array (i.e., one position to the right).
        // pEnd-- decrements the pEnd pointer, moving it to the previous element in the array (i.e., one position to the left).
        }

                /*

                "pStart < pEnd" -->
                    --This checks if the value that pStart points to is at a memory address (or position) before the value that pEnd points to.
                    --If this is true, the loop continues running. If it's false (meaning pStart has caught up to or passed pEnd), the loop stops.

                    this means both pStart and pEnd points to memory address / index 
                    (ie pStart refers arr(0) and pEnd refers arr(n-1) which is the last element)
                    REMEMBER IT DOESNT POINT TO ARRAY ELEMENTS
                    IF YOU TRY SOLVING IT BY USING POINTERS IN THE CONDITION,
                        IT WILL PRINT THE VALUE BUT IF YOU WRITE THE ARRAY ELEMENTS IN ASCENDING ORDER.
                        BUT IF YOU TRY TO WRITE ELEMENTS IN DESCENDING ORDER IT WILL PRINT THE SAME ELEMENTS OF THE ARRAY

                        TRY YOUR SELF -- (*pStart < *pEnd)

                */

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
