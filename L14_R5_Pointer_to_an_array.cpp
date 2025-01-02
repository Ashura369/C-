/*
        int main()
        {
        int arr[5] = { 1, 2, 3, 4, 5 };
        int *ptr = arr;

        printf("%p\n", ptr);
        return 0;
        }

            In the above program, we have a pointer ptr that points to the 0th element of the array.
            Similarly, we can also declare a pointer that can point to whole array instead of only one element of the array. 
            This pointer is useful when talking about multidimensional arrays. 

"int (*ptr)[10];"

    Here ptr is pointer that can point to an array of 10 integers. 
    Since subscript have higher precedence than indirection, 
        it is necessary to enclose the indirection operator and pointer name inside parentheses. 
    Here the type of ptr is ‘pointer to an array of 10 integers.

*/