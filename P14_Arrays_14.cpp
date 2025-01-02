// Write a C++ program to count how many even and odd numbers are in an array. 
// Write all the even and odd no.s of that array

#include<iostream>
using namespace std;

int main()
{
     int arr[50];
     int b;
     cout<<"TOTAL NUMBERS : ";
        cin>>b;
    
    for (int i = 0; i < b; i++)
    {
        cin>>arr[i];
    }

       // printing total no.s of odd and even no.s in an array
       int total_evens = 0, total_odds = 0;
       for (int j = 0; j < b; j++)
       {
        if (arr[j] %2 == 0)
        {
          total_evens++;
        }

          else{
            total_odds++;
          }
        
       }
       
       cout<<"total evens----> "<<total_evens<<endl;
       cout<<"total odds----> "<<total_odds<<endl;
       
       
       cout<<endl;



       // printing all the odd and even no.s in an array
       int evens=0;
       int odds=0;
       for (int j = 0; j < b; j++)
       {
          if (arr[j] %2 ==0)
          {
          evens = arr[j];
          cout<<"all evens : "<<evens<<endl;            
          }
          
       }

       for (int k = 0; k < b; k++)
       {
          if (arr[k] %2 == 1)
          {
          odds = arr[k];
          cout<<"all odds : "<<odds<<endl;            
          }
          
       }
         
return 0;
}