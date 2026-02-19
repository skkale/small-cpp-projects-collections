#include <iostream>

using namespace std;

void in_array(int A[],int n){
	for(int i=0;i<n;i++){
		cout << "Type " << i << " element of array\n";
		cin >> A[i];
	}
}
void out_array(int A[],int n){
	cout << "Massiv:\n";
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout << " \n";
}

int max_array(int A[],int n){
	cout << "Max element\n";
	int max = A[0];
	for(int i=1;i<n;i++){
		if(A[i]>max){
			max=A[i];
		}
	}
	return max;
}

int main(){
	int B[5],C[4];
	int M[5]={9,2,-1,5,6};
	
	in_array(B,5);
	in_array(C,4);
	out_array(B,5);
	out_array(C,4);
	
	cout << max_array(B,5) << endl;
	
	out_array(M,5);
	cout << max_array(M,5);
	
	
}
