// MAKE AN ARRAY OF NO.S AND MAKE THE SUM of EVEN and ODD NO.S

#include<iostream>
using namespace std;

int main()
{
     int a[50];
     int b;
     cout<<"TOTAL NUMBERS : ";
        cin>>b;
    
    for (int i = 0; i < b; i++)
    {
        cin>>a[i];
    }

            // finding even numbers
            int sum1=0;
            for (int j = 0; j < b; j++)
            {
               if (a[j]%2==0)
               {
                   cout<<"EVEN NO.S ARE : "<<a[j]<<endl;
                   sum1=sum1+a[j];
               }
               
            }
            cout<<"sum1 --> "<<sum1;

                cout<<endl;


            // finding odd numbers
            int sum2=0;
            for (int k = 0; k < b; k++)
            {
                if (a[k]%2==1)
                {
                    cout<<"ODD NO.S ARE : "<<a[k]<<endl;
                    sum2=sum2+a[k];
                }
                
            }
            cout<<"sum2 --> "<<sum2;
            
 
            
return 0;
}