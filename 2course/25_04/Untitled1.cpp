#include <iostream>
using namespace std;

struct rika{
	char nazva[12];
	int dov;
	long int pl;
	rika *dali;
};
rika *element,*pershij,*poperedniy,*novij;

void CreatingList();
void Output();
void newElement();

int main(){
	
}

void CreatingList(){
	novij = new (rika);
	cout << "type name,longest,S of new river\n";
	cin << novij->nazva>>novij->dov>>novij;
	
}
