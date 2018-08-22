//Aim: Q.9 to write a C++ program to calculate simple interest.


//Include the library
#include <iostream> 
using namespace std;

//Write main function
    int main () {

//Put in function for the values of marks which is read and being operated on  
   float p,r,t,i ;
 
//Write the question for the user to type in principle, interest rate and time.
   cout<< "How much is the principle?" << endl ;
//Give command for the values to be read.
  cin>> p ;

//Write the question for the user to type in principle, interest rate and time.
   cout<< "How much is the interest rate?" << endl ;
//Give command for the values to be read.
  cin>> r ;

//Write the question for the user to type in principle, interest rate and time.
  cout<< "How much time duration?" << endl ;
//Give command for the values to be read.
  cin>> t ;



//Putting the formula to find the simple interest.
  i = p*r*t ;

//Displaying the answer on the terminal    

  cout<< "The simple interest is rupees " << i << "." <<endl; 
 
   return 0;
  
      }

