#include <iostream>
using namespace std;

int main() {
float a,b;
cout << "Enter electric units used : ";
cin >> a;
if(a<=50)
  b = a * 0.5;
  else
   if(a>50 & a<=150)
     b = (50*0.5) + (0.75*(a-50));
     else
      if(a>150 & a<=250)
        b = 100 + (1.20*(a-150));
        else
           b = 220 + (1.5*(a-250));
b += 0.2*b;
cout << "Total electricity bill = " << b;
return 0;
}
