#include <iostream>

using namespace std;

int main(){
	float P,Z;
	cout<< "Vvedit zarplatu - ";
	cin>> Z;
	1201<= Z && Z<1701 ? P=(Z-1020)*0.3+189.55 : P=0;
	Z >= 1701 ? P=(Z-1700)*0.4+393.55 : P=P;
	
	cout<< P;
}
