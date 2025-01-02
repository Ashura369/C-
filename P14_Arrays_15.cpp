// Merge two Arrays
   // Write a C++ program that takes two arrays as input and merges them into a single array. Print the merged array
// find *2,/2,+2,-2 of the first array 1
// find even and odd no,s, and total even and odd no.s of array 2

#include<iostream>
using namespace std;

int main()
{
     int arr1[999];
     int arr2[999];
     int a;
     cout<<"enter first array elements : ";
      cin>>a;
         cout<<endl;
     int b;

     for (int i = 0; i < a; i++)
     {
      cin>>arr1[i];
     }

         //   elements of 1st array
         cout<<"elements of the 1st array are : ";
         for (int i = 0; i < a; i++)
         {
            cout<<arr1[i]<<", ";
         }
     


     cout<<endl;



     cout<<"enter second array elements : ";
      cin>>b;
     for (int j = 0; j < b; j++)
     {
      cin>>arr2[j];
     }

         //  elements of 2nd array
         cout<<"elements of the 2nd array are : ";
         for (int j = 0; j < b; j++)
         {
            cout<<arr2[j]<<", ";
         }

   
   cout<<endl;



               // merging both the arrays
               int merged[a+b]; // 1. Declares a new array called 'merged' of size a + b
               for (int i = 0; i < a; i++)
               {
                  merged[i] = arr1[i]; // 2. Copies elements of the first array (arr1) into 'merged'
               }

               for (int j = 0; j < b; j++)
               {
                  merged[a + j] = arr2[j]; // 3. Copies elements of the second array (arr2) into 'merged'
               }

                     cout<<"merged array is --> ";
                     for (int k = 0; k < a+b; k++)
                     {
                        cout<<merged[k]<<", "; 
                     }        
/*
                                            EXPLANATION

STEP 1 -->
    --A new array called merged is created with a size of a + b.
    --a is the number of elements in the first array (arr1).
    --b is the number of elements in the second array (arr2).
    --So, merged can hold all the elements from both arr1 and arr2 combined.

STEP 2 -->
    --A for loop runs a times (from i = 0 to i < a), where a is the size of arr1.
    --In each iteration of the loop, an element from arr1 is copied into the corresponding position in the merged array.
        --"merged[i] = arr1[i];""
        --This means that the first element of arr1 is copied to the first position of merged, the second element of arr1 is copied to the second position of merged, and so on.
    --After this loop finishes, the first a positions in merged are filled with all the elements from arr1.

STEP 3 -->
    --A second for loop runs b times (from j = 0 to j < b), where b is the size of arr2.
    --This loop copies each element from arr2 into the merged array, but starting from where the arr1 elements left off.
        --"merged[a + j] = arr2[j];""
        --The index a + j is used because the first a positions in merged are already occupied by arr1. So, the elements from arr2 start being added to merged from position a onward.
        --For example, if a = 3, the loop will start placing arr2 elements at position 3 (since array indices start from 0, the 4th position).
*/

       // multiplied by 2 of arr1
         cout<<"multiplied values of arr1 are ----> ";
         for (int i = 0; i < a; i++)
         {
            int multiplied = arr1[i]*2;
            cout<<multiplied<<", ";
         }

            cout<<endl;

         // divided by 2 of arr1
         cout<<"divided values of arr1 are ----> ";
         for (int i = 0; i < a; i++)
         {
            int divided = arr1[i]/2;
            cout<<divided<<", ";
         }

            cout<<endl;

         // added by 2 of arr1
         cout<<"added values of arr1 are ----> ";
         for (int i = 0; i < a; i++)
         {
            int add = arr1[i]+2;
            cout<<add<<", ";
         }

            cout<<endl;

         // minus by 2 of arr1
         cout<<"minus values of arr1 are ----> ";
         for (int i = 0; i < a; i++)
         {
            int minus = arr1[i]-2;
            cout<<minus<<", ";
         }

            cout<<endl;    



         // printing even no.s of array 2
         cout<<"all even no.s of arr2 : ";
         for (int j = 0; j < b; j++)
         {
            if (arr2[j] %2 == 0)
            {
               int even = arr2[j];
               cout<<even<<", ";
            }
            
         }
         cout<<endl;

         // printing odd no.s of array 2
         cout<<"all odd no.s of arr2 : ";
         for (int j = 0; j < b; j++)
         {
            if (arr2[j] %2 == 1)
            {
               int odd = arr2[j];
               cout<<odd<<", ";
            }
            
         }

         cout<<endl;

         // total even and odd no.s of arr2
         int even2=0, odd2=0;
         for (int j = 0; j < b; j++)
         {
            if (arr2[j] %2 == 0) 
            {
               even2++;
            }
            else{
               odd2++;
            }
            
         }
         cout<<"total even no.s --> "<<even2<<endl;
         cout<<"total odd no.s --> "<<odd2<<endl;
          
   
return 0;
}
