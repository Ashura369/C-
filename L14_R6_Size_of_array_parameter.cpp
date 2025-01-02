#include<iostream>
using namespace std;

int main()
{
     int arr1[] = {1,2,3,5,6};
     int a;
     int arr2[10];
        cout<<"enter array elememts : ";
            cin>>a;
     
     for (int i = 0; i < a; i++)
     {
        cin>>arr2[i];
     }

     int size1=0, size2=0;

     size1 = sizeof(arr1) / sizeof(arr1[0]);
    //  size2 = sizeof(arr2) / sizeof(arr2[0]); // you cant use this formula in the code bcoz you are entering the elements itself
    size2=a;

     cout<<"sizeof arr1 : "<<sizeof(arr1)<<endl;
     cout<<"size of array 1 : "<<size1<<endl;
     cout<<"size of array 2 : "<<size2<<endl;
     
return 0;
}