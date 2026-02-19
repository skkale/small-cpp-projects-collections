#include <graphics.h>
#include <conio.h>
#define a 100
void triangle(int x, int y, int c);

int main(){
	initwindow(1024,780);
	int x=330,y=200;
	triangle(x,y,BLUE);
	triangle(x+a/2,y+0.7*a,GREEN);
	triangle(x+a,y,RED);
	
	getch();
	closegraph;
}

void triangle(int x, int y, int c){
	
	moveto(x,y);
	lineto(x+a,y);
	lineto(x+a/2,y+a*0.7);
	lineto(x,y);
	setfillstyle(1,c);
	floodfill(x+20,y+20,15);
	
	
}
