#include <iostream>
#include <string.h>
#define n 3
using namespace std;

struct Auto{
	char marka[15];
	int year,price;
};

void Auto_desh(Auto *p);

int main(){

	Auto a[n];
	for(int i=0;i<3;i++){
		cout << "VVedit marku,rik,ciny\n";
		cin >> a[i].marka >> a[i].year >> a[i].price;
	}
	cout << "Firma proponuye taki mashyny: \n";
	cout << "Nazva \t rik \t cina \n";
	for(int i=0;i<n;i++)
	cout << a[i].marka <<"\t"<< a[i].year <<"\t" << a[i].price <<"\n";


//	cout << "Mashunu deshevshi za 3000\n";
//	cout << "Nazva \t cina \n";
//	for (int i = 0;i<n;i++){
//		if(a[i].price<3000){
//			cout << a[i].marka<<"\t"<<a[i].price << endl;
//		}
//	}
//	
	Auto_desh(a);
}

void Auto_desh(Auto *p){
		cout << "Mashunu deshevshi za 3000\n";
	cout << "Nazva \t cina \n";
	for (int i = 0;i<n;i++){
		if(p[i].price<3000){
			cout << p[i].marka<<"\t"<<p[i].price << endl;
		}
	}
	
}
