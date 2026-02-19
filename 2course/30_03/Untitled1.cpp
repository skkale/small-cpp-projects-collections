#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float y[7],y_max;
	int k;
	//Zapovnennia elementiv y
	cout<<"Massiv Y:\n";
	for(k=0;k<7;k++)
	{
		*(y+k)=2.5*sin(k)-0.5;
		cout<<*(y+k)<<" ";
	}
	cout<<endl;
	y_max=y[0];
	for(k=1;k<7;k++)
	{
		if(y[k]>y_max) y_max=y[k];
	}
	y[2]=y_max;
	cout<<"New array:\n";
	for(k=0;k<7;k++) cout<<*(y+k)<<" ";
	return 0;
}
