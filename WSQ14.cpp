# TC1017
//CarolinaRomo
#include <iostream>
using namespace std;

int fact(int a){
    if(  a == 0) {
    return 1;
   }else {
   a= a*fact(a-1);
  }
 }

double calculate_e(){
  int precision;
  double e;
  int a;
  double sum=0;
  cout<< "specify the number of decimal points "<<endl;
  cin>> (precision);
  for( a=0; a<=precision; a++){
   e= 1.0/fact(a);
   sum = sum+e;
  }
cout <<" e: "<<sum;
}

 int main(){
   int precision;
 calculate_e();
 return 0;
}
