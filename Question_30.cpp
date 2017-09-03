#include <iostream>
using namespace std;

int main() {
int n,i,j;
cout << "Enter n = ";
cin >> n;
i = 1,j = 0;
while(i<=10)
{
     j = n * i;;
     cout << n << " x " << i << " = " << j << "\n";
     i += 1;
}
return 0;
}
