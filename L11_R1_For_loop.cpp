/*learning for loop*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;

    /*
    syntax of for loop (initialization; condition; updation)
    {
        loop body(c++ code)
    }
    */
            /*
            initialization -- int i = 0; (means the value of i ie 0 will be print only once)
            condition -- i <= 10; (means value of i will be keep printing till 10)
            updation -- i++ (means value of i will be keep increasing by 1 from 0.)
                    (the value will be added by 1 from 0 bcoz we have added i=0. so this will be printed first)
                    (and hence from here the value will be keep printing by 1)
            */

    for (int i = 0; i <= 10; i++)
    {
        cout<<i<<endl;
    }
    
    /*
    Loop for is the shortcut of previous loop function.
    */
    return 0;
}
