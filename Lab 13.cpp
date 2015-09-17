#include <iostream>
#include "matr.h"

using namespace std;

int main(){
	float **A;
	int m = 3;
	int n = 4;
    A = new float *[m];
    for (int i = 0; i < m; i++)
        A[i] = new float [n];

	man_init(A, m, n);
	
	return 0;	
}


