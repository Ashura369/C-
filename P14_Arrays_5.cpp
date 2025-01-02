#include<iostream>
using namespace std;

int main()
{
     int a[5];
     cout<<"ENTER THE VALUE OF a : "<<endl;
     int i;
     for ( i = 1; i <= 5; i++)
     {
        cin>>a[i];
     }
     
     for ( i = 1; i <= 5; i++)
     {
        cout<<"THESE ARE THE VALUES : "<<a[i]<<endl;
     }
     
     cout<<endl;

     cout<<"numbers -- "<<a[1]<<endl;
     cout<<endl;
     
     int *p = a;
     cout<<*p<<", "; //HERE IT WILL SHOW A WRONG ANS bcoz we have taken "i=1"
     cout<<*(p+1)<<", ";
     cout<<*(p+2)<<", ";
     cout<<*(p+3)<<", ";
     cout<<*(p+4)<<", ";
     
     
return 0;
}