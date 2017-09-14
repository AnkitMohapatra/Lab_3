#include <iostream>
using namespace std;

int main() {
long a,num,rem1,rem2,dec=0,oct=0,b1=1,b2=1;
cout << "Enter Binary number : ";
cin >> a;
num = a;
while(num>0)
{
     rem1 = num % 10;
     dec = dec + rem1*b1;
     b1 = b1 * 2;
     num = num / 10;
}
while(dec>0)
{
     rem2 = dec % 8;
     oct = oct + rem2*b2;
     b2 = b2 * 10;
     dec = dec / 8;
}
cout << "Octal form of " << a << " = " << oct;
return 0;
}
