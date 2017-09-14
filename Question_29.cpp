#include <iostream>
using namespace std;

int main() {
int n,i,j;
cout << "Enter n = ";
cin >> n;
i = 0,j = 0;
while(i<=n)
{
  if(i%2!=0)
    j = j + i;
i += 1;
}
cout << "Sum = " << j;
return 0;
}
