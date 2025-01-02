// learning looping in vector

#include<iostream>
#include<vector>
using namespace std;

int main()
{
     vector<int> v;

     //using for loop
     //* input section */
     cout<<"enter elements for (for) loop : "<<endl;
     for (int i = 0; i < 5; i++)
     {
        int element;
        cin>>element;
        v.push_back(element);
     }

        /*output section*/
        cout<<"elements you added are : ";
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<", ";
        }
    
    cout<<endl;
    cout<<endl;
     
    //  again using the above section, different process

                vector <int> v2;
                int a;
                    cout<<"total elements for (for loop): ";
                        cin>>a;
                
                //input section
                int element2;
                for (int i = 0; i < a; i++)
                {
                    cin>>element2;
                    v2.push_back(element2);
                }
                
                    //output section
                    cout<<"elements you added : ";
                    for (int i = 0; i < a; i++)  // "i < a" = "i < v.size()" both are same
                    {
                        cout<<v2[i]<<", ";
                    }
                    cout<<endl;
                    cout<<endl;
    
    /***********************************************************************/
    // using "for each" loop

    vector<int> v3;
     int b;
        cout<<"total elements for (for each) loop - ";
            cin>>b;
    //input
    int element3;
    for (int i = 0; i < b; i++)
    {
        cin>>element3;
        v3.push_back(element3);
    }

        //output
        cout<<"elements for each loop -- ";
        for(int element2 : v3)
        {
            cout<<element2<<", ";
        }
        cout<<endl;
        cout<<endl;
    
    /***********************************************************************/
    // using while loop
    vector<int> v4;
    int c;
        cout<<"enter elements for (while) loop ";
            cin>>c;
    
    int element4;
    for (int i = 0; i < c; i++)
    {
        cin>>element4;
        v4.push_back(element4);
    }
        cout<<"elements for while loop -- ";
        int i = 0;
        while (i < c)
        {
            cout<<v4[i]<<",";
            i++;
        }

        cout<<endl;
        cout<<endl;
    
    
    
return 0;
}