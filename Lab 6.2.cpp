#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main() {
	int a[20], c=0, min;
	
	for (int i=0;i<20;i++){
		cout<<" vvid a "<<i<<": ";
        cin>> a[i];	
	}
	for (int i=1;i<20;i+2){
		if(a[i]>0){
			c++;
		}
	}
	if(c>=5){
		min=a[0];
		for(int i=0;i<20;i++){
			if(min>a[i]){
				min=a[i];
			}			
		}	
		cout<<"min element = "<<min<<endl;	
	}
	else{
	cout<<"Fail"<<endl;
	}	
  	return 0;	
}
