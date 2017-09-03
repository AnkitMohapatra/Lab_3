#include <iostream>
using namespace std;

int main() {
int a,b,p;
cout << "Enter number : ";
cin >> a;
b = a;
p = 1;
while(b!=0)
{
     p = p * (b%10);
     b = b / 10;
}
cout << "Product of digits = " << p;
return 0;
}
