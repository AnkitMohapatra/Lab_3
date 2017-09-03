#include <iostream>
using namespace std;

int main() {
int a,i,j;
cout << "Enter number : ";
cin >> a;
j = a;
while(j!=0)
{
     j = j / 10;
     ++i;
}
cout << "Sum of first & last digit = " << a/(10*(i-1)) + a%(10*(i-1));
return 0;
}
