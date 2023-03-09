// Program to calculate area of rectangle

#include <iostream>

using namespace std;

int main()

{
   float Length, Breadth, Area;

   cout << "---Calculate's the area of rectangle---"<<endl;

   cout << "Enter length of rectangle: "<<endl;
   cin >> Length;

   cout << "Enter breadth of rectangle: "<<endl;
   cin >> Breadth;

   Area = Length * Breadth ;

   cout << "Area of rectangle = " << Length << " * "<< Breadth << " = "<< Area <<endl;

   return 0;
}