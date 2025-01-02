/*** learning const VARIABLE ***/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const int a=3; //in place of "const" you can also use "#define"
    cout<<"THE VALUE OF a WAS : "<<a<<endl;
    a=45; /*reference variable*/
    cout<<"THE VALUE OF a IS : "<<a<<endl;
    
    // here this function will not be applicable bcoz, "const int a=3" is a constant variable. Which means it cant be changed by using the reference variable
    // hence it will show error
    // WE USE "const" variable in the logic to avoid the accidental use of Reference variable
    // we can use "const" with int, float, char, etc...
    return 0;
}
