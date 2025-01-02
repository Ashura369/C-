#include<iostream>
using namespace std;

int main()
{
     int a[5];
     cout<<"ENTER THE VALUES OF a : "<<endl;
     int i;
     for(i=1;i<=5;i++)
     {
        cin>>a[i];
     }
     cout<<"THE VALUES OF a ARE : "<<endl;
     
     for ( i = 1;i<=5; i++)
     {
        cout<<a[i]<<","<<endl;
     }

     //SUPPOSE I WANT +,-,*,/ ALL THE VALUES OF a[5]
    int z1=0;
     for ( i = 1; i <= 5; i++)
     {
        z1=z1+a[i];
     }
     cout<<"VALUE OF ALL : "<<z1<<endl;
    
    int z2=0;
     for ( i = 1; i <= 5; i++)
     {
        z2=z2-a[i];
     }
     cout<<"VALUE OF ALL : "<<z2<<endl;
    
    int z3=0;
     for ( i = 1; i <= 5; i++)
     {
        z3=z3*a[i];
     }
     cout<<"VALUE OF ALL : "<<z3<<endl;
    
    int z4=0;
     for ( i = 1; i <= 5; i++)
     {
        z4=z4/a[i];
     }
     cout<<"VALUE OF ALL : "<<z4<<endl;
     
    
     
return 0;
}