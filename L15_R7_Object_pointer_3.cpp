// USING FUNCTIONS INSIDE CLASS

#include<iostream>
using namespace std;

class student 
{
    public:

    string name;
    int roll_no;
    float cgpa;
    int age;

    student(string n, int r, float c, int a)
    {
        name = n;
        roll_no = r;
        cgpa = c;
        age = a;
    }

    void print ()
        {
            cout<<"Name : "<<name<<endl; 
            cout<<"roll_no : "<<roll_no<<endl;
            cout<<"cgpa : "<<cgpa<<endl;
            cout<<"age : "<<age<<endl;
        }
  
};

    void change (student* c)
    {
        (* c).age=77;
        // c-> age = 77 // you can also write it like this 
    }

int main()
{   
    cout<<endl;
    student s1 ("Raghav Garg", 12, 62.35, 26);
    student s2 ("Biswajeet Pradhan", 21, 92.35, 24);
    student s3 ("Aman Padhan", 12, 62.35, 26);

    cout<<endl;

    cout<<s1.age<<endl;
    change(&s1);
    cout<<s1.age<<endl;

    cout<<endl;
   
    s1.print();
        cout<<endl;
    s2.print();
        cout<<endl;
    s3.print();
        cout<<endl;
    
    

    
return 0;
}