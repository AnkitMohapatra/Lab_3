#include <iostream>
using namespace std;

int main() {
int a,b,i;
cout << "Enter base & exponent respectively : ";
cin >> a >> b;
for( i=1 ; i<b ; i++ )
{
	a = a * a;
}
cout << a;
return 0;
}
