/*

Nested if-else statements are those statements in which there is an if statement inside another if else. 
We use nested if-else statements when we want to implement multilayer conditions(condition inside the condition inside the condition and so on). 
C++ allows any number of nesting levels.


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
            printf("%d IS GREATEST", b);
        }
        else{
            printf("%d IS GREATEST", c);
        }
        
    }

    if(a>b){
        if (a>c){
            printf("%d IS GREATEST", a);
        }
        else{
            printf("%d IS GREATEST", c);
        }
        
    }

       
    
    return 0;
}