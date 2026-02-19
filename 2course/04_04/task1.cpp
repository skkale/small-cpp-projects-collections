#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float* y=new float[7];
	float x[7];
	int k,i=0;// i - index of x[]
	//Creating array
	for(k=0;k<7;k++){
		y[k]=2.5*sin(k+1)-0.5;
		cout << y[k] << " ";
	}	
	cout << endl;
	//Finding data
	float y_max=y[0];
	for(k=1;k<7;k++){
		if(y[k]>y_max) y_max=y[k];
	}
	cout << y_max << " - y_max\n";
	for(k=0;k<7;k++){
		if(y[k]>0 && y[k]!=y_max){
			x[i]=y[k];
			cout << x[i]<< " ";
			i++;
		}
	}
	
}
