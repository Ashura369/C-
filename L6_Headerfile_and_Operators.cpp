// today we are gonna learn about Headerfile and Operator

    // there are 2type of header files :--
        // 1. System header files: it comes with a compiler
            // eg - #include<iostream>
        // 2. User defined header files: it is written by the programmer
            // #include "this.h"
                // this will produce an error if "this.h" is not present in the currnt directory

#include<iostream>
using namespace std;

int main()
{
    int a=4,b=5;
    // int a,b;
    //     cout<<"enter the value 1 :";
    //         cin>>a;
    //     cout<<"enter the value 2 :";
    //         cin>>b;
    cout<<"Operator in c++:"<<endl; /*'endl is a new line just like \n*/
    cout<<"Following are the types of operators in c++"<<endl;
    cout<<endl;
    
    // Arithmatic operators
    cout<<"Following are the arithmatic operators in c++"<<endl;
    cout<<"The value of a+b is : " <<a+b <<endl; /*to write same word at multiple line at the same time : alt + shift + select the lines from mouse --> then write whatever you want*/
    cout<<"The value of a-b is : " <<a-b <<endl;
    cout<<"The value of a*b is : " <<a*b <<endl;
    cout<<"The value of a/b is : " <<a/b <<endl; /*here 4/5 will be 0.8, but the ans will be written as 0. Bcoz it will not consider the numericals after the decmal.*/
    cout<<"The value of a%b is : " <<a%b <<endl;
    cout<<"The value of a++ is : " <<a++ <<endl;
    cout<<"The value of a-- is : " <<a-- <<endl;
    cout<<"The value of ++a is : " <<++a <<endl;
    cout<<"The value of --a is : " <<--a <<endl;
    cout<<endl;


    // Assignment operators --> used to assign values to variables
        // some assignment operators are " =, +=, -=, /=, %= "
            // eg --> a+=1 --> a=a+1
            // eg --> a-=1 --> a=a-1
            // eg --> a/=1 --> a=a/1
            // eg --> a%=1 --> a=a%1
    
    cout<<"Following are the assignment operators in c++"<<endl;
    a+=3;
    cout<<"The value of a+=3 :"<<a<<endl;
    b-=3;
    cout<<"The value of b-=3 :"<<b<<endl;
    a/=3;
    cout<<"The value of a/=3 :"<<a<<endl;
    b%=3;
    cout<<"The value of b%=3 :"<<b<<endl; // "%" this is a modulus sign, it gives the remainder btwn two numbers.
    cout<<endl;
           

    // Comparison operator
    // in the following functions if the value is true it will br shown as 1, if not it will be shown as 0.
    cout<<"Following are the comparison operator in c++" <<endl;
    cout<<"The value of a==b is :" <<(a==b) <<endl;   /* in a true false statement where we have to compare two values, we have to put the values in round brackets */
    cout<<"The value of a!=b is :" <<(a!=b) <<endl;   /*a!=b --> it means a not equal to b */
    cout<<"The value of a>=b is :" <<(a>=b) <<endl;
    cout<<"The value of a<=b is :" <<(a<=b) <<endl;
    cout<<"The value of a>b is :" <<(a>b) <<endl;
    cout<<"The value of a<b is :" <<(a<b) <<endl;
    cout<<endl;

    // Logical operators
    // || --> or, && --> and
       //in || if either of the value is true it will show 1
       //in && only if both the values are true then it will show 1 
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of this logical and operator is ((a==b) || (a<b)) : "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical and operator is ((a==b) && (a<b)) : "<<((a==b) && (a<b))<<endl;

    return  0;
}
