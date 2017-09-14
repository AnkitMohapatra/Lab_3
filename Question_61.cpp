#include <iostream>
using namespace std;

int main() {
long a,num,rem,dec=0,b=1;
cout << "Enter Binary number : ";
cin >> a;
num = a;
while(num>0)
{
     rem = num % 10;
     dec = dec + rem*b;
     b = b * 2;
     num = num / 10;
}
cout << "Decimal fom of " << a << " = " << dec;
return 0;
}
