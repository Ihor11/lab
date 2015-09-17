#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
 {
	double k, d, w, s;
	cout << "vvedit k=";
	cin >> k;
	cout << "vvedit d=";
	cin >> d;
	cout << "vvedit w=";
	cin >> w;
	s=sqrt(k*w+pow(d,2))+cos(k/d);
	cout << "s=" << s << endl;
	return 0;
}
