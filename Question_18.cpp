#include <iostream>
#include<cmath>
using namespace std;

int main() {
float cp,sp,pr;
cout << "Enter cost price & selling price respectively : ";
cin >> cp >> sp;
pr = sp - cp;
if(pr>0)
  cout << "PROFIT = Rs." << pr;
  else
  if(pr<0)
    cout << "LOSS = Rs." << -pr;
    else
     cout << "Neither profit nor loss";
return 0;
}
