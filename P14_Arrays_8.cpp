// MAKE AN ARRAY OF NO.S AND MAKE THE SUM of EVEN NO.S

#include<iostream>
using namespace std;

int main()
{
     int a[50];
     int b;
     int sum=0;
     cout<<"TOTAL NUMBERS : ";
        cin>>b;
    
    for (int i = 0; i < b; i++)
    {
        cin>>a[i];
    }

            // finding even numbers
            for (int j = 0; j < b; j++)
            {
                if ( a[j] %2 == 0 )
                {
                    sum=sum+a[j];
                }
                
            }
            cout<<"SUM OF EVEN NO.S IS : "<<sum<<endl;
            
    
return 0;
}