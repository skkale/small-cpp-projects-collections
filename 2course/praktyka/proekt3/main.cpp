#include <graphics.h>
#include <cmath>
#include <conio.h>
int main(){
	initwindow(800,800);
	const int a=400,b=400,k=100;
	const float x_min=-4,x_max=4;
	float x,y,h=0.01;
	int xe,ye,w,first=1;
	w=(x_max-x_min)*k;
	line(a-400,b,800,b); // x
	settextstyle(8,0,4);
	outtextxy(750,501,"x");
	line(a,0,a,2*b); // y
	outtextxy(a+2,2,"y");
	for(x=x_min;x<=x_max;x+=h){
	//	y=x*x;
	//	xe=a+k*x;
	
		ye=3*sqrt(1-x*x/16);
		xe=a+k*x;
		ye=b-k*x;
		if(first){
			moveto(xe,ye);
			first=0;
		}else{
			lineto(xe,ye);
		}
	}
	outtextxy(100,600,"y=3*sin(x)");
	getch();
}
