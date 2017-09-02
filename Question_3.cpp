#include <iostream>
using namespace std;

int main() {
float a;
cout << "Enter the number : ";
cin >> a;
if(a>0)
   cout << "The number is POSITIVE";
   else 
      if(a<0)
        cout << "The number is NEGATIVE";
        else
           cout << "It is ZERO";
return 0;
}
