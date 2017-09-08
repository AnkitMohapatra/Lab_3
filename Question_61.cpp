#include <iostream>
#include<cmath>
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
cout << dec;
return 0;
}
