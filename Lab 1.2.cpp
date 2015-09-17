#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main (int argc, char *argv[])
 {
	double a,b,x,y;
	cout << "vvedit a=";
	cin >> a;
	cout << "vvedit b=";
	cin >> b;
	cout << "vvedit x=";
	cin >> x;
 	y=asin(x*b)*log10(x*(a*a))+sqrt(a*x)+exp(0.9)*pow(x,1.0/3.0)*tan(x+b*a);
	cout << "y=" << y << endl;
	return 0;
}
