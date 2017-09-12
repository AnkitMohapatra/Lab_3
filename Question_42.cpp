#include <iostream>
using namespace std;

int main() {
int a,b,num,i;
cout << "Enter base & exponent respectively : ";
cin >> a >> b;
num = a;
for( i=1 ; i<b ; i++ )
{
	num = num * a;
}
cout << num;
return 0;
}
