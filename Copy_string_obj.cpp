// Program to copy the string taken from user

#include<iostream>

using namespace std;

int main()

{
    string string1, string2;

    cout << "\nCopy the entered string\n\n";

    cout << "Enter the string: \n";
    getline ( cin, string1 );

    string2 = string1;

    cout << "Input string = "<< string1 << endl;

    cout<< "Output string = "<< string2 << endl;

    return 0;
}
