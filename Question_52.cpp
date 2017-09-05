#include <iostream>
using namespace std;

int main() {
int i,j,b,n,s;
cout << "Enter a positive  integer : ";
cin >> n;
for( i=1 ; i<=n ; i++)
{
   s=0;
   j = i;
   while(j != 0)
   {
         b = j % 10;
         s += b * b * b;
         j /= 10;
   }
   if(s==i)
      cout << s << "\n";
}
return 0;
}
