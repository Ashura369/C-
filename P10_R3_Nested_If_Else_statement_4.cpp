/*
Write a C++ program to determine the type of a triangle based on the lengths of its three sides. 
The program should take three side lengths as input and determine whether the triangle is:

    Equilateral (all sides are equal),
    Isosceles (two sides are equal),
    Scalene (all sides are different),
    Not a triangle (if the sum of any two sides is not greater than the third side).
*/

#include<iostream>;
using namespace std;

int main()
{
     int a,b,c;
     cout<<"1ST SIDE : "<<endl;
        cin>>a;
     cout<<"2ND SIDE : "<<endl;
        cin>>b;
     cout<<"3RD SIDE : "<<endl;
        cin>>c;
    
    if((a+b>c)&&(b+c>b)&&(c+a>b)){
        if((a==b)&&(b==c)&&(a==c)){
            printf("EQUILATERAL - (ALL SIDES ARE EQUAL)");
        }
        else if((a==b)||(b==c)||(c==a)){
            printf("ISOSCELES - (TWO SIDES ARE EQUAL)");
        }
        else{
            printf("SCALENE - ALL SIDES ARE DIFFERENT");
        }
     }
    
    else{
        printf("NOT A TRIANGLE");
    }
return 0;
}