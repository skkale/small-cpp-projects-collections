#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char st[5][11]{{"Praga"},
				   {"Kyiyv"},
				   {"Ryga"},
				   {"Kopnegagen"},
				   {"Rym"}};
	int i,j;
	char temp[11];
	cout << "Spysok do vporydkuvannya: \n";
	for(i=0;i<5;i++){
		cout<<st[i]<<endl;
	}
	// Sorting process
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(strcmp(st[j],st[j+1])>0){
			
			strcpy(temp,st[j]);
			strcpy(st[j],st[j+1]);
			strcpy(st[j+1],temp);
			cout << "a";
			}
			cout << "b";
		}
		cout << "c";
	}
	cout << endl;
	cout << "Spysok pisla vporydkuvannya: \n";
	for(i=0;i<5;i++){
		cout<<st[i]<<endl;
	}
	
}
