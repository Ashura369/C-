/***learning DIFFERENCE BTWN FLOAT, DOUBLE AND LONG DOUBLE****/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   float d=34.4; /*here we dont have to write f after the value bcoz we have written "float d=34.4, hence it knows its a float"*/
    /* when we write a float value we have to write it as "d=34.4f". We have to put f at the end, either it will take this value as "double" by default. */
   34.4; /*here its a double, when we dont write f or l after after a value compler automatically takes it as "double" */
   long double e=34.4l; /* when we write a long double value we have to put "l" at the end of the value so that we can know that its a long double value. */

    // if we donot use f and l after decimal numbers, in the Output it may show the numbers, but while writing a formula it will cause problems. 
    // these f and l are not case sensitive, it means we can use F and L
    // we will learn about in the future

     cout<<"VALUE OF d : "<<d<<endl <<"VALUE OF e : "<<e<<endl;
    cout<<endl;

    // for the time being just ignore these formulas, just remember that how these formulas are getting operated
    cout<<"SIZE OF 34.4 IS : " <<sizeof(34.4)<<endl;
    cout<<"SIZE OF 34.4f IS : " <<sizeof(34.4f)<<endl;
    cout<<"SIZE OF 34.4F IS : " <<sizeof(34.4F)<<endl;
    cout<<"SIZE OF 34.4l IS : " <<sizeof(34.4l)<<endl;
    cout<<"SIZE OF 34.4L IS : " <<sizeof(34.4L)<<endl;

    return 0;
}
