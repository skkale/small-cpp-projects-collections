#include <graphics.h>
#include <cmath>
#include <conio.h>
int main()
{
	initwindow(1000,1000);
	int first=1;
	const int a=500,b=500,k=100;
//	const float x_min=0,x_max=2*M_PI;
//	const float x_min=-3,x_max=3;
const float x_min=-4,x_max=4;
	float x,y,h=0.01;
	int xe,ye,w;
	w=(x_max-x_min)*k;
	line(a-500,b,a+w,b);//vis x
	line(a,0,a,2*b);//vis y
	settextstyle(10,0,10);
//	outtextxy(600,500,"x");
//	outtextxy(65,10,"y");
	for(x=x_min;x<=x_max;x+=h)
{
//	y=3*sin(x);
	y=sqrt(9-9*x*x/16);
	xe=a+k*x;
	ye=b-k*y;
	if(first) 
	{
		moveto(xe,ye);
		putpixel(xe,ye,12);
		first=0;
	}
	else 
	lineto(xe,ye);
}
for(x=x_min;x<=x_max;x+=h)
{
//	y=3*sin(x);
	y=-sqrt(9-9*x*x/16);
	xe=a+k*x;
	ye=b-k*y;
	if(first) 
	{
		moveto(xe,ye);
		putpixel(xe,ye,12);
		first=0;
	}
	else 
	lineto(xe,ye);
}
outtextxy(700,900,"y=3*sin(x)");
getch();
closegraph();
}
