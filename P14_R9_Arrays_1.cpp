#include<iostream>
#include<vector>
using namespace std;

int main()
{
     vector<int> v;
     //input
     int n;
        cout<<"enter total elements for all the loops : ";
            cin>>n;
     for (int i = 0; i < n; i++)
     {
        int element;
        cin>>element;
        v.push_back(element);
     }

     /***********************************************************************/
     
     //output
     cout<<"elements of (for loop) are : ";
     for (int i = 0; i < v.size(); i++)
     {
        cout<<v[i]<<", ";
     }
     cout<<endl;
     cout<<endl;


     /***********************************************************************/
     v.insert(v.begin()+2, 6);  //adding element 6 after two elements

     //using for each loop
        // here we will use the same previous inputs

    cout<<"elements of (for each loop) are : ";
    for(int element : v)
    {
        cout<<element<<", ";
    }
    cout<<endl;
    cout<<endl;

    /***********************************************************************/
    v.erase(v.end()-2); //removing the second last element
    
    // using while loop

    cout<<"elements of (while loop) are : ";
    int i=0;
    while (i < v.size())
    {
        cout<<v[i]<<", ";
        i++;
    }
    cout<<endl;
    cout<<endl;
    
     
return 0;
}