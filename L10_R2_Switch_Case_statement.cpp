/* SELECTION STRUCTURE */
/*** learning SWITCH CASE in SEQUENCE STRUCTURE ***/

// switch case is a substitute for long "if else" statements

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout<<"WRITE YOUR AGE : "<<endl;
    cin>>age;
    
    switch (age)
    {
    case 18:
        cout<<"YOU ARE 18"<<endl;
        break; /* break means to end the program after showing the cout value when you type the age is 18 */
        /* if you donot write "break", after writing the age the program will show all the cout values in switch case */
    case 22:
        cout<<"YOU ARE 22"<<endl;
        break;
    case 2:
        cout<<"YOU ARE 2"<<endl;
        break;
    
    default:
        cout<<"NO SPECIAL CASES"<<endl; /* here default means if you type age something other than 18, 22 and 2, 
        the program will show "NO SPECIAL CASES" */
        break;
    }

    cout<<"DONE WITH THE PROGRAMME";
    return 0;
}
