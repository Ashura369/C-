// MAKE A PROGRAMME THAT WOULD FIND WHEATHER A NUMBER IS EVEN OR ODD
#include<iostream>;
using namespace std;

int main()
{
     cout<<"this is a programme to find wheather a number is even or odd"<<endl;
     int a;
     cout<<"enter the number :";
      cin>>a;
   
   string number = (a % 2 == 0) ? "even" : "odd";
   cout<<"THIS IS "<<number<<" NUMBER"<<endl;
return 0;
}