#include<iostream>
using namespace std;

int main ()
{
    int a[10];
    cout<<"ENTER THE VALUES : "<<endl;
    int i;
    /*
    if you are starting the array from 0, then you have to write "for(i=0; i<10; i++)"
    but if you are starting the array from 1, then you have to write "for(i=0; i<=10; i++)"
    HOPE YOU GET IT...
    */
    for(i=0; i<10; i++){
        cin>>a[i];
    }

    cout<<"THE ELEMENTS OF THE ARRAY ARE : "<<endl;
    for (i = 0; i < 10; i++)
    {
        cout<<a[i]<<",";
    }
    
}