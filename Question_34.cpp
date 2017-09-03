#include <iostream>
#include<cmath>
using namespace std;

int main() {
int a,i,f,l;
cout << "Enter number : ";
cin >> a;
f = a;
i = 0;
while(f>10)
{
     f = f / 10;
     i++;
}
l = a % 10;
a = a - l + f;
a = (a - f*(pow(10,i))) + l*(pow(10,i));
cout << a;
return 0;
}
