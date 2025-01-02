/***learning TYPECASTING***/
// typecasting --> converting one datatype into another datatype

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=45;
    float b=45.46;
    cout<<"VALUE OF a : "<<(float)a<<endl; /* here by writing float in the brackets we converted an integer into a float value */
    cout<<"VALUE OF a : "<<float(a)<<endl; /* this logic is same as the above logic, giving the same result */
    cout<<endl;

    cout<<"VALUE OF b : "<<(int)b<<endl; /* here by writing int in the brackets we have converted a float into an integer */
    cout<<"VALUE OF b : "<<int(b)<<endl; /* this logic is same as the above logic, giving the same result */
    cout<<endl;
    // this is the use of TYPECASTING
    
    int c=int(b); /*using reference variable*/
    cout<<"VALUE OF c : "<<c<<endl;

    cout<<"VALUE OF THIS EXPRESSION IS : "<<a+b<<endl;
    cout<<"VALUE OF THIS EXPRESSION IS : "<<a+int(b)<<endl;
    cout<<"VALUE OF THIS EXPRESSION IS : "<<a+(int)b<<endl; /* both logics will give the same resualt */
    cout<<"VALUE OF THIS EXPRESSION IS : "<<float(a)+b<<endl;
    cout<<"VALUE OF THIS EXPRESSION IS : "<<float(a)+int(b)<<endl;

    return 0;

}