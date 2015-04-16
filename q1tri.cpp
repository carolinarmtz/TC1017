//CarolinaRomo A01229797
//Triangles
#include <iostream>
using namespace std;

int triangle (int numero) {
    for (int i=0; i<numero; i++ )
    {
      for (int j=0; j<i; j++)
      {
        cout<< "T";
      }
      cout<<endl;
    }
    for ( int i=numero; i>0; --i )
    {
      for ( int j=0; j<i; ++j)
      {
        cout<< "T";
      }
      cout<<endl;
    }
    return 0;
  }

int main(){
  int diamond, numero;
  cout<< "enter the number of rows"<< endl;
  cin>> numero;

  triangle (numero);

  return 0;

}
