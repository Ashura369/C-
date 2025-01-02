/* learning switch case */

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n1,n2;
    cout<<"ENTER TWO NUMBERS : ";
    cin>>n1>>n2;

    char op; /* op = operator */
    cout<<"INPUT AN OPERATOR + - * / ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1 + n2<<endl;
        break;
    case '-':
        cout<<n1 - n2<<endl;
        break;
    case '*':
        cout<<n1 * n2<<endl;
        break;
    case '/':
        cout<<n1 / n2<<endl;
        break;
    
    default:
        cout<<"ENTER ANOTHER OPERATOR"<<endl;
        break;
    }

    return 0;
}
