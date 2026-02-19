#include <iostream>

using namespace std;

void vvid_mass(int A[],int n){
	cout << "VVedit el massyvu:\n";
	for(int i=0; i<n; i++){
		cin>> A[i];
	}
}

void vyvid_mass(int A[],int n){
	cout << "El massyvu: ";
	for(int i=0; i<n; i++){
		cout << A[i]<<" ";
	}
}

int max_el(int A[],int n){
	int max=A[0];
	for(int i=0; i<n; i++)
	if(A[i]>max){max=A[i]}
	}
}

int main(){
	
}
