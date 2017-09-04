#include <iostream>
using namespace std;

int main() {
int a,b,j,i;
cout << "Enter two numbers : ";
cin >> a >> b;
if(a<b)
{
for( i=1 ; i<=a ; i++ )
{
     if((a%i==0) & (b%i==0))
       j = i;
}
}
 else
  {
  for( i=1 ; i<=b ; i++ )
{
     if((a%i==0) & (b%i==0))
       j = i;
}	
  }
cout << j;
return 0;
}
