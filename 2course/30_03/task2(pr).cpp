#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double y[11],minus=0,plus=0,p_year=0;
	int i,k=1993;
	// Filling array
	cout << "Year\tCount\n";
	for(i=0;i<11;i++){
		y[i]=100*(2.5*sin(i+k));
		cout <<k+i<< "\t"<<y[i]<<endl;
	}
	// Finding
	bool flag=false;
	for(i=0;i<11;i++){
		if(y[i]<0){
			minus+=y[i];
			flag=true;
		}else if(y[i]>0 && y[i]>plus){
			plus+=y[i];
			p_year=i;
		}
	}
	if(flag==true) cout << "Minus define = " << minus << endl;
	else cout << "Nothing of minus defines\n";
	
	cout << "Max plus =" << plus << ". Year=" << k + p_year ;
}
