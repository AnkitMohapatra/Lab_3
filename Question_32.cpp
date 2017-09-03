#include <iostream>
using namespace std;

int main() {
int a,i,j;
cout << "Enter number : ";
cin >> a;
j = a;
while(j>10)
{
    j = j / 10;
}
cout << "First digit = " << j << "\nLast digit = " << a%10;
return 0;
}
