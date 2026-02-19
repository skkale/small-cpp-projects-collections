#include <iostream>

using namespace std;

main(){
	int i = 10;
	i++;
	cout << i<< endl;
	i--;
	cout << i<< endl;
	--i;
	cout << i<< endl;
	++i;
	cout << i<< endl;
	
	int a;
	cout << "Result" << endl;
	a = 3 * i++;
	cout << a << endl;
	cout << "i=" <<i << endl;
	i = 10;
	a = 3 * ++i;
	cout << a << endl;
	cout << "i=" << i << endl;
	
}
