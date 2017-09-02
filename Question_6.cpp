#include <iostream>
using namespace std;

int main() {
int a;
cout << "Enter year : ";
cin >> a;
if(a%4 == 0)
  cout << "It is a LEAP YEAR";
  else
      cout << "It is not a LEAP YEAR";
return 0;
}
