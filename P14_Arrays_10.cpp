// sum of all elements in an array 

#include<iostream>
using namespace std;

int main()
{
     int a[50];
     int b;
     int sum = 0;
     cout<<"the total no.s : ";
        cin>>b;
    
     for (int i = 0; i < b; i++)
     {
        cin>>a[i];
     }

            for (int j = 0; j < b; j++)
            {
               sum=sum+a[j];
            }
            

            // cout<<"sum of all no.s : "<<sum<<endl;
            
     
return 0;
}