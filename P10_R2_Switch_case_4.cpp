
#include<iostream>
using namespace std;

int main ()
{
    int a,b,c,d;
    cout<<"enter the character :"<<endl;
        cin>>a;
    cout<<"enter the character :"<<endl;
        cin>>b;
    cout<<"enter the character :"<<endl;
        cin>>c;
    cout<<"enter the character :"<<endl;
        cin>>d;

    char op;
    cout<<"enter the operator :"<<endl;
        cin>>op;
    

    switch (op)
    {
    case '+':
        cout<<a+b+c+d<<endl;
        break;
    case '-':
        cout<<a-b-c-d<<endl;
        break;
    case '*':
        cout<<a*b*c*d<<endl;
        break;
    case '/':
        cout<<a/b/c/d<<endl;
        break;
    
    default:
        cout<<"error"<<endl;
        break;
    }
}