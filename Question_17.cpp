#include <iostream>
#include<cmath>
using namespace std;

int main() {
float a,b,c,d,e,x1,x2;
cout << "Enter the coefficient of x², coefficient of x & the constant term respectively : ";
cin >> a >> b >> c;
d = (b*b) - (4*a*c);
if(d>0)
{
  cout << "x1 = " << (-b + sqrt(d))/(2*a);
  cout << "x2 = " << (-b - sqrt(d))/(2*a);
}
  else
    if(d==0)
    {
      cout << "x = " << -b/(2*a);
    }
    else
      if(d<0)
      {
        e = sqrt(abs(d));
        cout << "x1 = " << -b/(2*a) << " + " << e/(2*a) << "i"; 
        cout << "x1 = " << -b/(2*a) << " - " << e/(2*a) << "i";
      }
return 0;
}
