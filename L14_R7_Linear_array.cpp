// search if a given element is present in the array ornot.
    // if it is not present then return "the no. you entered is not present in the array" or else return the index

// THESE TYPE QS ARE CALLED LINEAR SEARCH

#include<iostream>
using namespace std;

int main()
{
     int n;
        cout<<"enter total elements you want: ";
            cin>>n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
        cin>>arr[i];
     }

     cout<<endl;
     cout<<endl;
     

     int n2;
        cout<<"enter the no. you want to find : ";
            cin>>n2;
    
    cout<<endl;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == n2)
        {
            cout<<"THE NO. YOU ENTERED "<<n2<<" IS PRESENT IN THE ARRAY"<<endl;
            break;
        }
    }

    int i;
    if (i == n)
    {
        cout << "THE NUMBER YOU ENTERED " << n2 << " IS NOT PRESENT IN THE ARRAY." << endl;
    }



return 0;
}