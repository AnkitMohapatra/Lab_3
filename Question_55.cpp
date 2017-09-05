#include <iostream>
using namespace std;

int main() {
int a,b,i,j,n,s=0;
cout << "Enter a positive  integer : ";
cin >> a;
n = a;
while(n != 0)
{
      j = 1;
      b = n % 10;
      for( i=1 ; i<=b ; i++ )
         {
          j *= i;
         }
      s += j;
      n /= 10;
}
if(s == a)
  cout << a << " is a STRONG number";
  else
   cout << a << " is NOT a STRONG number";
return 0;
}
