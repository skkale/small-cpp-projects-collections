#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x=1,a=2,b=3,c=4,d=5,e=2.71,om,fi,f;
	
	fi=tan(x+a)-(log10(fabs(b+7))/log10(13));
	om=c*pow(pow(x,2)+d*pow(e,1.3),1/5.);
	
	cout<< fi << " " << om << endl;
	
//	if(fabs(x) < 10){
//		f=(fabs(cos((pow(fi,2))) -0.51)*sin(3*fi-4)-4,44);
//		cout<< f;
//		
//	}else if(fabs(x) >=10){
//		f=(cos(2.1*om)*sin(fabs(om))/0.15-5.8);
//		cout<< f;
//	}

	if(fabs(x)<10){
		f=(fabs(cos((pow(fi,2))) -0.51)*sin(3*fi-4)-4,44);
		cout<< f;
	}

	if(fabs(x)>=10){
		f=(cos(2.1*om)*sin(fabs(om))/0.15-5.8);
		cout<< f;
	}

}
