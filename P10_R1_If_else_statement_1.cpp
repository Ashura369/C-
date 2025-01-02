/* qs on if, else if, else */

// Write a program that takes a student's score as input and assigns a letter grade based on the following criteria:
    // 90 or above: A
    // 80 or above (but less than 90): B
    // 70 or above (but less than 80): C
    // 60 or above (but less than 70): D
    // Below 60: F

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int score;
    cout<<"WRITE YOUR SCORE : "<<endl;
    cin>>score;
    
    if(score>=90){
        cout<<"A";
    }
    else if(score>=80){
        cout<<"B";
    }
    else if(score>=60){
        cout << "Grade: D";
    } 
    else {
        cout << "Grade: F";
    }
    return 0;
}
