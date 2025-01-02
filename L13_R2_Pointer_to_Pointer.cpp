/*learning POINTER TO POINTER*/

#include<iostream>;
using namespace std;

int main() {
    int a=3;
    int* b;
    b=&a;
    int** c=&b; /*it means a pointer that points to another pointer, hence called  POINTER TO POINTER*/

        cout<<"THE ADDRESS OF a : "<<b<<endl;
        cout<<"THE ADDRESS OF a : "<<&a<<endl;
        cout<<"THE ADDRESS OF b : "<<c<<endl;
        cout<<"THE ADDRESS OF b : "<<&b<<endl;
        cout<<"THE VAKUE AT ADDRESS b : "<<*b<<endl;
        cout<<"THE VALUE AT ADDRESS c is : "<<*c<<endl;
        cout<<"THE VALUE AT ADDRESS VALUE AT (VALUE AT (c)) is : "<<**c<<endl;

return 0;
}