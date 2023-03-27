// Program to find factorial of an integer.

#include<iostream>

using namespace std;

int main()
{
    int num, factorial = 1;   // factorial = 1 so that factorial will not except garbage value in starting

    cout << "Enter an integer: "<< endl;
    cin >> num;

    for( int x = 1; x <= num; x = ++x )
    {
        factorial = factorial * x;
    }

    cout << "Factorial of " << num << " = " << factorial<<endl;

    return 0;

}
