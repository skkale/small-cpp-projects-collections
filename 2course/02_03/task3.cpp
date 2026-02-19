// Chysla fibonachi
// F(n)=F(n-1)+F(n-2)
#include <iostream>

using namespace std;

int fibonachi(int n);
//int fibonachi_for(int n);

int main(){
	int n;
	cout << "VVedit n ";
	cin >> n;
	cout << "Fibonachi=" << fibonachi(n); 
	
}

int fibonachi(int n){
	if(n==0||n==1) return 1;
	else 
		return( fibonachi(n-1)+fibonachi(n-2));
}

//int fibonachi_for(int n){
//	for(int i=1;i<=n;i++){
//		i=(n-1)+(n-2);
//		n=i;
//	}
//}
