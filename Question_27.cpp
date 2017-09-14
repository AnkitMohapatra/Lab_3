#include <iostream>
using namespace std;

int main() {
int n,i,j;
cout << "Enter n = ";
cin >> n;
i = 0,j = 0;
while(i<=n)
{
	i += 1;
	j = j + i;
	
}
cout << "Sum = " << j;
return 0;
}
