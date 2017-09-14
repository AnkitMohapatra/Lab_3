#include <iostream>
using namespace std;

int main() {
int dec,oct=0,num,rem,j=1;
cout << "Enter Decimal number : ";
cin >> dec;
num = dec;
while(dec>0)
{
     rem = dec % 8;
     oct = oct + rem*j;
     j = j * 10;
     dec = dec / 8;
}
cout << "Octal form of " << num << " = " << oct;
return 0;
}
