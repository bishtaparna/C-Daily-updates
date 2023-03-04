// Program to Add two numbers.

#include<iostream>

using namespace std;

int main()
{
    int num1, num2, sum;

    // Example of addition of two numbers

    cout<< "\nPrint the sum of two numbers: \n";
    cout<< "The sum of 30 and 45 is: " << 30 + 45 << "\n\n";

    // Add two numbers using user input

    cout<< "Enter two integers: \n";
    cin>> num1 >> num2;
    
    sum = num1 + num2 ;

    cout<< "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;

}
