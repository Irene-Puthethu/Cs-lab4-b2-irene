//Aim: Q.3 To write a C++ program to convert temperature in fahrenheit into celsius.


//Include the library
#include <iostream> 
using namespace std;

//Write main function
    int main () {

//Put in function for the temperature which is read 
   float temp,valueofc ;

//Write the question for the user to type in value to be converted in the terminal.
   cout<< "The temp to be converted to celsius" << endl ;
   
//Give commamd for the word to be read
  cin >> temp ;

//Put formula to change temperature to desired value
  valueofc = (temp-32)*5/9;
 
//Display the coverted temperature in the terminal
 cout<< "The temperature converted into celsius is = " <<valueofc << "C" <<endl; 
 
   return 0;
  
      }
