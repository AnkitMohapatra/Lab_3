#include <iostream>
#include<cmath>
using namespace std;

int main() {
int oct,bin=0,num,rem1,rem2,dec=0,i=0,j=1;
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
while(dec>0)
{
     rem2 = dec % 2;
     bin = bin + rem2*j;
     j = j * 10;
     dec = dec / 2;
}
cout << "Binary form of " << num << " = " << bin;
return 0;
}
