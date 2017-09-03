#include <iostream>
#include<cmath>
using namespace std;

int main() {
float a,b,c,x1,x2;
cout << "Enter the coefficient of x², coefficient of x & the constant term respectively : ";
cin >> a >> b >> c;
x1 = (-b + (pow(b,2) - 4*a*c)) / (2*a);
x2 = (-b - (pow(b,2) - 4*a*c)) / (2*a);
cout << "Roots are = " << x1 << " & " << x2;
return 0;
}
