// make an array of where we shouble be printing 50 arrays,
// but we wil print only 10 arrays.
    // then find their sum
    // then find their average

#include<iostream>
using namespace std;

int main()
{
     int a[50];  // using "TRUE" to make it unlimited doesnt work here
     int n; // we took 'n', bcoz we wanted to put arrays less than 50
     int sum = 0;
     float avg = 0;// here we took float bcoz the avg mmight come in decimal value
     
     cout<<"TOTAL VALUES YOU WANT TO TAKE : "<<endl;
        cin>>n; //here you have to enter total numbers of number you want to put
     
     int i;
     for ( i = 0; i < n; i++)
     {
        cin>>a[i];
     }
     
     for ( i = 0; i < n; i++)
     {
        sum=sum + a[i];
        /*
            suppose, int a[]={3,2,1,4,5,};
            :    :
            :    :
            v    v
            
            1/  sum+a[0]
                =0+3 (here we  wrote 3 bcoz a[0] = 3)
                =3 (now sum = 3)
            2/ sum+a[1]
                =3 (3 is ans of previous sum) + 2
                =5
            3/ sum+a[2]
                =5+1
                =6
            4/ sum+a[3]
                =6+4
                =10
            5/ sum+a[4]
                =10+5
                =15
            
            HENCE, here "sum = sum + a[i];" its ans will be "15"

        */
     }
     cout<<"THE SUM IS : "<< sum<<endl;

     avg = sum / n;
     cout<<"THE AVG IS : "<<avg;

     

     
return 0;
}   