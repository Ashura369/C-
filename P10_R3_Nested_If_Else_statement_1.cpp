/*
Find the greatest number out of the three given numbers using NESTED IF-ELSE

If ( a < b ) evaluates to true, then
    If ( c < b ) is true, then b is greatest.
    else c is greatest.
If ( a < b ) evaluates to false, then
    If ( c < a ) is true, then a is greatest.
    else c is greatest.

*/

#include<iostream>
using namespace std;

int main ()
{
    int a,b,c;
    cout<<"ENTER THE FIRST NUMBER : "<<endl;
        cin>>a;
    cout<<"ENTER THE SECOND NUMBER : "<<endl;
        cin>>b;
    cout<<"ENTER THE THIRD NUMBER : "<<endl;
        cin>>c;
    
    if (a<b)
    {
        if (b>c){
            cout<<"SECOND NUMBER IS GREATEST :";
            printf("%d", b);
        }
        else{
            cout<<"THIRD NUMBER IS GREATEST :";
            printf("%d", c);
            
        }
        
    }

    if(a>b){
        if (a>c){
            
            cout<<"FIRST NUMBER IS GREATEST :";
            printf("%d", a);
        }
        else{
            cout<<"THIRD NUMBER IS GREATEST :";
            printf("%d", c);
            
        }
        
    }

       
    
    return 0;
}