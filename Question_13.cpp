#include <iostream>
using namespace std;

int main() {
int a,R2000,R500,R200,R100,R50,R20,R10,R5;
cout << "Enter amount : ";
cin >> a;
if(a>=5)
{
R2000 = a / 2000;
a = a % 2000;
R500 = a / 500;
a = a % 500;
R200 = a / 200;
a = a % 200;
R100 = a / 100;
a = a % 100;
R50 = a / 50;
a = a % 50;
R20 = a / 20;
a = a % 20;
R10 = a / 10;
a = a % 10;
R5 = a / 5;
cout << "Rs. 2000 = " << R2000 << "\nRs. 500 = " << R500 << "\nRs. 200 = " << R200 << "\nRs. 100 = " << R100 << "\nRs. 50 = " << R50 << "\nRs. 20 = " << R20 << "\nRs. 10 = " << R10 << "\nRs. 5" << R5;
}
else
   cout << "Denomations of this amount is are not available";
return 0;
}
