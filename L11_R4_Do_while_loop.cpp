// leaning DO WHILE loop

#include<iostream>
using namespace std;

int main()
{
    int i=1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=10);
cout<<endl;
    int a=11;
    do
    {
        cout<<a<<endl;
        a++;
    } while (a<=10);
    
    return 0;
}

/*

***DIFFERENCE BTWN WAHILE AND DO WHILE LOOP***

In While prog. first you have to write the condition, then you write the body
But in Do While prog. first you have to write the body, then you write the condition

In while, the prog. will continue till the conditon becomes false
But in do while, the prog will print the ans atleast for once even if the condition is false.
    >This is because, in do while, the body is written first and then the condition is written
    >Thats why it writes the prog as the body, but when the condition fails, it stops the prog.

*/