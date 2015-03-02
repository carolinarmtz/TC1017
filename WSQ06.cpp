# TC1017
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){// int main
  int cont = 0, num,d;
  time_t rnum;
  srand (time(NULL));
  rnum= rand ()%100+1;
  cout<< "Can you guess the number i picked...."<<endl;

  do{// open cycle
    cout<<"Give me the number you think it is"<<endl;
    cin>> num;
    cont=cont+1;
    if(rnum>num)
      {
      cout<< "The number you gave is too low"<<endl;
      }
    else
      {
        if(rnum<num)
        {
          cout<< "The number you gave is too high"<<endl;
        }
      }
  }while (rnum!=num); // closing cycle 

    cout<< "You guessed it. It took you "<<cont<<" times."<<endl;
    return 0;
}
