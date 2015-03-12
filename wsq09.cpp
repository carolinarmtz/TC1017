# TC1017
#include <iostream>
#include <string>
using namespace std;
int main()
{
  long long fact=1;
  int num=0;
  char resp;
  do{
      fact = 1;
      cout<<"Give me a number"<<endl;
      cin>>num;
      for(int i=1; i<=num; i++)
        {
          fact=fact*i;
        }
      cout<<"The factorial of "<<num<<" is "<<fact<< endl;
      cout<<"Do you want to get another factorial number?"<<endl;
      cout<< "Write 'r' to repeat the process or 'c' to close it"<<endl;
      cin>> resp;
      
  }while (resp == 'r');
return 0;
}
