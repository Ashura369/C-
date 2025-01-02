#include<iostream>
using namespace std;

    class people
    {
        public:

        string name;
        int age;
        int weight;

        // using constructors
            // this below is a default constructor
            // it doesnt show but, it is always present in the compiler
            // this is for to print "jeet." values
            people() 
            {

            }

            // this below is a parameterised constructor
            // when we want to write a short OOPS we have to use this
            // this is for to print "aman." values
            people(string n, int a, int w)
            {
                name=n;
                age=a;
                weight=w;
            } 

        // IF WE DONT USE DIFFERENT TYPE OF CONSTRUCTORS TO PRINT DIFFERENT TYPE OF OBJECTS LIKE "aman." and "jeet.",
        // THEN THE COMPILER WILL THROW ERROR 
    };

        void print(people p)
        {
            cout<<"p.name : "<<p.name <<endl;
            cout<<"p.age : "<<p.age <<endl;
            cout<<"p.weight : "<<p.weight <<endl;
            
        }

int main()
{
     people aman("Aman Padhan", 21, 55);

     people jeet;
        jeet.name = "Biswajeet Pradhan";
        jeet.age = 24;
        jeet.weight = 59;
    
    
    print(aman);
        cout<<endl;
    

    cout<<"name : "<<jeet.name<<endl;
    cout<<"age : "<<jeet.age<<endl;
    cout<<"weight : "<<jeet.weight<<endl;
return 0;
}