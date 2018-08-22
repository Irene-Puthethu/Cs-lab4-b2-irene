//Aim: Q.2 To write a C++ program to convert temperature in Celsius into Fahrenheit.


//Include the library
#include <iostream> 
using namespace std;

//Write main function
    int main () {

//Put in function for the temperature which is read 
   float temperature,valueoff ;

//Write the question for the user to type in value to be converted.
   cout<< "The temperature to be converted to Fahrenheit" << endl ;
   
//Give command for the word to be read
  cin >> temperature ;

//Put formula to change temperature to desired value
  valueoff = (temperature*9)/5+32;
 
//Display the coverted temperature in the terminal
 cout<< "The temperature converted into Fahrenheit is = " <<valueoff << "F" <<endl; 
 
   return 0;
  
      }
