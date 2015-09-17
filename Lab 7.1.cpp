#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define M 3
#define N 4
#define B 7

using namespace std;
int main() {
	int A [M] [N];
		int X [N];	
	for(int i = 0; i<M; i++){
		for(int j = 0; j<N; j++){
			cout<<"Enter "<<i<<";"<<j<<" matrix element:";
			cin>>A[i][j];
		}
		cout<<endl;	
	}
	for(int i = 0; i<M; i++){
		int Z = 1;
		for(int j = 0; j<N; j++){
			if(A[i][j] < B){		
				Z*=A[i][j];
			}			
		}
		X[i] = Z;		
	}
	cout<<"String X: ";
	for(int i = 0; i<M; i++){
		cout<<X[i]<<" ";		
	}	
	cout<<endl;
		return 0;
}
	
