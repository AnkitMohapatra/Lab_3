#include <iostream>
#include<cctype>
using namespace std;

int main() {
char c;
cout << "Enter character : ";
cin >> c;
if(isalpha(c))
  cout << "It is an ALPHABET";
  else
  if(isdigit(c))
    cout << "It is a DIGIT";
    else
    cout << "It is a SPECIAL CHARACTER";
return 0;
}
