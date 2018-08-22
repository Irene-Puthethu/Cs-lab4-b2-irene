//Aim: Q.7 To write C++ program to find the area of an equilateral triangle.

//Include the library 
#include <iostream> 
using namespace std;

//Writing the main function
 int main () {

//Putting the type of function to be read and operated upon.
 float s,area;

//Write the question for the user to type in value of side.
   cout<< "What is the side 's' of the triangle?" << endl ;

//Give command for the side to be read.
  cin>> s ;

//Putting the formula to find the area of an equilateral triangle
  area = 1.732/4*(s*s);
  

//Displaying the answer on the terminal    

  cout<< "The area of the equilateral triangle is  " << area << " sq.m." <<endl; 
 
   return 0;
  
      }
