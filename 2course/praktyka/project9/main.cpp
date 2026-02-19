#include <graphics.h>
#include <conio.h>

int main(){
	initwindow(1024,1024);
	//House
	int x=90,y=180,a=420,b=260;
	
	rectangle(x,y,x+a,y+a);
	
	int x1=x+15;
	int y1=y+20;
	for(int i=0;i<6;i++){
		x1=x+10;
		for(int j=0;j<6;j++){
		delay(40);
		rectangle(x1,y1,x1+50,y1+30);
		x1=x1+70;
		}
		y1=y1+40;
	}
	moveto(x-20,y);
//	lineto(x+a+20,y);
//	lineto(x+a,y-70);
//	lineto(x,y-70);
//	lineto(x-20,y);

	int points[]={x-20,y,
				x+a+20,y,
				x+a,y-70,
				x,y-70,
				x-20,y};
	drawpoly(5,points);
	x1=x;y1=y;
	for(int i = 0;i<8;i++){
		if(i<4){
		line(x1+30,y1,x1+50,y1-70);
		x1=x1+50;
		}else{
			line(x1+30,y1,x1+10,y1-70);
			x1=x1+50;
		}
		
	}
	
	getch();
}
