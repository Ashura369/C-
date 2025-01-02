#include<iostream>
using namespace std;

class people
    {
        public:

        string name;
        int age;
        int height;
        int weight;

        //useing opeator
        people(string n, int a, int h, int w)
        {
            name=n;
            age=a;
            height=h;
            weight=w;
        }

    };

    void print(people p)
    {
        cout<<"p.name : "<<p.name<<endl;
        cout<<"p.age : "<<p.age<<endl;
        cout<<"p.height : "<<p.height<<endl;
        cout<<"p.weight : "<<p.weight<<endl;
    }

int main()
{
    people Aman("Aman Padhan", 21, 5.4, 55);
    people Biswajeet("Biswajeet Pradhan", 24, 5.7, 58);
    people Anil("Anil Padhan", 28, 5.5, 60);
    people Lipun("Lipun Padhan", 23, 5.4, 58);

    print(Aman);
        cout<<endl;
        
    print(Biswajeet);
        cout<<endl;
        
    print(Anil);
        cout<<endl;
        
    print(Lipun);
        cout<<endl;
        
return 0;
}