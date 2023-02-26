//Program to Concatenate String Objects

//Concatenate - join strings together 

/*String - collection of characters. 
  String is of two types.
        1) String that are objects of string class
        2) C-strings(C-style strings): collection of characters stored in the form of array
*/

// getline(): allows accepting and reading single and multiple line strings from the input stream

#include<iostream>

using namespace std;

int main()
{
    string Str1, Str2, Sum;

    cout << "\nJoin two strings together\n";

    cout << "Enter first string: \n";
    getline ( cin, Str1 );                                       
    cout << "Enter second string: \n";
    getline ( cin, Str2 );

    Sum = Str1 + Str2;

    cout << "Output = "<< Sum ;

    return 0;

}
