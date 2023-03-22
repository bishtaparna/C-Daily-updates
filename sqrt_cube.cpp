/* Program to print square and cube of an integer 
    Declare an integer variable a
    Accept a user input and store it in the variable a 
    Declare 2 variables square and cube - compute and store the square and cube of a in them
    Output square and cube to the console on separate lines
*/


#include <iostream>
using namespace std;

int main() 
{
  int a;
  int square;
  int cube ;

  cout << "Enter an integer to find it's square and cube: " << endl;
  cin >> a ;

  // claculate square of integer
  square = a*a ;

  // calculate cube of integer
  cube = square*a ;

  // print square of an integer
  cout << "Square is: " << square <<endl;

  // print cube of an integer
  cout << "Cube is: " << cube ;
  return 0;

}