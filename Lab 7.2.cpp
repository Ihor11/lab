#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define M 3
#define N 4
#define B 7

using namespace std;
int main() {
	int A [M] [N];
	int Y [N];
	for(int i = 0; i<M; i++){
		for(int j = 0; j<N; j++){
			cout<<"Enter "<<i<<";"<<j<<" matrix element:";
			cin>>A[i][j];
		}
		cout<<endl;	
	}
	for(int i = 0; i<M; i++){
		int Z = A[0][0];		
		for(int j = 0; j<N-1; j++){
			if(Z < A[i][j+1]){		
				Z=A[i][j+1];
			}			
		}
		Y[i] = Z;		
	}
	cout<<"String Y: ";
	for(int i = 0; i<M; i++){
		cout<<Y[i]<<" ";		
	}	
	cout<<endl;
	return 0;
}
