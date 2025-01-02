// learning Dynamic Allocation

#include<iostream>
using namespace std;

class cricketer
{
    public:
    
    string names;
    int runs;
    float avg;

    cricketer(string names, int runs, float avg)
    {
        this->names=names;
        this->runs=runs;
        this->avg=avg;
    }

};

    void print(cricketer c)
    {
        cout<<"names : "<<c.names<<endl;
        cout<<"runs : "<<c.runs<<endl;
        cout<<"avg : "<<c.avg<<endl;
    }

int main()
{
     cricketer c1("Virat Kohli", 25000, 22.5);
     cricketer* c2 = new cricketer ("Rohit Sharma", 18000, 47.8);

        cout<<endl;
     print(c1);
        cout<<endl;
     print(*c2);
        cout<<endl;
    
    cout<<(*c2).names<<", "<<(*c2).runs<<", "<<(*c2).avg<<endl;

    // we can directly store an interger value in a pointer, without giving any meomory address like &a etc.
    // created ptr file --> here it directly stored the address of 5245 withou any name like a / b /c etc. 
    int* ptr = new int (5245);
    cout<<"* ptr = "<<*ptr<<endl;

return 0;
}