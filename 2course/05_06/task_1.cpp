#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

struct SKLAD{
	char NAME[30];
	char TYPE[5];
	float QUANTITY;
	float COST;
};

void vvid_danyh(SKLAD a[], int n);
void sort_nazva(SKLAD a[], int n);
void vyvid(SKLAD a[], int n);
void vyvid_po_nazvi(SKLAD a[],int n,char nazvaT[]);

int main(){
	const int N=5;
	SKLAD SHOP[N];
	char NT[30];
	vvid_danyh(SHOP,N);
	sort_nazva(SHOP,N);
	vyvid(SHOP,N);
	cout << "VVedit nazvu tovary dlia poshuku:\n";
	cin >> NT;
	vyvid_po_nazvi(SHOP,N,NT);
}

void vvid_danyh(SKLAD a[], int n){
	int i;
	cout << "Vvedit dani pro tovary na skladi:\n";
	cout << "NAME, TYPE, QUANTITY, COST\n";
	for(i=0;i<n;i++){
		cout <<i+1<<". ";
		cin >> a[i].NAME;
		cin >> a[i].TYPE;
		cin >> a[i].QUANTITY;
		cin >> a[i].COST;
	}
	
}

void sort_nazva(SKLAD a[], int n){
	SKLAD tmp;
	for(int i=0;i<n;i++){
		for(int j = 0;j<n-1;j++){
					if(strcmp(a[j].NAME,a[j+1].NAME)>0){
			tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
			}
		}
	}
} 

void vyvid(SKLAD a[], int n){
	cout << "Vsi tovary na skladi:\n";
	cout << "NAME \t|\t TYPE \t| QUANTITY | COST\n";
	int i;
	for(i=0;i<n;i++){
		cout << a[i].NAME<<" \t|\t "<<a[i].TYPE<<" \t| "<<a[i].QUANTITY<<" | "<<a[i].COST<<"\n";
	}
}

void vyvid_po_nazvi(SKLAD a[],int n,char nazvaT[]){
	int i=0;
	while(strcmp(a[i].NAME,nazvaT)!=0 && i<n){
		i++;
	}
	if(i==n) cout << "Takogo elementa nemae\n";
	else{
		cout << a[i].NAME<<" \t|\t "<<a[i].TYPE<<" \t| "<<a[i].QUANTITY<<" | "<<a[i].COST<<"\n";
		cout << "Zagalna suma na skladi - " << a[i].QUANTITY*a[i].COST;
	}
}
