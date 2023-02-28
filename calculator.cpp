//Program to add, subtract, multiply and divide to numbers taken from user

#include<iostream>

using namespace std;

int main()
{
    // here, operator is character, a is used for operator
    char choice ; 

    // Inputs are taken as float
    float num1, num2 ;

    cout << "Enter two operands: \n";
    cin >> num1 >> num2 ;

    cout << "Enter operator: +, -, *, / \n";
    cin >> choice ;

    switch(choice)
        {
            case '+' :
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

            case '-' :
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

            case '*' :
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

            case '/' :
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

            default:
            cout << "Error! Operator is not correct" ;
            break;

        }

    return 0;

}
