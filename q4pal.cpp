// CarolinaRomo A01229797 
// Palindrome Correction
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void palindrome (){
	string x;
	string y;
	cout<<" enter just one word:";
	cin >> x;
	y= string(x.rbegin(),x.rend());
	cout << "reverse word is:"<< y << endl;
	if(x == y) {
	cout <<" Is a palindrome" << endl;

	}
	else {
	cout <<" Is not a palindrome" << endl;
	}
}
int main (){
	palindrome();
	return 0;
}

