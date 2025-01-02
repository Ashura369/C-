#include<iostream>;
using namespace std;

int main() {

    int num1=5;
    int num2=0;
    int a=4, b=5, c=6;
    char name='a';


        cout<<"VALUE OF LEFT SHIFT : "<<(num1<<1)<<endl; /* 01 --> 10 or 5*2=10 */
        cout<<"VALUE OF RIGHT SHIFT : "<<(num1>>1)<<endl; /* 5/2 = 2.5 or 2 */
        cout<<endl;
        
        cout<<"VALUE OF BITWISE AND & :"<<(num1 & num2)<<endl; /* NOT UNDERSTOOD */
        cout<<"VALUE OF BITWISE OR | :"<<(num1 | num2)<<endl; /* NOT UNDERSTOOD */
        cout<<endl;
       
        cout<<"FILE PATH OF a :"<<& a<<endl;
        cout<<"FILE PATH OF b :"<<& b<<endl;
        cout<<"FILE PATH OF c :"<<& c<<endl;
        cout<<"FILE PATH OF num1 :"<<& num1<<endl;
        cout<<"FILE PATH OF num2 :"<<& num2<<endl;
        cout<<"FILE PATH OF name :"<<& name<<endl;
        cout<<endl;
        
        cout<<"SIZE OF a : "<<sizeof(a)<<endl;
        cout<<"SIZE OF num1 :"<<sizeof(num1)<<endl;
        cout<<"SIZE OF name : "<<sizeof(name)<<endl;
        cout<<endl;

        /* this is to find wheather the value of a is same as the value of name, done by using "bool" */

        bool flag; // here flag is a name, flag = a
        a==4? flag=true : flag=false;
        cout<<"WHEATHER THE VALUE OF a IS SAME AS THE VALUE OF 4 :"<<flag<<endl;
        cout<<endl;

        // cout<<"VALUE OF a++ :"<<(a++)<<endl; // --> if we write this function above a++ the value at the end will be 7. TRY IT YOURSELF*/
        cout<<"VALUE OF a++ :"<<(a++)<<endl;
        cout<<"VALUE OF ++a :"<<(++a)<<endl; /*but here value of a will be 6 bcoz we have used a++ above, hence there its value is 5 and here its will be increased by 1 and its value will be 6*/
        cout<<endl;
        cout<<"VALUE OF b-- :"<<(b--)<<endl; /* THE SAME GOES FOR THE VALUE OF b TOO */
        cout<<"VALUE OF --b :"<<(--b)<<endl; /* THE SAME GOES FOR THE VALUE OF b TOO */
        cout<<endl;
        cout<<"VALUE OF c :"<<(c++)<<endl;
        cout<<"VALUE OF b=c+a :"<<(b=c+5)<<endl;


    return 0;
}