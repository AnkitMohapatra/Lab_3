#include <iostream>
using namespace std;

int main() {
int a;
cout << "Enter week day number : ";
cin >> a;
switch(a)
      {
      	case 1 : cout << "SUNDAY";
      	         break;
      	case 2 : cout << "MONDAY";
      	         break;
      	case 3 : cout << "TUESDAY";
      	         break;
      	case 4 : cout << "WEDNESDAY";
      	         break;
      	case 5 : cout << "THURSDAY";
      	         break;
      	case 6 : cout << "FRIDAY";
      	         break;
      	case 7 : cout << "SATURDAY";
      	         break;
      	default : cout << "INVALID WEEK NUMBER";         
      }
return 0;
}
