// using for loop in OOPS

#include<iostream>
using namespace std;

class student
{
    public:

    string name;
    int Class, rollno, age;
    string score;
};

    void print(student s)
    {
        cout<<"name : "<<s.name<<endl;
        cout<<"Class : "<<s.Class<<endl;
        cout<<"rollno : "<<s.rollno<<endl;
        cout<<"age : "<<s.age<<endl;
        cout<<"score : "<<s.score<<endl;
        cout<<endl;
    }

int main()
{
    // int arr[99]; HERE YOU CANT WRITE arr[99], bcoz its a int type FUNCTION
    // YOU HAVE TO WRITE "student arr[99];"
    student arr[99];
    int n;
    cout<<"enter total no of students : ";
        cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cout<<"enter details for students : "<<i+1<<endl;
        
        cout<<"name : ";
            cin>>arr[i].name;
        cout<<"Class : ";
            cin>>arr[i].Class;
        cout<<"rollno : ";
            cin>>arr[i].rollno;
        cout<<"age : ";
            cin>>arr[i].age ;
        cout<<"score : ";
            cin>>arr[i].score;
    }
    cout<<endl;
    cout<<endl;

    // output
    for (int i = 0; i < n; i++)
    {
       cout<<"details of students : "<<i+1<<endl;
       print(arr[i]);
    }
     

return 0;
}