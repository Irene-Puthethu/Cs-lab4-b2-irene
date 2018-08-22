//Aim: Q.5 To write a C++ program to find the third angle of a triangle considering both of the other angles to be given by the user.


//Include the library
#include <iostream> 
using namespace std;

//Write main function
    int main () {

//Put in function for the values of angles which is read and being operated on  
   float a,b,c;

//Write the question for the user to type in value of first angle.
   cout<< "What is the first angle 'a' of the triangle?" << endl ;

//Give command for the angle to be read.
  cin>> a ;

//Write the question for the user to type in value of second angle.
   cout<< "What is the second angle 'b' of the triangle?" << endl ;
   
//Give command for the angle to be read.
  cin>> b ;

//Put formula to change temperature to desired value
  c= 180-(a+b);
 
//Display the third angle in the terminal
 cout<< "The third angle of the triangle is " << c << " degrees" <<endl; 
 
   return 0;
  
      }
