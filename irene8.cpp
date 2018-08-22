//Aim: Q.8 to write a C++ program to calculate total, average and percentage of a students marks.


//Include the library
#include <iostream> 
using namespace std;

//Write main function
    int main () {

//Put in function for the values of marks which is read and being operated on  
   float p,c,m,b,cs,t,av,per ;

//Write the question for the user to type in marks that the student got in the Physics.
   cout<< "How many marks did the student score in Physics?" << endl ;

//Give command for the marks to be read.
  cin>> p ;

//Write the question for the user to type in marks that the student got in the Chemistry.
   cout<< "How many marks did the student score in Chemistry?" << endl ;

//Give command for the marks to be read.
  cin>> c ;

//Write the question for the user to type in marks that the student got in the Math.
   cout<< "How many marks did the student score in Math?" << endl ;

//Give command for the marks to be read.
  cin>> m ;

//Write the question for the user to type in marks that the student got in the Biology.
   cout<< "How many marks did the student score in Biology?" << endl ;

//Give command for the marks to be read.
  cin>> b ;

//Write the question for the user to type in marks that the student got in the C.S .
   cout<< "How many marks did the student score in C.S ?" << endl ;

//Give command for the marks to be read.
  cin>> cs;


//Put formula to calculate the total.
  t=(p+c+m+b+cs);
  av=(p+c+m+b+cs)/5;
  per=(p+c+m+b+cs)/500*100;
 
//Display the values in the terminal
 cout<< "The total marks of the student is " << t << " marks" <<endl; 
 cout<< "The average marks of the student is " << av << " marks" <<endl; 
 cout<< "The percentage of the student is " << per << "%" <<endl; 
 
   return 0;
  
      }
