// Program to calculate area and perimeter of rectangle.

#include <iostream>

using namespace std;

int main()

{
   float Length, Breadth, Area, Perimeter;

   cout << "---Calculate's the area and perimeter of rectangle---"<<endl;

   cout << "Enter length of rectangle: "<<endl;
   cin >> Length;

   cout << "Enter breadth of rectangle: "<<endl;
   cin >> Breadth;

   Area = Length * Breadth ;
   
   Perimeter = 2 * ( Length + Breadth ) ;

   cout << "Area of rectangle = " << Length << " * "<< Breadth << " = "<< Area <<endl;
   
   cout << "Perimeter of rectangle = " << "2 * ( " << Length << " + "<< Breadth << " ) " << " = "<< Perimeter <<endl;
   

   return 0;
}
