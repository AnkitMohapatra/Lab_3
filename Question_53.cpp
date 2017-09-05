#include <iostream>
using namespace std;

int main() {
int a,i,s=0;
cout << "Enter a positive  integer : ";
cin >> a;
for( i=1 ; i<a ; i++)
   {
    if(a%i==0)
       s += i;
   }
if(s==a)
  cout << "PERFECT NUMBER";
  else
   cout << "NOT A PERFECT NUMBER";
return 0;
}
