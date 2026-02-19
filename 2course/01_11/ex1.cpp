#include <iostream>
#include <math.h>

using namespace std;

int main()
{

double x=1;
cout.precision(4);
cout.fill('_');
cout<<"X \t \t sqrt(x) \t \t X^2 \n";
for (x=1.0; x<6.5; x++) {
cout.width(8);
cout<<x<<"\t";
cout.width(8);
cout<<sqrt(x)<<"\t";
cout.width(8);
cout<<x*x<<"\n";
}


	
	
}
