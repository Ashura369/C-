// (((here we will learn the difference btwn local and global variable)))

# include<iostream>

using namespace std;

int apple = 6;
// HERE IT IS A GLOBAL VARIABLE, IF WE RUN THIS CODE IT WILL SHOW apple = 6
// BCOZ THIS OUTSIDE OF A FUNCTION


int main () {

   apple = 9; 
// IT IS A LOCAL VARIABLE NOW, IF WE RUN THIS CODE IT WILL SHOW apple = 9
// BCOZ THIS IS INSIDE OF A FUNCTION NOW AND THIS IS THE NEW LOCAL VARIABLE

      apple = 66;
   
// AS WE PUT NEW VALUE FOR APPLE, HENCE THE NEW LOCAL VARIABLE WILL BE 66

      cout<<apple;
}

