#include <iostream>
using namespace std;

int main()
{
    
   int side1,side2,side3;
   cout<<"Enter the sides of the triangle: ";
   cin>>side1>>side2>>side3;
   bool isEqual=(side>0) && (side1==side2) && (side2==side3);
   cout<<isEqual<<endl;
   return 0;

}