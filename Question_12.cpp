#include <iostream>
using namespace std;

int main() {
int a;
cout << "Enter month number : ";
cin >> a;
if(a>0 & a<13)
  {
  	if(a==2)
  	  cout << "Nuber of days are :- 28 OR 29(if it is a leap year)";
  	  else
  	   if(a%2==0)
  	     cout << "Number of days are :- 30";
  	     else
  	         cout << "Number of days are :- 31";
  }
  else
  cout << "INVALID month number";
return 0;
}
