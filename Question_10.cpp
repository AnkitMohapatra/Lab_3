#include <iostream>
using namespace std;

int main() {
char c;
cout << "Enter character : ";
cin >> c;
if(c>'a' & c<'z')
  cout << "It is a LOWER CASE ALPHABET";
  else
  if(c>'A' & c<'Z')
    cout << "It is a UPPER CASE ALPHABET";
return 0;
}
