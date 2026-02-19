#include <iostream>
#include <string.h>
using namespace std;
int main(){
	
	char r1[]="Nezabarom kinec semestru";
	cout << r1 << endl;
	// Lenght of string
	
	cout <<"Dovgyna ryadka r1="<<strlen(r1)<< endl;
//	char *p;
//	p=strchr(r1,' ');
//	cout << p << endl;
//	p=strtok(p," ");

	int d,p1=0,k1,k2;
	d=strlen(r1);
	for(int i =0;i<d;i++){
		if(r1[i]==' '){
			p1++;
			if(p1==1) k1=i;
			if(p1==2) k2=i;
		}
	}
	cout << "Druge slovo: \n";
	for(int i = k1+1;i<k2;i++){
		cout << r1[i];
	}
	
}
