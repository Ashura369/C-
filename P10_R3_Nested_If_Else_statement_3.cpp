/*

Write a C++ program that asks the user to input three numbers. 
The program should then determine and print out which number is the largest. 
If two or more numbers are equal, the program should also indicate that there is a tie.

*/

#include<iostream>
using namespace std;

int main()
{
 int a,b,c;
 cout<<"enter 1st no. : "<<endl;
    cin>>a;
 cout<<"enter 2nd no. : "<<endl;
    cin>>b;
 cout<<"enter 3rd no. : "<<endl;
    cin>>c;

 if(a==b){
    printf("THERE IS A TIE : ");
 }
 else if(b==c){
    printf("THERE IS A TIE : ");
 }
 else if(a==c){
    printf("THERE IS A TIE : ");
 }

 if(a>b){
    if(a>c){
        printf("%d IS LARGEST",a);
    }
    else{
        printf("%d IS LARGEST",c);
    }
 }   
 if(b>a){
    if(b>c){
        printf("%d IS LARGEST", b);
    }
    else{
        printf("%d IS LARGEST", c);
    }
 } 
return 0;
}

/*

***THE CODE BELOW IS ALSO A RIGHT ANS***
#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Enter 3rd number: ";
    cin >> c;

    // Checking for ties
    if (a == b && b == c) {
        cout << "All three numbers are equal." << endl;
    } else if (a == b) {
        cout << "There is a tie between the 1st and 2nd numbers." << endl;
    } else if (b == c) {
        cout << "There is a tie between the 2nd and 3rd numbers." << endl;
    } else if (a == c) {
        cout << "There is a tie between the 1st and 3rd numbers." << endl;
    }

    // Finding the largest number
    if (a >= b && a >= c) {
        cout << a << " is the largest." << endl;
    } else if (b >= a && b >= c) {
        cout << b << " is the largest." << endl;
    } else {
        cout << c << " is the largest." << endl;
    }

    return 0;
}
*/