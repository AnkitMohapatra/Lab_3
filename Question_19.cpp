#include <iostream>
#include<cmath>
using namespace std;

int main() {
float a,b,c,d,e,f,g,perc;
cout << "Enter marks of 6 subjects respectively  : ";
cin >> a >> b >> c >> d >> e;
cout << "Enter maximum marks of a subject : ";
cin >> f;
perc = (((a+b+c+d+e+f)/5)/g)*100;
if(perc>=90)
  cout << "Grade A";
  else
   if(perc>=80 & perc<=90)
     cout << "Grade B";
     else
      if(perc>=70 & perc<=80)
        cout << "Grade C";
        else
         if(perc>=60 & perc<=70)
           cout << "Grade D";
           else
            if(perc>40 & perc<=60)
              cout << "Grade E";
              else
               if(perc<40)
                 cout << "Grade F";
return 0;
}
