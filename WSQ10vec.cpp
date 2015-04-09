# TC1017
//CarolinaRomo
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
  int size;
  double val,sum,ave,var,sdev;
  cout << "How many numbers do you want to calculate: ";
  cin >> size;
  vector<double> Vector;
  Vector.resize(size);
  cout << "Give me " << size << " numbers" << endl;
  for (int i=0; i<size; i++){
    cin >> val;
    Vector[i] = val;
  }
  for (int i=0; i<size; i++){
    sum = sum + Vector[i];
  }
  ave = sum/size;
  for (int i=0; i<size; i++){
    var = var + pow((Vector[i]-ave),2);
  }
  sdev = sqrt(var/size);
  cout << "Sum = " << sum << endl;
  cout << "Average = " << ave << endl;
  cout << "Standard Deviation = " << sdev << endl;
  return 0;
}
