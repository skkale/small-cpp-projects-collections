#include <iostream>
using namespace std;
main(){
	float a,b,p;
	cout << "Enter the price of first product= $";
	cin >> a;
	cout << "Enter the price of second product= $";
	cin >> b;
	cout << "Enter the % =";
	cin >> p;
	a=(p/100*a)+a;
	b=(p/100*b)+b;
	cout << "New price for first procuct is " << a << "USD, new for second one is " << b <<"USD";
	
	

}
