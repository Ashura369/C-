// vectror arrays are dynamic arrays,
// where you can resize (enter or delete) arrays

/*

to use vector in arrays you need use a headerfile called "#include <vector> "

1/ headerfile -->
    --vector<datatpr> vector-name;
    --vector<datatype> vector-name(size);
        --vectyor<int / float / bool / char etc> vector-name(5);
        --vectyor<int / float / bool / char etc> vector-name();
2/ size (to check size) -->
    --v.size()
        // HERE AND ALL THE SNIPPETS NAMES AD v.size OR ANYTHING v MEANS VECTOR NAME,
        // YOU CAN USE WHATEVER NAME YOU LIKE REPLACING "v.""
3/ resize -->
    --v.resize(new size);
        --v.resize(8);
4/ capacity (will be give the capacity of a vector)
    (
    capacity of a vetor >= size of a vector 
    )
    --v.capacity

5/ add elements (to add elements in the vector)
    --v.push_back(element)
        --v.push_back(5)
    --v.insert(position (1st element of the vector), element)
        -- v.begin() (to find the first element)
        -- v.end() (to find the last element)
6/ delete element
    --v.pop_back() (will remove elments from back)
    --v.erase(position) (will remove elements from middle)
    --v.clear() (will delete all the elements)
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vect; // here "vect" is the vector name, you can use any name you like
    cout<<endl;
    cout<<endl;
    
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;
    
    
    vect.push_back(1);
    cout<<"using push_back 1"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;
    
    vect.push_back(2);
    cout<<"using push_back 2"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;
    
    vect.push_back(3);
    cout<<"using push_back 3"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;

    vect.push_back(4);
    cout<<"using push_back 4"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;

    vect.push_back(5);
    cout<<"using push_back 5"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;

    vect.push_back(6);
    cout<<"using push_back 6"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;

    vect.push_back(7);
    cout<<"using push_back 7"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;

    vect.push_back(8);
    cout<<"using push_back 8"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;

    vect.push_back(9);
    cout<<"using push_back 9"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;
    
    
    vect.resize(5);
    cout<<"using resize 5"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;

    vect.resize(6);
    cout<<"using resize 6"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;

    vect.resize(4);
    cout<<"using resize 4"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;
    
    vect.resize(10);
    cout<<"using resize 10"<<endl;
    cout<<"size of vector vect : "<<vect.size()<<endl;
    cout<<"capacity of vector vect : "<<vect.capacity()<<endl;
    cout<<endl;

    // THE THING THAT I LEARNED IS,
    // WHENEVER I INCREASE THE VALUE OF THE VECTOR TO A HIGHER NUMBER, 
    // THE CAPACITY OF THE VECTOR WILL INCREASE.
    // BUT WHEN I REDUCE THE VALUE OF THE VECTOR TO A LOWER NUMBER,
    // THE CAPACITY OF THE VECTOR WILL REMAIN SAME, IT WILL NOT FALL TO A LOWER NUMBER

    vect.pop_back(); //reduced the element by 1
    vect.pop_back(); //reduced the element by 1 again, total 2 elements are reduced
    cout<<"size of pop_back vect : "<<vect.size()<<endl;
    cout<<"capacity of pop_back vect : "<<vect.capacity()<<endl;

return 0;
}