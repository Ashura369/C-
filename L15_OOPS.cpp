#include<iostream>
using namespace std;

class student //student is a new data type
{
    public:

    string name;
    int roll_no;
    float cgpa;
    int age;
};

int main()
{
    student s1;
        s1.name = "Biswajeet Pradhan";
        s1. roll_no = 33;
        s1.cgpa = 3.69;
        s1.age = 36;
    student s2;
        s2.name = "Amit Singh";
        s2. roll_no = 66;
        s2.cgpa = 36.9;
        s2.age = 63;
    
    cout<<"name -- "<<s1.name<<endl;
    cout<<"roll_no -- "<<s1.roll_no<<endl;
    cout<<"cgpa -- "<<s1.cgpa<<endl;
    cout<<"age -- "<<s1.age<<endl;
    cout<<endl;
    cout<<"name -- "<<s2.name<<endl;
    cout<<"roll_no -- "<<s2.roll_no<<endl;
    cout<<"cgpa -- "<<s2.cgpa<<endl;
    cout<<"age -- "<<s2.age<<endl;
return 0;
}