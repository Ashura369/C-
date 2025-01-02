// use of this keyword

#include<iostream>
using namespace std;

    class cricketer
    {
        public:

        string name;
        int runs;

        // use of This keyword
        cricketer (string name, int runs)
        {
            this->name=name;
            this->runs=runs;
        }

        // when you put same name = name, it will not worl
        // if you put "this -> " it will work

    };

    void print(cricketer c)
    {
        cout<<c.name<<", "<<c.runs<<endl;
    }

int main()
{
    cricketer c1 ("Virat Kohli", 250);    
    cricketer c2 ("Rohit Sharma", 200);  

    print(c1);
        cout<<endl;  
    print(c2);
        cout<<endl;  
return 0;
}