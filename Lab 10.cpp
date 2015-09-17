#include <cstdlib>
#include <iostream>
#include <cmath> 

#define N 3
#define M 4

using namespace std;

	int A [N] [M] = {{3,5,7,9}, {2,4,6,8}, {1,2,7,1}};

	void Xcu(int i1, float X1, float a1, float c1){
		for (int j = 0; j < M; j++){
			X1 *= pow (c1, A[i1][j]) + a1;			
		}		
	}
	
	float Fe (float a1, float c1) {
		
		float Xi = 1;
		float Xsum = 0;
		
					
		for (int i = 0; i < N; i++){
			Xcu(i, Xi, a1, c1);
			Xsum += Xi;
		}
		
		float s = pow(a1, Xsum) + 1;	
		
		return s;
		
			
	}

int main() {
	

	float a = 11;
	float c = 7;
	float F = 0;

	F = Fe(a, c);
	cout<<"F = "<<F<<endl;
	system("pause");
}
