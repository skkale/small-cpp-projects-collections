#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float array[15]={-34.22, -36.325, -18.532, -5.42, 0, -23.401 ,-15, 23, 0, 0, -0.089, -13.94, 0, 0, -13.914 };
	float S;
	int K1=0, K0=0;
	for(int i = 0; i<15;i++){
		if(array[i]==0){
			K0++;
		}else if(array[i]!=0){
			K1++;
			S+=array[i];
		}
	}
	cout << "Avarage arifmetik = " << S/K1 << endl;
	cout << "Count numbers != 0 - " << K1 << endl;
 	cout << "Count numbers = 0 - " << K0 << endl;

}
