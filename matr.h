#define matr

#include <iostream>

using namespace std;



void man_init(float **a, int m, int n);

void man_init(float **a, int m, int n) { // manual initialization
   for (int i = 0; i < n; i++){
      for (int j = 0; j < m; j ++){
		  cout<<"Enter the ["<<i<<"]["<<j<<"] element:"<<endl;
		  cin >> a[i][j];
	  }
   }
}

