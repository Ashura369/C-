#include<iostream>
using namespace std;

int main()
{
     int marks[]={1,2,3,4,5,6,7,8};
    
// USING POINTERS IN ARRAYS
     int *p = marks;
     //using addition
     cout<<"THE VALUE OF MARKS : "<<*p<<endl;
     cout<<"THE VALUE OF MARKS : "<<*(p+1)<<endl;
     cout<<"THE VALUE OF MARKS : "<<*(p+2)<<endl;
     cout<<"THE VALUE OF MARKS : "<<*(p+3)<<endl;
     cout<<"THE VALUE OF MARKS : "<<*(p+4)<<endl;
     cout<<"THE VALUE OF MARKS : "<<*(p+5)<<endl;
     cout<<"THE VALUE OF MARKS : "<<*(p+6)<<endl;
     cout<<"THE VALUE OF MARKS : "<<*(p+7)<<endl;
     cout<<endl;
     
     //using little bit of tricks
     cout<<"THE VALUE OF MARKS : "<<*((p+7)-2)<<endl; 
     cout<<"THE VALUE OF MARKS : "<<*(p+7-2)<<endl; //both works the same

     //printing the values in new type
     cout<< "MARKS : "<< *(p++)<<endl;
     cout<< "MARKS : "<< *(p++)<<endl;
     cout<< "MARKS : "<< *(p++)<<endl;
     cout<< "MARKS : "<< *(p++)<<endl;
     cout<< "MARKS : "<< *(p++)<<endl;
     cout<< "MARKS : "<< *(p++)<<endl;
     cout<< "MARKS : "<< *(p++)<<endl;
     cout<< "MARKS : "<< *(p++)<<endl;
     
     cout<<endl;

     
}