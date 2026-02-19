#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int Y[15],G[20],i;
	float d=400.,pd=0.20;
		// Creating arrays
	srand(time(0));
	cout << "Y: ";
	for(i=0; i<15; i++){
		Y[i]=rand()%32;
		cout << Y[i] <<" ";
	}	cout << endl;
	cout << "G: ";
		for(i=0; i<20; i++){
		G[i]=rand()%32;
		cout << G[i] <<" ";
	}	cout << endl;
	
float ZY_avg=0, ZG_avg=0;
	
	for(i=0;i<15;i++){
		ZY_avg+=(Y[i]*d)*(1-pd);
	}	cout << "Avg pay Y="<<ZY_avg/15.<<endl;

	for(i=0;i<20;i++){
		ZG_avg+=(G[i]*d)*(1-pd);
	}cout << "Avg pay G="<<ZG_avg/15.<<endl;
	
}
