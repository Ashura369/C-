/*learning ARRAYS*/

/*

- Array is a collection of items of similar type stored in contiguous memory locations.
- Sometimes a simple variable is not enough to hold all data.
- For eg, lets say we want to store the marks of 2500 stds. having 2500 different variables for this task is not feasable.
- to solve this prob. we can define an array with size 2500 that can hold the marks of all stds.

*/

#include<iostream>;
using namespace std;

int main() {

    int marks[4] = {23,45,56,89};
    //Here we put 4 in int value bcoz we wanted to add 4 values in the curly brackets
    //Its completely fine even if we donot put 4 in int value, c++ is smart enough to determine the values on its own
    int mathmarks[4];
    mathmarks[0]=2278;
    mathmarks[1]=738;
    mathmarks[2]=378;
    mathmarks[3]=578;
    //or you can also write it as "int mathmarks[4]={2278,738,378,578}"


    cout<<"THESE ARE mathmarks :-- "<<endl;
        cout<<mathmarks[0]<<endl;
        cout<<mathmarks[1]<<endl;
        cout<<mathmarks[2]<<endl;
        cout<<mathmarks[3]<<endl;
    cout<<endl;
    cout<<"THESE ARE marks :-- "<<endl;
        cout<<marks[0]<<endl;/*An array doesnt start from 1, it always starts from 0*/
        cout<<marks[1]<<endl;
        
        marks[2]={333}; //YOU CAN ALSO CHANGE THE VALUE OF AN ARRAY by using national variable
        
        cout<<marks[2]<<endl;
        cout<<marks[3]<<endl;
        cout<<endl;


         /*PRINTING marks ARRAY BY USING for loop*/
         cout<<"PRINTING VALUE OF marks ARRAY BY USING for loop"<<endl;
            for (int i = 0; i < 4; i++)
            {
                cout<<marks[i]<<endl;
            }
            //its easier to print values of an array by using "for loop"
        
        int *p=marks;

    cout<<"THE VALUE OF MARKS AT MARKS[0]"<<*p<<endl;
    cout<<"THE VALUE OF MARKS AT MARKS[1]"<<*(p+1)<<endl;
    cout<<"THE VALUE OF MARKS AT MARKS[2]"<<*(p+2)<<endl;
    cout<<"THE VALUE OF MARKS AT MARKS[3]"<<*(p+3)<<endl;


            



return 0;
}