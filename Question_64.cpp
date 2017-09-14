#include <iostream>
#include<cmath>
using namespace std;

int main() {
long oct,bin=0,num,rem1,rem2,dec=0,i=0,j=1;
cout << "Enter Octal number : ";
cin >> oct;
num = oct;
while(oct>0)
{
     rem1 = oct % 10;
     dec = dec + rem1*pow(8,i);
     oct = oct / 10;
     ++i;
}
cout << "Decimal form of " << num << " = " << dec;
return 0;
}
