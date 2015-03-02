# TC1017
#include <iostream>
using namespace std;

int main()
{// int main
  long prim,ult,sum=0;

  cout<<"Enter the first value";
  cin>> prim;
  cout<< "Enter the last value";
  cin>> ult;

  if(prim>ult)
  {//open if
    int te;
    te=prim;
    prim=ult;
    ult=te;
  }// close if

  for(int Counter=prim; Counter <= ult; Counter++)
  {
    sum+=Counter;
  }

  cout<< "Sum of numbers from "<<prim<<" to "<<ultg++<< " = "<<sum<<endl;
  return 0;

}//int main
