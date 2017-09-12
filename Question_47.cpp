#include <iostream>
using namespace std;

int main() {
int a,j,i;
cout << "Enter a number : ";
cin >> a;
for( i=1 ; i<=a ; i++)
{
	if(a%i==0)
	  j++;
}
if(j==2)
  cout << "PRIME NUMBER";
  else
   cout << "NOT A PRIME NUMBER";
return 0;
}
