// using SWITCH CASE for calculation

#include<iostream>;
using namespace std;

int main()
{
     int a,b,c,d;
     cout<<"enter the values :"<<endl;
        cin>>a>>b>>c>>d;
    char op;
    cout<<"enter the character :"<<endl;
        cin>>op;
    
    switch (op)
    {
        case '+':
            cout<<"the sum will be :";
            cout<<a+b+c+d<<endl;
            // break;
        case '-':
            cout<<"the minus will be :";
            cout<<a-b-c-d<<endl;
            // break;
        case '*':
            cout<<"the multiplication will be :";
            cout<<a*b*c*d<<endl;
            // break;
        case '/':
            cout<<"the division will be :";
            cout<<a/b/c/d<<endl;
            // // break;
        
        // // default :
            // cout<<"ERROR";
        
    char choice;
    cout<<"DO YOU WANT TO PERFORM ANOTHER CALCULATION (y/n): ";
        cin>>choice;
        cout<<endl;

        if (choice == 'y')
        {
            cout<<"great"<<endl;
        }
        else if (choice == 'n')
        {
            cout<<"thankyou"<<endl;
        }
        
        
    }
return 0;
}
/*
If we comment out all the "break;" functions, it will keep printing all the cases until it ends. 
Try doing it yourself...But remember you have to comment out "default" function too.
*/