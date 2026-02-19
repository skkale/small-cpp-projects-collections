#include <iostream>
#include <string.h>

using namespace std;

int main(){
	const int n=8;
	char doshka[n][n];
	int i,j,v,g;
	cout << "Vvedit koordinaty figury: \n";
	cin >>v>>g;
	int k=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
//			if(i==g-1 || j==v-1) doshka[i][j]='*';
//			else doshka[i][j]=' ';
			
			while(g+k<=n||v+k<=n||g+k>=1||v-k>=1){
				k++;
				i=g+k-1; j=v+k-1; doshka[i][j]='*';
				i=g-k-1; j=v-k-1; doshka[i][j]='*';
				i=g+k-1; j=v-k-1; doshka[i][j]='*';
				i=g-k-1; j=v+k-1; doshka[i][j]='*';
			}
		}
	}
	doshka[g-1][v-1]='O';
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << doshka[i][j]<<" ";
		}
		cout << endl;
	}
	
}
