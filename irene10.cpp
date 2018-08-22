//Aim: Q.10 to write a C++ program to calculate compound interest.


//Include the library
#include <iostream> 
#include <cmath>
using namespace std;

//Write main function
    int main () {

//Put in function for the values of marks which is read and being operated on  
   float a,p,r,n,t ;
 
//Write the question for the user to type in principle.
  cout<< "How much is the principle?" << endl ;
//Give command for the values to be read.
  cin>> p ;

//Write the question for the user to type in interest rate.
   cout<< "How much is the interest rate?" << endl ;
//Give command for the values to be read.
  cin>> r ;

//Write the question for the user to type in time.
  cout<< "How much time duration?" << endl ;
//Give command for the values to be read.
  cin>> t ;

//Write the question for the user to type in no. of times interest is compounded in an year.
  cout<< "How many no. of times interest is compounded in an year?" <<  endl ;
//Give command for the values to be read.
  cin>> n ;



//Putting the formula to find the simple interest.
  a = p*pow((1+ (r/n)),n*t)  ;

//Displaying the answer on the terminal    

  cout<< "The compound interest is rupees " << a << "." <<endl; 
 
   return 0;
  
      }
