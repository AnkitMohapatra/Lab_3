#include <iostream>
using namespace std;

int main() {
char c;
cout << "Enter alphabet : ";
cin >> c;
if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
  cout << "It is a VOWEL";
  else
      cout << "It is a CONSONANT";
return 0;
}
