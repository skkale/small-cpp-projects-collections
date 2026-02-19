#include <graphics.h> // Move + control
#include <conio.h>
#include <cmath>

void draw(int x,int y,int color){
	const int r=10;
	setcolor(color);
	circle(x,y,r);
	setfillstyle(1,color);
	floodfill(x,y,color);
}


int main(){
	initwindow(800,800);
	const int 
			rSun=60,
			L=150,
			x0=200,
			y0=200;
	int x,y,code;
	float a,a1,ha;
	circle(x0,y0,rSun);
	setfillstyle(1,YELLOW);
	floodfill(x0,y0,15);
	a=0;
	a1=0;
	ha=M_PI/180;
	while(1){
		x=x0+L*cos(a);
		y=y0-L*sin(a);
		draw(x,y,GREEN);
		delay(20);
		draw(x,y,0);

		x=x0+L*cos(a1);
		y=y0-L*sin(a1);
		draw(x,y,GREEN);
		delay(20);
		draw(x,y,0);

		if(kbhit()){
			if(getch()==27) break;
		}
		a=a+ha; a1=a1+a+ha;
	}
	getch();
	closegraph();
}
