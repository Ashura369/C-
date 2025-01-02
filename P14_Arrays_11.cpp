// finding  the second largest value in an array

#include<iostream>
using namespace std;

int main()
{
     int a[9999];
     int b;
     cout<<"enter the total values : ";
      cin>>b;
   
    for (int i = 0; i < b; i++)
    {
      cin>>a[i];
    }
    
   //  printing second largest num
    int largest_num=a[0]; int second_largest=-1;
    for (int i = 0; i < b; i++)
    {
      if (a[i] > largest_num)
      {
         second_largest = largest_num;
         largest_num = a[i];
      }

      else if (a[i] > second_largest && second_largest != largest_num)
      {
         second_largest = a[i];
      }      
      
    }

    if (second_largest == -1)
    {
      cout<<"THERE IS NO SECODN LARGEST VALUE";
    }
    else{
      cout<<"THE SECOND LARGETS VALUE IS : "<<second_largest<<endl;
    }
    
    
return 0;
}