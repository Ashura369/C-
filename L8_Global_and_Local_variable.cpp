/****LEARNING HOW TO USE BOTH GLOBAL AND LOCAL VARIABLE AT THE SAME TIME*****/

/*

LOCAL VARIABLE
Variables defined within a function or block are said to be local to those functions.  
    Anything between ‘{‘ and ‘}’ is said to inside a block.
    Local variables do not exist outside the block in which they are declared, i.e. they can not be accessed or used outside that block.
    Declaring local variables: Local variables are declared inside a block.

GLOBAL VARIABLE
As the name suggests, Global Variables can be accessed from any part of the program.
    They are available through out the life time of a program.
    They are declared at the top of the program outside all of the functions or blocks.
    Declaring global variables: Global variables are usually declared outside of all of the functions and blocks, at the top of the program. 
    They can be accessed from any portion of the program.

*/
#include<iostream>
using namespace std;

int c=45;
int d=465656;

int main(int argc, char const *argv[])
{
    int a,b,c;
    int d=45;
    
    cout<<"ENTER VALUE OF A : "<<endl;
    cin>>a;
    cout<<"ENTER VALUE OF B : "<<endl;
    cin>>b;

    c=a+b; // NEVER USE cout IN FORMULAS
    
    cout<<"VALUE OF C : "<<c<<endl; /* c --> takes the value of national variable*/
    cout<<"VALUE OF GLOBAL VARIABLE C : "<<::c<<endl; /* ::c --> takes the value of global variable*/
    cout<<endl;
    
    return 0;
}
