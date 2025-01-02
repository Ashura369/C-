#include<iostream>
using namespace std;

int main()
{
     int a[2][2]; //first 2 refers 2 rows, second 2 refers 2 columns
     cout<<"ENTER THE ARRAY ELEMENTS : "<<endl;

     for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
        
     

     cout<<"ELEMENTS OF THE ARRAY IS : "<<endl;
     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 2; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
     }

     
     
     
return 0;
}