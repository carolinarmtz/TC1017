# TC1017
#include <iostream>
using namespace std;
int main(){
  int a,b,suma, resta, multi, divi,resi; // declara las variables
  cout<<" ingrese numero a: "; //impresion de instruccion
  cin>>a; // captura de valor
  cout<<" ingrese numero b: ";
  cin>>b;
  suma=a+b;
  resta= a-b;
  multi=a*b;
  divi=a/b;
  resi=a%b;
  cout<<"la suma de "<<a<<"+"<<b<<" es:"<<suma<<endl;
  cout<<"la resta de "<<a<<"-"<<b<<" es:"<<resta<<endl;
  cout<<"la multiplicación de "<<a<<"*"<<b<<" es:"<<multi<<endl;
  cout<<"la division de "<<a<<"/"<<b<<" es:"<<divi;
  cout<<" con un residuo de: "<<resi; // impresion de texto que incluye el resultado
  return 0;
}
