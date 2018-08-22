//Aim: Q.4 To write a C++ program to convert days into years, weeks and days.

//Include the library
#include <iostream> 
using namespace std;

//Write main function
    int main () {

//Put in function for the number of days to be converted into years, weeks and days.
//Here we take int because we do not want decimal values. 
   int year,week,rem,day;

//Write the question for the user to type in number of days to be converted.
  cout<< "The number of days to be converted to years, weeks and days" << endl ;

//Give command for the word to be read
  cin >> day  ;

//Put formula to change temperature to desired value.
  /* STEPS:
    1. Divide no. of days by 365 to get no. of years
    2. Take mod (reminder) with 365 days and divide rem by 7 to get no. of weeks
    3. For days take rem and take mod (reminder) with 7  
   */
  year = day/365;
  rem = day%365;
  week = rem/7;
  day = rem%7;
 
//Display the coverted value in the terminal
 cout<< "The given number of days in years, weeks and days is "; 
 cout<< year << "years ";
 cout<< week << "weeks ";
 cout<< day  << "days." << endl;
 
   return 0;
  
      }

