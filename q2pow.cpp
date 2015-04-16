// Carolina Romo Mtz A01229797
#include <iostream>
#include <tgmath.h>

using namespace std;

long superpower (){
	long a, b;
	long contador=0, potencia=1;
	cout <<"Dame el numero que deseas utilizar" <<endl;
	cin>> a;
	cout<< "Dame la potencia a la que quieres elevar"<<endl;
	cin>>b;
	do {
		potencia=potencia*a;
		contador=contador+1;
	}
	while (contador < b);
	cout<< "La potencia es "<<potencia<<endl;
	return 0;
}

int main (){
	cout<< superpower();
}
