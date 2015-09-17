#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main () {
	int b;
	int mas [20];
	for (int i=0;i<20;i++){
		cout<<"Enter "<<i<<" massive element:";
		cin>>mas[i]	;
	}
	cout<<"Enter b:";
	cin>>b;
	int z = 1;
	for (int i=0;i<20;i++){
		z*=mas[i];
	}
	cout<<"z="<<z<<endl;
	return 0;
}
