// A program to compute the area of a circle.
// Area of a circle is Pi * ( radius * radius )
// Taken value of pi = 3.14


#include<iostream>

using namespace std;

int main()
{
    double pi = 3.14;                                                   // given value to 'pi' which is a variable
    double radius;                                                     // used data type is double
    double area ;

    cout << "\n-- Compute area of circle --\n" << endl;

    cout << "Enter radius of circle: " << endl;                            // asking for input
    cin >> radius;                                                        // read input and stored in variable named radius

    area = pi * radius * radius;                                        // calculate area of circle

    cout<< "Area of circle = " << area << endl;                       // output

    return 0;
  
}
