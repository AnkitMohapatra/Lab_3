#include <iostream>
using namespace std;

int main() {
int a,num,remm,hex=0,dec,n=1;
cout << "Enter Decimal number : ";
cin >> dec;
num = dec;
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
