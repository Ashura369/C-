/* learning CONTROL STRUCTURE */
    // 3 types of control structures : -- 1/ sequence structure, 2/ selection structure, 3/ loop structure
    // these 3 ae called the Basic Control Structures
    // the classes we studied earlier wee examples of SEQUENCE STRUCTURE

/* SELECTION STRUCTURE */
/*** learning IF, ELSE IF, ELSE in SEQUENCE STRUCTURE ***/
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout<<endl;
    int age;
    cout<<"TELL ME YOUR AGE : "<<endl;
    cin>>age;

    if((age>0) && (age<18)){ /*someone whose age is above 0 but below 18"*/
        cout<<"YOU ARE BELOW 18, CANNOT JOIN THE PARTY"<<endl;
    }

    else if(age==18){ /*someone whose age is exactly 18*/
        cout<<"YOU ARE A KID AND YOU WILL GET A KID PASS TO THE PARTY"<<endl; /*consider else if = suppose*/
    }

    else if(age<1){
        cout<<"YOU ARE NOT YET BORN"<<endl;
    }

    else{ /*here else is used, it means if above both conditions are not satisfied then it will automatically print "YOU CAN COME TO THE PARTY"*/
        /*suppose your age is below 0, which is neither above 0 not below 18, nor exactly 18, it will print the below ans*/
        /*try running the code and printing age as 0 yourself*/
        /*to prevent this you have to write another else if above this else logic*/
        cout<<"YOU CAN COME TO THE PARTY"<<endl;
    }

    // here you can use any of the logic you want (else from above or if from below) 

    // if(age>18){
    //     cout<<"YOU CAN COME TO THE PARTY"<<endl;
    // }

    return 0;
}
