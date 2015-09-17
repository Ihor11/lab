#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

{	double A, C=1.231, D=1.152, x, y;
	cout<< "x="; cin>> x;
	cout<< "y="; cin>> y;
	if (x<=y) A=x*y-C*y*sqrt(y);
	else A=exp(x)*pow(y,2)+D;
	cout << "A=" << A << endl;	
	return 0;	
}
