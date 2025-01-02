// MAKE AN ARRAY WHERE YOU HAVE TO FIND THE LARGEST NUMBER IN AN ARRAY

#include<iostream>
using namespace std;

int main()
{
     int a[50];
     int b;
     int largest_no; // we took this variable to find largest number
     
     cout<<"TOTAL VALUES YOU WANT TO TAKE : ";
        cin>>b;
    
     for (int i = 0; i < b; i++)
     {
        cin>>a[i];
     }

            
            largest_no = a[0];
            for (int j = 1; j < b; j++) // here we took "j = 1", bcoz we have taken a[0] as largest number. So we have to find l;argest number from a[1]
            // it doesnt matter even if you take "j = 0"
            {
                if ( a[j] > largest_no )
                {
                    largest_no = a[j];
                }
                
            }
        cout<<"THE LARGEST NUMBER IS : "<< largest_no<<endl;
     
     



return 0;
}