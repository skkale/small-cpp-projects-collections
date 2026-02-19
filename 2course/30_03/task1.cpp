#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

float array(){
	int A[8][15], B[8];
	int i,j,count=0,sum=0;
	srand(time(0));
	// Filling and output array
	for(i=0;i<8;i++){
		sum=0;
		for(j=0;j<15;j++){
			A[i][j]=rand()%10;
			cout << A[i][j]<<" ";
			if(A[i][j]==5){
				count++;
			}
			sum+=A[i][j];
			
		}
		cout << endl;
		B[i]=sum;
	}
	cout << "Count of 5 = " <<count << endl;
	cout << "Sum = " << sum;
	cout << "Sum of rows\n";
	for(i=0;i<8;i++){
		cout << "N="<<i<<" Suma= "<<B[i]<<endl;
	} 

	return A[i][j];
}

float find(){
	
}

int main(){
	array();

}
