#include<iostream>
using namespace std;

    class people
    {
        public:

        string name;
        int age;
        int weight;

        
            people(string n, int a, int w)
            {
                name=n;
                age=a;
                weight=w;
            } 

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

     people jeet = aman; // here it copied all the elementsb of "aman" object
        jeet.name = "Biswajeet Pradhan"; // you can also change the componenets inside of an object, as we changed name here
        // this is called "deep copy", not a "shallow copy"
    
     people anil(aman); // this is called "copy constructor" -- bcoz it copies the whole constructor
        anil.name = "Anil Padhan";
        // It will print the name 
        // its a deep copy

     
    
    print(aman);
        cout<<endl;
    
    print(jeet); // it will print all elements of aman except name, bcoz it has been changed
        cout<<endl;
    
    print (anil);
        cout<<endl;
    
return 0;
}