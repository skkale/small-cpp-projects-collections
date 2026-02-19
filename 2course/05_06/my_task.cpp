#include <iostream>
#include <string.h>

using namespace std;

struct ZNAK{
	char NAME[100];
	char ZODIAK[40];
	int BDAY[3];
	
};

void input(ZNAK a[], int n){
	cout << "Type Name, Zodiak, Birthday(day,month,year):\n";
	for(int i = 0; i<n; i++){
		cout << i+1 << ". ";
		cin >> a[i].NAME;
		cin >> a[i].ZODIAK;
		cin >> a[i].BDAY[0] >> a[i].BDAY[1] >> a[i].BDAY[2];
	}
}

void sort(ZNAK a[],int n){	
}

void output(ZNAK a[], int n){
	
	
}

int main(){
	const int n=5;
	ZNAK BOOK[n];
	input(BOOK,n);
}
