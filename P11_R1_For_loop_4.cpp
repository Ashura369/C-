// write a FOR LOOP  programme, where the numbers will be keep printing from the number you enter
// write a for loop programme, where the numbers will be keep pringt infinitely from the number you enter


#include<iostream>;
using namespace std;

int main()
{
     // write a FOR LOOP  programme, where the numbers will be keep printing from the number you enter
     int i;
     cout<<"ENTER THE NUMBER :";
        cin>>i;
    for (; i <= 20; i++) // remember when you remove a section from for loop, you have to put the semicolo ";" sign always, even if one section is missing
    //you have to remove first section, to print the numbers from where you want
    {
        cout<<i<<endl;
    }
   
    
    // write a for loop programme, where the numbers will be keep pringt infinitely from the number you enter
    int a;
    cout<<"ENTER THE NUMBER : ";
        cin>>a;
    for (; ; a++) // to keep printing numbers infinitely you have to remove second section
    {
        cout<<i<<endl;
    }
    

     
return 0;
}