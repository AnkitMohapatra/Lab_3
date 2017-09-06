#include <iostream>
using namespace std;

int main() {
int n,i,j=0,a=0,b=1;
cout << "Enter a positive number : ";
cin >> n;
for( i=1 ; i<=n ; i++)
{
	if(i==1)
	{
	  cout << a << "\n";
	  continue;
	}
	if(i==2)
	{
	  cout << b << "\n";
	  continue;
	}
	j = a + b;
	a = b;
	b = j;
	cout << j << "\n";
}
return 0;
}
