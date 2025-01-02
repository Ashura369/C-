/* learning WHAT IS POINTER */
/*
Pointer are the variables that stores the address of other variables
*/

#include<iostream>;
using namespace std;

int main() {

    int a=3;
    int* b=&a; //it means b implpies the file path or address of a
        /* 
        we can also write it as :--
            int* b;
            b=&a; 
        */
    
    /*
    & --> (address of operator
    * --> dereference operator
    */

    //both the logics will give the same resualt
    cout<<"ADDRESS OF a : "<<b<<endl;
    cout<<"ADDRESS OF a : "<<&a<<endl;
    cout<<endl;
    /*(value at) dereference operator --> this is used to find that what value is stored at "a"*/
    cout<<"THE VALUE OF ADDRESS b IS : "<<*b<<endl;

return 0;
}