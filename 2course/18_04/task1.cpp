#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char lviv[]="Lvivs`ka politehnika", un[30]="NU ", r1[30]="";
		char *p; int n;
		cout << "lviv: " << lviv << endl;
		cout << "un:" << un << endl;
		cout << "r1:" << r1 << endl;
		cout << endl;
	//Functions:
	n=strlen(lviv);
	cout << n << endl;
	
//	strcat(un,lviv);
//	cout << un << endl;
	
	strncat(un,lviv,10);
	cout << un << endl;
	
	
}
