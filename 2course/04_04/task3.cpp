#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float a[4][4];
	int k,n;
	//Creating array
	cout << "Array A: \n";
	for(k=0;k<4;k++){
		for(n=0;n<4;n++){
			a[k][n]=(n+1)*2.5*cos(k+1)+sin(k+1)*fabs(3.1*cos(n+1));
			cout <<a[k][n]<< " ";
		}
		cout << endl;
	}
	//Finfing data;
	float sum_kv=0;
	for(k=0;k<4;k++){
		for(n=0;n<4;n++){
			if(a[k][n]>1){
			sum_kv+=a[k][n]*a[k][n];	
			}
		}
	}
	cout << sum_kv;
}
