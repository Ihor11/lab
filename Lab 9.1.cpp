#include <cstdlib>
#include <iostream>
#include <math.h>
#define p(k) (log10(a)+log(a*k))/(a*k)
using namespace std;

int main(int argc, char *argv[])
{
    double a=2.64,x=5.46,y=8.34,z=6.55,F; 
     F=pow(x,2)+sqrt(p(x))+ y*pow(p(y)+p(z),1.0/3.0);
      cout<<"F="<<F<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
