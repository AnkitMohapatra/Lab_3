#include <iostream>
using namespace std;

int main() {
char c;
cout << "Enter character";
cin >> c;
if((c>'a' & c<'z') | (c>'A' & c<'Z'))
  cout << "The character is an alphabet";
  else
      cout << "The character is NOT an alphabet";
return 0;
}
