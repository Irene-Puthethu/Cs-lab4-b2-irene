//Aim: Q.1 To write a C++ program to enter length in centimeter and convert it to meter and kilometer.

//Include the library
#include <iostream> 
using namespace std;
 
//Write main function
    int main () {

//Put in function for the word which is read 
   float x,valueofmetre,valueofkm ;

//Write the question for the user to type in value to be converted.
   cout<< "x cm to be converted to metres" << endl ;
   cout<< "x cm to be converted to kilometers" << endl ;


//Give command for the word to be read
  cin >> x ;
   
//Put function to change x to desired value
  valueofmetre = (x/100);
  valueofkm = (x/100000);
   
//Display the coverted value in the terminal
 cout<< "The value in meters is = " <<valueofmetre << "m" <<endl; 
 cout<< "The value in kilometers is = " <<valueofkm << "km" <<endl;
   
   return 0;
  
      }
