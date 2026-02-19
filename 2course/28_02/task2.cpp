#include <iostream>

using namespace std;

int dobutok(int number1, int number2);

int main(){
	int a,b;
	cout << "Type a,b ";
	cin >> a >> b;
	cout << "Dobutok vid a do b =" << dobutok(a,b);
	
	
}

int dobutok(int number1, int number2){
	int d=1;	
	for(int i=number1;i<number2+1;i++){
	d*=i;
	}
		
	return d;
	
	
}
