#include <iostream>
using namespace std;

int main() {
int n,i,j;
cout << "Enter two numbers : ";
cin >> n;
for( i=1 ; i<=n ; i++)
{
   if(i%2!=0)
     j += i;
}
cout << "Sum of all prime numbers = " << j;
return 0;
}
