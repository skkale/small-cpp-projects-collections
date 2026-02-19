#include <iostream>
#include <string.h>

using namespace std;

struct rika{
	char nazva[15]; // nazva
	int dov; // dovgyna
	long int pl; // ploshca
	rika *dali; // vkazivnyk na next riku
};
rika *element,*pershij,*poperedniy,*novij;

void CreatingList();
void Output();
void newElement();

int main(){
	CreatingList();
	Output();
	//newElement();
	//Output();
}

void CreatingList(){
	novij = new (rika);
	pershij=element;
	do{
	poperedniy=element;	
	cout << "type name,longest,S of new river\n";
	cin >> element->nazva;
	cin >> element->dov;
	cin >> element->pl;
	novij = new (rika);
	element=element->dali;
	
	}while(poperedniy->dov!=0 || poperedniy->pl!=0); 
	poperedniy->dali=NULL;
}

void Output(){
	cout << "list`s created: \n";
	element=pershij;
	while(element!=NULL){
		cout << element->nazva << "\t";
		cout << element->dov << "\t";
		cout << element->pl << "\n";
	}
	
}
