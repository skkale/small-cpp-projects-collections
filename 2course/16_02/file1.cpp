#include <iostream>

using namespace std;

int main()
{
	int d=1, k=0;
	for(int i = 4;i<=11;i++){
		
		if(i%2==0){
			k++;
			d*=i;
		}
	}
	
	cout << "k= " << k << endl;
	cout << "d= " << d;
	
}
