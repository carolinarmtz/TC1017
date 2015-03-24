# TC1017
#include <iostream>
using namespace std;

int gcd (int a, int b)
{
   int c;
   if ((a < 10) && (b<10))
     return  a*b;
   else
     if ( b == 0 )
       return a;
     else
       if (a==b)
         return a;
       else
         if (a==0)
           return b;
         else
           while ( b != 0 )
           {
               c = b;
               b = a % b;
               a = c;
           }
           return a;
 }

int main ()
{
 int num1, num2, result;
  cout << "give me your first number" << endl;
  cin >> num1;
  cout << "give me your second number" << endl;
  cin >> num2;
  result = gcd (num1,num2);
   cout <<"The greatest common divisor between "<<num1<< " and "<<num2<< " is "<< result << endl;
 return 0;
}
