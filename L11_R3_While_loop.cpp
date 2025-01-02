/* learning While loop */
// print 1 to 40 using while loop
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int i=0; /*here we have to take int i=0, bcoz it is  the starting point from where the numbers will be keep printing till 10*/
   while (i<=10) /* it will keep printing till 10*/
   {
    cout<<"hello "<<i<<endl;
    i++;/* it means the value will be keep increasing by 1 */
    
   }
   
    return 0;
}

// THE PROGRAMME IS FOR TO PRINT NUMBERS INFINITELY, beginning from 1
/*
int main () {
    int i=1;
    while (true)
    {
        cout<<i<<endl;
        i++;
    }
    
}
*/