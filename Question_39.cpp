#include <iostream>
using namespace std;

int main()
{
    int a,b,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c0=0;
    cout << "Enter a number : ";
    cin >> a;
    while(a>0)
    {
        b = a % 10;
        a = a / 10;
        switch(b)
        {
            case 1: c1++;
                    break;
            case 2: c2++;
                    break;
            case 3: c3++;
                    break;
            case 4: c4++;
                    break;
            case 5: c5++;
                    break;
            case 6: c6++;
                    break;
            case 7: c7++;
                    break;
            case 8: c8++;
                    break;
            case 9: c9++;
                    break;
            case 0: c0++;
        }
    }
    cout << "Number of zeros = " << c0 << "\nNumber of ones = " << c1 << "\nNo. of twos = " << c2 << "\nNumber of threes = " << c3 << "\nNumber of fours = " << c4 << "\nNumber of fives = " << c5 << "\nNumber of sixes = " << c6 << "\nNumber of sevens = " << c7 << "\nNumber of eights = " << c8 << "\nNumber of nines = " << c9;
    return 0;
}
