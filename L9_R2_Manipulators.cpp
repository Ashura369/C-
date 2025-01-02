/*** learning MANIPULATORS ***/

# include<iostream>
# include<iomanip> /* to use manipulators you need to use this headerfile */
using namespace std;

int main(int argc, char const *argv[])
{
    int a=3,b=78,c=1233;
    
    cout<<"VALUE OF a without setw IS : "<<a<<endl;
    cout<<"VALUE OF b without setw IS : "<<b<<endl;
    cout<<"VALUE OF c without setw IS : "<<c<<endl;
    cout<<endl;
    
    cout<<"VALUE OF a with setw IS : "<<setw(5)<<a<<endl;
    cout<<"VALUE OF b with setw IS : "<<setw(5)<<b<<endl;
    cout<<"VALUE OF c with setw IS : "<<setw(5)<<c<<endl;

    // to use the setw we need to use a headerfile named "# include <iomanip>"
    // by using setw of 8 characters it will take the 8 character space in terminal section for printing the ans
    // you run the code and see the difference by yourself in the output of without setw and with setw

    return 0;
}
