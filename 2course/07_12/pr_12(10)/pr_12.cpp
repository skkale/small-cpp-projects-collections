#include <iostream>

using namespace std;

int main(){
	int a;
	cout << "Vvedit kod rai centru (1568-kl,1780-if,3412-lv) - ";
	cin >> a;
	
	switch(a){
		case 1568: cout << "Kolomiya"; break;
		case 1780: cout << "Ivano-Frankivsk"; break;
		case 3412: cout << "Lviv"; break;
		default:
			cout << "Ne virniy nomer"; break;
	}
	
}
