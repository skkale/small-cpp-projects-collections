#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int B[10];
	srand(time(0));
	for(int i = 0; i < 10;i++){
		B[i] = rand()%5;
		cout << B[i] << " ";	
}
	cout << "\nneparnye \n";
	for (int i = 1; i < 10; i += 2){
	if(B[i]%2!=0){
		cout << B[i] << " ";
	}
	}
	return 0;
}
