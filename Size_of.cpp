// Program to print size of fundamental data types

// Will take the fundamental data type as the input from user and print it size on the screen

// Fundamental data type: Character, short, integer, long, long long, float, double, long double and bool

#include <iostream>

using namespace std;

int main()
{
    
    char choice;

    cout << "\n\n\n Find size of fundamental data types: \n";

    cout << " C = Character \n S = Short \n I = Integer \n L = long \n A = long long \n F = Float \n D = Double \n G = Long double \n B = Bool \n  ";
    cout << "Enter the choice: \n";
    cin >> choice;
    
    switch(choice)
        {
            case 'C' :
            cout << "The size of character is: " << sizeof(char) << "bytes \n";
            break;

            case 'S' :
            cout << "The size of short is: " << sizeof(short) << "bytes \n";
            break;

            case 'I' :
            cout << "The size of Integer is: " << sizeof(int) << "bytes \n";
            break;

            case 'L' :
            cout << "The size of long is: " << sizeof(long) << "bytes \n";
            break;

            case 'A' :
            cout << "The size of long long is: " << sizeof(long long) << "bytes \n";
            break;

            case 'F' :
            cout << "The size of float is: " << sizeof(float) << "bytes \n";
            break;

            case 'D' :
            cout << "The size of double is: " << sizeof(double) << "bytes \n";
            break;

            case 'G' :
            cout << "The size of long double is: " << sizeof(long double) << "bytes \n";
            break;

            case 'B' :
            cout << "The size of bool is: " << sizeof(bool) << "bytes \n";
            break;

            default:
            cout << "Error! Data type is not correct" ;
            break;

            return 0;


        }

}