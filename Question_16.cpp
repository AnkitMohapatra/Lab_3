#include <iostream>
using namespace std;

int main() {
float a,b,c;
cout << "Enter the three sides of triangle respectively : ";
cin >> a >> b >> c;
if(a==b & a==c)
   cout << "The triangle is EQUILATERAL";
   else
   if((a==b & a!=c) || (b==c & b!=a) || (a==c & a!=b))
       cout << "The triangle is ISOSCELES";
       else
          cout << "The triangle is SCALENE";
return 0;
}
