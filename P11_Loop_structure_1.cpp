/*make an array using loop, for loop, whle loop, do while loop*/


#include<iostream>;
using namespace std;

int main() {

    int marks []={1,2,3,4,5,6,7,8,9,10};

    // using loop
    cout<<"USING LOOP ---"<<endl;
    cout<<marks[0]<<endl;
        cout<<marks[1]<<endl;
        cout<<marks[2]<<endl;
        cout<<marks[3]<<endl;
        cout<<marks[4]<<endl;
        cout<<marks[5]<<endl;
        cout<<marks[6]<<endl;
        cout<<marks[7]<<endl;
        cout<<marks[8]<<endl;
        cout<<marks[9]<<endl;
    cout<<endl;

    // using for loop
    cout<<"USINNG FOR LOOP --- "<<endl;
        for (int i = 0; i <= 10; i++)
        {
            cout<<marks[i]<<endl;
        }
    cout<<endl;

    // using while loop
    cout<<"USING WHILE LOOP ---"<<endl;
        do
        {
            cout<<marks<<endl;
            marks++;
        } while (marks<=10);
        
    


return 0;
}