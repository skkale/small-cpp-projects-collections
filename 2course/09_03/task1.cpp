#include <iostream>

using namespace std;
template <class mytype>
mytype max(mytype n1,mytype n2);

int main(){
	
	int a=2,b=-9;
//	cout << "Max="<< max(a,b)<< "\n";
//	cout << "Max="<< max("a","b")<< "\n";
	cout << "Max="<< max(2,-9)<< "\n";
	
}

mytype max(mytype n1,mytype n2){
	if(n1>n2){
		return n1;
	}else{
 return n2;
}
}
