#include <iostream>
using namespace std;

int main() {
int a,b,max;
cout << "Enter two numbers : ";
cin >> a >> b;
max = (a>b) ? a : b;
while(max>0)
{
	if(max%a==0 & max%b==0)
	{
	  cout << "LCM = " << max;
	  break;
	}
	else
	 max++;
}
return 0;
}
