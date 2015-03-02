# TC1017
#include <iostream>
using namespace std;

int main()
{
    int F, C;
    cout<< "Dame los grados en Farenheit a convertir?"<<endl;
    cin>> F;
    C=5*(F-32)/9;
    cout<< "La temperatura en Celsius es "<< C <<endl;
    if(C<0){
      cout<<"El agua es solida a esta temperatura"<<endl;
    }
    else
    {
      if(0<C<100)
      {
        cout<<"El agua es líquida a esta temperatura"<<endl;
      }
      else
      {
        if(C==0)
        {
          cout<<"El agua esta congelada a esta temperatura"<<endl;
        }
        else
        {
          if(C==100)
          {
            cout<<"El agua esta hirviendo a esta temperatura"<<endl;
          }
          else
          {
            if (100<C)
            {
              cout<<"El agua esta a vapor en esta temperatura"<<endl;
            }

          }
        }
      }
    }
    return 0;
}
