// finding the larget and smallest num in an array, finding their sum

#include<iostream>
using namespace std;

int main()
{
     int arr[999];
     int a;
     cout<<"ENTER THE TOTAL VALUES ----> ";
        cin>>a;
    
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }

            //finding largest num
            int largeNo = arr[0];
            for (int j = 0; j < a; j++)
            {
                if (arr[j] > largeNo)
                {
                    largeNo = arr[j];
                }
                
            }

            cout<<"LARGEST NO. IS ----> "<<largeNo<<endl;


            //finding smallest num
            int smallNo = arr[0];
            for (int k = 0; k < a; k++)
            {
                if (arr[k] < smallNo)
                {
                    smallNo = arr[k];
                }
                
            }

            cout<<"SMALLEST NO. IS ----> "<<smallNo<<endl;


                    //finding the difference btwn largest ans smallest num
                    int diff = 0;
                    diff = largeNo - smallNo;
                    cout<<"THE DIFFERENCE BTWN LARGEST AND SMALLEST NUM IS ----> "<<diff; 


return 0;
}