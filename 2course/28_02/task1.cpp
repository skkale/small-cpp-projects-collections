#include <iostream>

using namespace std;

int factorial(int number);

int main(){
	int N;
	cout << "Type N ";
	cin >> N;
	cout << N <<"!=" << factorial(N);
	
	
}

int factorial(int number){
	int d=1;	
	for(int i=1; i<=number ; i++){
		d*=i;
	}
	return d;
}
