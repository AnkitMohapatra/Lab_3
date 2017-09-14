#include <iostream>
using namespace std;

int main()
{
 int len,i;
 char bin[17],twos[17];
 int first = 0;
 cout << "Enter BINARY NUMBER (maximum 16 bits): ";
 cin >> bin;
 for(len=0 ; bin[len]!='\0' ; len++);
 for( i=(len-1) ; i>=0 ; i-- )
    {
     if(first == 0)
       {
        if(bin[i] == '0')
           twos[i] = '0';
           else
            {
             twos[i] = '1';
             first = 1;
            }
       }
       else
        {
         if(bin[i] == '0')
            twos[i] = '1';
            else
             twos[i] = '0';

        }
     }
 cout<<"\nTWOS COMPLEMENT: " << twos;
 return 0;
}
