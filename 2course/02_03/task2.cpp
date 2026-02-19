// Обчислення факторіалу рекурсія
// n!=n*(n-1)!

#include <iostream>

using namespace std;

int rec_factorial(int n);

int main(){
	int n;
	cout << "VVedit n ";
	cin >> n;
	cout << "Factorial=" << rec_factorial(n); 
	
}


int rec_factorial(int n){
	
	if(n==0||n==1) return 1;
	else 
		return( n*rec_factorial(n-1) );
}
