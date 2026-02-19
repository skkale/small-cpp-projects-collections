#include <iostream>

using namespace std;

int main(){
	const int n=10;
//	int B[n];
//		for(int i =0;i<n;i++){
//		B[i]=i+1;
//		
//	}
//	cout << "Elementy z parnymy nomeramy:\n";
//	for(int i =0;i<n;i+=2){
//		//B[i]=0;
//		cout << B[i]<<" ";
//		
//	}
	
//	int B[n];
//		
//	for(int i =0;i<n;i++){
//		B[i]=i+1;
//		cout << B[i] << " ";
//		
//	}
//		cout << "\nElementy z parnymy nomeramy:\n";
//	for(int i =0;i<n;i++){
//		
//		if(B[i]%2==0)
//		cout << B[i]<<" ";
//		
//	}

	int *B=new int[n];
		
	for(int i =0;i<n;i++){
		*(B+i)=i+1;
		cout << *(B+i) << " ";
		
	}
		cout << "\nElementy z parnymy nomeramy:\n";
	for(int i =0;i<n;i++){
		
		if(*(B+i)%2==0)
		cout << *(B+i) << " ";
		
	}
	
	
	
}

