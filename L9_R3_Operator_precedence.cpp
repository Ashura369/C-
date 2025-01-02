/*** learning OPERATOR PRECEDENCE ***/
// opertor precedence can also be used without <iomanip>

#include<iostream>
#include<iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=3,b=4;
    int c=((((a*5)+b)-45)+87); /* in normal maths we use BODMAS for calculation, but in c++ we first we *, then we /, then we % (remainder), then we +, and at last we -. */
    // so the form is (* / % + -)
    // i learned this in this website : https://en.cppreference.com/w/cpp/language/operator_precedence
        // you will see a table at the link, go to the row 5 and 6
        // *, /, and % are in row 5, above the row 6
        // +, and - are in row 6, below row 5
            // row 5 will be given importance as it comes first
            // it comes with the associativity (importance) of left to right
            // hence * values are in round brackets, to be calculated first

    cout<<"THE VALUE OF c : "<<c;
    
    return 0;
}
