// USING CONSTRUCTORS with Pass by reference

#include<iostream>
using namespace std;

class student 
{
    public:

    string name;
    int roll_no;
    float cgpa;
    int age;

    // using Constructors
    // we use constructors to make the OOPS based code easier to write
    student(string n, int r, float c, int a)
    {
        name = n;
        roll_no = r;
        cgpa = c;
        age = a;
    }
};

void change(student & s)
    {
         s.name = "Anil Padhan";
        s.roll_no = 54;
        s.cgpa = 35.62;
        s.age = 28;
    }

    void print (student s)
        {
            cout<<"Name : "<<s.name<<endl;
            cout<<"roll_no : "<<s.roll_no<<endl;
            cout<<"cgpa : "<<s.cgpa<<endl;
            cout<<"age : "<<s.age<<endl;
        }

int main()
{
    student s1 ("Raghav Garg", 12, 62.35, 26);
    student s2 ("Biswajeet Pradhan", 21, 92.35, 24);
    student s3 ("Aman Padhan", 12, 62.35, 26);

    // print(s1); // we commented this out bcoz, we didnt wanted to print the older values of Rghav Garg
    // cout<<endl;
        change(s1);
        cout<<endl;
    print(s1);
    cout<<endl;
    print(s2);
    cout<<endl;
    print(s3);
    cout<<endl;
    
    
return 0;
}