# TC1017
#include <iostream>
using namespace std;

void triangles (int number) {


      for (int i = 0; i < number; i++) {
          for (int j = 0; j < i + 1; j++) {
            cout << "T";
            }
            cout << endl;

      }
      for (int a = number; a >= 0; a--) { //start with the user's number for the first row & count down
      for (int b = 0; b < a -1; b++) {//change from a+1 to a-1 so the first row will print one less than user's number
        cout << "T";
      }
      cout << endl;
    }
}
int main () {
  int number;
  do {
  cout << "Please enter a number between 2 and 10: ";
  cin >> number;
  } while (number < 2 || number > 10);

  int trin= triangles(number);

  cout<<trin<<endl;
  return 0;
}
