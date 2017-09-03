#include <iostream>
using namespace std;

int main() {
int a,b,s;
cout << "Enter number : ";
cin >> a;
b = a;
while(b!=0)
{
     s = s + (b%10);
     b = b / 10;
}
cout << "Sum of digits = " << s;
return 0;
}
