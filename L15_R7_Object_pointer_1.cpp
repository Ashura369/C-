#include<iostream>
using namespace std;

int main()
{
     int x=4;
     cout<<&x<<endl;
     int* p=&x; // here p stored the address of x
     cout<<p<<endl; // here p printed the address of x
     cout<<* p<<endl; // here p printed the value stored at the address of x, ie 4

    //  p box --> with in p, there is address of x --> within address of x, there is value of x ie is 4;


    // https://youtu.be/T1fkvT1uPj8?si=LxnDXzjVg0-NdJbK
    // go to this link to better understand the below

     * p=100; // this changed the value stored at address of x from 4 to 100
     cout<<x<<endl;
     cout<<*p<<endl; // they both will print the same value
     
return 0;
}