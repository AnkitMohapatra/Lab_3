#include <iostream>
using namespace std;

int main() {
int a,b,r;
cout << "Enter number : ";
cin >> a;
b = a;
while(b!=0)
{
     r = (r*10) + (b%10);
     b /= 10;
}
if(r == a)
  cout << "The number is PALINDROME";
  else
   cout << "The number is NOT PALINDROME";
return 0;
}
