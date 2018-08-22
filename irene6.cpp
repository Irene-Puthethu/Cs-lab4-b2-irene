//Aim: Q.6 To write a C++ program to find area of a triangle.


//Include the library
#include <iostream> 
using namespace std;

//Write main function
    int main () {

//Put in function for the values which is to be read and operated on. 
   float h,b,a ;

//Write the question for the user to type in height to find the area.
   cout<< "What is the height 'h' of the triangle?" << endl ;
   
//Give command for the height to be read
  cin >> h ;

//Write the question for the user to type in base to find the area.
   cout<< "What is the base 'b' of the triangle?" << endl ;
   
//Give command for the base to be read
  cin >> b;

//Put formula to find area of a triangle.
  a = (h*b)* 1/2;
 
//Display the area in the terminal
 cout<< "The area of the triangle is  " << a << " sq.m." <<endl; 
 
   return 0;
  
      }
