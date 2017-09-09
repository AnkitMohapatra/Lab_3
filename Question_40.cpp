#include <iostream>
using namespace std;

int main()
{
int a,b,r=0;
cout << "Enter a number : ";
cin >> a;
while(a!=0)
{
     r = (r*10) + (a%10);
     a /= 10;
}
while(r!=0)
{
    switch(r%10)
    {
        case 1: cout << "one ";
                break;
        case 2: cout << "two ";
                break;
        case 3: cout << "three ";
                break;
        case 4: cout << "four ";
                break;
        case 5: cout << "five ";
                break;
        case 6: cout << "six ";
                break;
        case 7: cout << "seven ";
                break;
        case 8: cout << "eight ";
                break;
        case 9: cout << "nine ";
                break;
        case 0: cout << "zero ";
    }
    r = r / 10;
}
return 0;
}
