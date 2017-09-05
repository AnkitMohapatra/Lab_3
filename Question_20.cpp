#include <iostream>
using namespace std;

int main() {
float bs,gs;
cout << "Enter Basic Salary : ";
cin >> bs;
if(bs<=10000)
  gs = bs + (0.2*bs) + (0.8*bs);
  else
   if(bs<=20000 & bs<=10000)
     gs = bs + (0.25*bs) + (0.9*bs);
     else
      gs = bs + (0.3*bs) + (0.95*bs);
cout << "Gross salary = " << gs;
return 0;
}
