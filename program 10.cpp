#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double radius, length, width, areaCircle, areaRectangle;
cout << "Enter the radius of the circle: ";
cin >> radius;
cout << "Enter the length of the rectangle: ";
cin >> length;
cout << "Enter the width of the rectangle: ";
cin >> width;
areaCircle = M_PI * pow(radius, 2);
areaRectangle = length * width;
cout << "The area of the circle is " << areaCircle << std::endl;
cout << "The area of the rectangle is " << areaRectangle << std::endl;
return 0;
}
