#include <iostream>

using namespace std;

int main(){
	float S=0.0;
	for(int i = 1; i < 999; i++){
		S = S + ( i/(i*(i+1.0)) );
	}
	cout << S;
}
