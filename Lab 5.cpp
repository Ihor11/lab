#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{double x,xk,dx,y;
cout<<"Pochatkova tochka =";
cin>>x;
cout<<"Kinzeva tochka =";
cin>>xk;
if (x>xk)
cout<<"Dani vvedeno nevirno"<<endl;
cout<<"Krok =";
cin>>dx;
if (dx<=0)
cout<<"Dani vvedeno nevirno"<<endl;
do
{
y=pow(3,x)+x*exp(x)+4*x;
cout<<"X="<<x<<endl;
cout<<"Y="<<y<<endl;
x+=dx;
}
while (x<=xk);
    system("PAUSE");
    return EXIT_SUCCESS;
}
