#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
	string name;
	double hour, tarif, pay;
	cout << "Hello, say me please your name, hours and tariff" << endl ;
	cout << "Name ";
	cin>>name;
	cout << "Hours ";
	cin>>hour;
	cout << "Tariff(how much $ in hour) ";
	cin>>tarif;
	
	pay = tarif * hour;
	cout << name <<", you've worked for "<< hour 
	<< " hours and your pay is " << pay <<"$"<<'\n';
	cout << '\n';
	cout << "prac work 6 ex1" << '\n';
	
	cout.precision(5);
	cout.fill('_');
	cout.width(8);
	cout << pay << '\n';
	
	
	int payint=pay;
	
	cout << '\n';
	cout << "prac work 6 ex2" << '\n';
	cout << "dec= " << payint << '\n';
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::uppercase | ios::showbase);
	cout << "hex= " << payint << '\n';
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout << "oct= " << payint;
	
	
	
}
