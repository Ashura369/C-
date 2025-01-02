#include<iostream>
using namespace std;

int main()
{
    int i=100, j=200,k;
   
    k=i-- - i++ + --i - ++j + --i - j-- + ++i - j++;
    cout<<"value of k : "<<k<<endl;
    
    cout<<i<<endl <<j<<endl <<k<<endl;

   
    return 0;
}
