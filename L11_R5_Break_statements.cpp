// learning BREAK in loop


#include<iostream>;
using namespace std;

int main() {

    for (int i = 0; i <= 10; i++)
    {
        cout<<i<<endl;
        
        /* supose you wannt programme to print the numbers till 5 and end the programme write there, then you have to use if function */
        
        if (i==5)
                    break; // here break means, the programme stops after printing the number 5 
               
    }

cout<<endl;

    for (int i = 0; i <= 10; i++)
    {
       
        
        if (i==5)
        
            break; 
         cout<<i<<endl; 
        
    }

return 0;
}

/*
In the first prog. of for loop, where we wrote body before "if" statement, it printed till 5, then it stopped
In the second prog. of for loop, where we wrote body after "if" statement, it printed till 4, then it stopped

LEARN THE DIFFERENCE WISELY
*/