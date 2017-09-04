#include <iostream>
using namespace std;

int main() {
int a,b,n,s=0;
cout << "Enter a positive  integer : ";
cin >> a;
n = a;
while(n != 0)
{
      b = n % 10;
      s += b * b * b;
      n /= 10;
}
if(s == a)
  cout << a << " is an ARMSTRONG number";
  else
   cout << a << " is NOT an ARMSTRONG number";
return 0;
}
