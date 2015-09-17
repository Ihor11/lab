#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{double a,D;
int i,n;
cout<<"a="; cin>>a;
D=1;
for(i=1;i<=14;i++)
{D*=(i+a*(i*i));}
cout<<"dobutok="<<D<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
