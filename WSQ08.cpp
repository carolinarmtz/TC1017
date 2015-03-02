# TC1017
//WSQ08
#include <iostream>
using namespace std;
int suma(int x, int y)
{
  int resp=x+y;
  return resp;
}//suma
int resta(int x, int y)
{
  int resp=x-y;
  return resp;
}//resta
int multi(int x, int y)
{
    int resp=x*y;
    return resp;
}//multi
int divi(int x, int y)
{
  int resp=x/y;
  return resp;
}//divi
int resi(int x, int y)
{
  int resp= x%y;
  return resp;
}//residuo

int main(){
  int num1, num2, sum, rest, mult, div, res;
  cout<< "Give me the first number..."<<endl;
  cin>>num1;
  cout<< "Give me the second number..."<<endl;
  cin>>num2;

  sum= suma(num1,num2);
  rest= resta(num1,num2);
  mult=multi(num1,num2);
  div=divi(num1,num2);
  res=resi(num1,num2);

  cout<< "The sum of "<<num1<< " + "<<num2<<" is "<< sum<< endl;
  cout<< "The difference of "<<num1<< " - "<<num2<<" is "<< rest<< endl;
  cout<< "The product of "<<num1<< " * "<<num2<<" is "<< mult<< endl;
  cout<< "The division of "<<num1<< " / "<<num2<<" is "<< div<< endl;
  cout<< "The remainder of "<<num1<< " / "<<num2<<" is "<< res<< endl;

  return 0;

}// int main
