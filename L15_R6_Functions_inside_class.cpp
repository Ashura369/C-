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

    void print () // when we use void print statement inside the class, we donot need to write "student s" inside the bracket of void print
        {
            cout<<"Name : "<<name<<endl; // in the functions you cant write s.name, you only have to write "name". thats all.
            cout<<"roll_no : "<<roll_no<<endl;
            cout<<"cgpa : "<<cgpa<<endl;
            cout<<"age : "<<age<<endl;
        }
    
    // now find the multiplication, plus, and mimnus of roll no and age
        int multi ()
        {
            return roll_no * age;
        }

        int add ()
        {
            return roll_no + age;
        }
        
        int minus ()
        {
            return roll_no - age;
        }
};

    

int main()
{
    student s1 ("Raghav Garg", 12, 62.35, 26);
    student s2 ("Biswajeet Pradhan", 21, 92.35, 24);
    student s3 ("Aman Padhan", 12, 62.35, 26);

    // print(s1); //you cant write this in a function inside the class
    // you have to write it like below

    s1.name = "Amit Bhadana"; // you can change any component like this

    student s4=s1;
    s4.name = "JOgesh";
    s4.roll_no=16;
    s4.cgpa=56.65;


    s1.print();
        cout<<endl;
    s2.print();
        cout<<endl;
    s3.print();
        cout<<endl;
    s4.print();
        cout<<endl;

        cout<<"multi s1 : "<<s1.multi()<<endl;
        cout<<"multi s2 : "<<s2.multi()<<endl;
        cout<<"multi s3 : "<<s3.multi()<<endl;
        cout<<endl;

        cout<<"add s1 : "<<s1.add()<<endl;
        cout<<"add s2 : "<<s2.add()<<endl;
        cout<<"add s3 : "<<s3.add()<<endl;
        cout<<endl;
        
        cout<<"minus s1 : "<<s1.minus()<<endl;
        cout<<"minus s2 : "<<s2.minus()<<endl;
        cout<<"minus s3 : "<<s3.minus()<<endl;
    
    
return 0;
}