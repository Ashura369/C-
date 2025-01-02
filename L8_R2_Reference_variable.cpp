/***learning REFERENCE VARIABLE***/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float x=455;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;

    // here y will be the reference variable bcoz it is printinting the same variable as x
    return 0;
}
