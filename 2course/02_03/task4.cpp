#include <iostream>

using namespace std;

int stepin(int n);

int main(){
	int n;
	cout << "VVedit n ";
	cin >> n;
	cout << "Stepin chusla 2=" << stepin(n); 
	
}

int stepin(int n){
	if(n==0) return 1;
	else 
		return( 2*stepin(n-1));
}
