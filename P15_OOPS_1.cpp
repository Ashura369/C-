#include<iostream>
using namespace std;

class students
{
    public :

    string name;
    int rollno;
    float cgpa;
    int age;
};
    //you can use multiple CLASS in a single programme
class vehicle
{
    public :

    string name;
    int wheels;
    int seats;
};

int main()
{
     students s1;
        cout<<"enter name : ";
            cin>>s1.name; //REMEMBER WHEN YOU WILL BE ENTERING NAME, YOU WONT BE ABLE TO ADD SPACE BTWN THE NAMES
            cout<<endl;
        cout<<"enter rollno : ";
            cin>>s1.rollno;
            cout<<endl;
        cout<<"enter cgpa : ";
            cin>>s1.cgpa;
            cout<<endl;
        cout<<"enter age : ";
            cin>>s1.age;
            cout<<endl;

     students s2;
        cout<<"enter name : ";
            cin>>s2.name;
            cout<<endl;
        cout<<"enter rollno : ";
            cin>>s2.rollno;
            cout<<endl;
        cout<<"enter cgpa : ";
            cin>>s2.cgpa;
            cout<<endl;
        cout<<"enter age : ";
            cin>>s2.age;
            cout<<endl;
    
     vehicle v;
        v.name="car";
        v.wheels=6;
        v.seats=4;
    
     vehicle v2;
        v2.name="truck";
        v2.wheels=12;
        v2.seats=6;
    
    

    cout<<"name - "<<s1.name<<", rollno : "<<s1.rollno<<", cgpa : "<<s1.cgpa<<", age : "<<s1.age<<endl;
    cout<<"name - "<<s2.name<<", rollno : "<<s2.rollno<<", cgpa : "<<s2.cgpa<<", age : "<<s2.age<<endl;

    cout<<"name - "<<v.name<<", wheels : "<<v.wheels<<", seats : "<<v.seats<<endl;
    cout<<"name - "<<v2.name<<", wheels : "<<v2.wheels<<", seats : "<<v2.seats<<endl;
return 0;
}