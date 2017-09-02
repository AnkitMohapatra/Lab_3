#include <iostream>
using namespace std;

int main() {
int a;
cout << "Enter a number : ";
cin >> a;
if((a%5 == 0) & (a%11 == 0))
  cout << "The number is divisible by 5 & 11";
  else
      cout << "The number is not divisible by 5 & 11";
return 0;
}
