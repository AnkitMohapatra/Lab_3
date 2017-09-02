#include <iostream>
using namespace std;

int main() {
float a,b,c;
cout << "Enter the three numbers respectively : ";
cin >> a >> b >> c;
if(a>b & a>c)
  cout << "Greatest number is " << a;
  else
  if(b>c & b>a)
  cout << "Greatest number is " << b;
  else
  cout << "Greatest number is " << c;
	return 0;
}
