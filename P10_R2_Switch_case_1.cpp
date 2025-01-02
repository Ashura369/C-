/**** learning hoe to replace ELSE by using SWITCH CASE ****/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char button;
    cout<<"INPUT A CHARACTER : "<<endl;
    cin>>button;

    /*
    if(button=='a'){
        cout<<"HII"<<endl;
    }

    else if(button=='b'){
        cout<<"NAMASTE"<<endl;
    }

    else if(button=='c'){
        cout<<"JUHAR"<<endl;
    }

    else if(button=='d'){
        cout<<"HOLA"<<endl;
    }

    else if(button=='e'){
        cout<<"YUPP"<<endl;
    }

    else{
        cout<<"I AM STILL LEARNING MORE"<<endl;
    }
    
    cout<<"THANKYOU FOR USING ME"<<endl;
    
    */
    
/********** writing the same programme as above by using SWITCH CASE ************/

// switch = if
// case = else if
// default = else



    switch (button) /* as we wrote "switch(button)" here it means, */
    /* case 'a' = button 'a' */
    {
    
    case 'a': /* in switch case we cant use semicolon, we use ":" after the case */
        cout<<"HII"<<endl;
        break;

    case 'b':
        cout<<"NAMASTE"<<endl;
        break;

    case 'c':
        cout<<"JUHAR"<<endl;
        break;

    case 'd':
        cout<<"HOLA"<<endl;
        break;

    case 'e':
        cout<<"YUPP"<<endl;
        break;

    default:
        cout<<"I AM STILL LEARNING MORE"<<endl;
        break;
    }

    cout<<"THANKYOU FOR USING ME"<<endl;

    return 0;
}