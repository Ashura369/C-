// Find the Minimum and Maximum Element in an Array

#include<iostream>
using namespace std;

int main()
{
    int arr[9999];
    int a;
        cout<<"even total no.s of elements : ";
            cin>>a;
    
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    
    
    int max_value = arr[0], min_value = arr[0];
    for (int i = 1; i < a; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }

        else if (arr[i] < min_value)
        {
            min_value = arr[i];
        }
        
        
    }

    cout<<"max value : "<<max_value<<endl;
    cout<<"min value : "<<min_value<<endl;
    





}