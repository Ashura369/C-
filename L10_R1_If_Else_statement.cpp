#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout<<"WHAT IS YOUR AGE"<<endl;
    cin>>age;

    if(age>=18){
        cout<<"YOU CAN THE ENTER THE PARTY"<<endl;
    }
    else if(age<1){
        cout<<"YOU ARE NOT BORN YET"<<endl;
    }
    else{
        cout<<"YOU CANNOT ENTER THE PARTY"<<endl;
    }
    return 0;
}
