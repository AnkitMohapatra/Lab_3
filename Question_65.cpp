#include <iostream>
#include<cmath>
using namespace std;

int main() {
int oct,bin=0,rem1,rem2,dec=0,i=0,j=1,remm,hex=0,n=1;
cout << "Enter Octal number : ";
cin >> oct;
while(oct>0)
{
     rem1 = oct % 10;
     dec = dec + rem1*pow(8,i);
     oct = oct / 10;
     ++i;
}
while(dec>0)
{
    remm = dec % 16;
    hex = hex + remm*n;
    n = n * 10;
    dec = dec / 16;
}
if(hex>=10 & hex<=15)
{
switch(hex)
{
    case 10: cout << "A";
             break;
    case 11: cout << "B";
             break;
    case 12: cout << "C";
             break;
    case 13: cout << "D";
             break;
    case 14: cout << "E";
             break;
    case 15: cout << "F";
}
}
else
    cout << hex;
return 0;
}
