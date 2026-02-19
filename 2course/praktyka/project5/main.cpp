#include <graphics.h> //Animation
#include <conio.h>

void draw(int x, int y, int color);
void draw2(int x, int y, int color);

int main(){
	initwindow(800,800);
	
	int x=200,x2=579,y2=540,y=240;
	setfillstyle(1,BLUE);
	bar(200,200,599,599);
	while (x+20<599){
	if(kbhit()){
		if(getch()==27) break;
	}
	draw(x,y,YELLOW);
	delay(1);
	draw(x,y,BLUE);
	x++;
	
	draw(x2,y2,YELLOW);
	delay(1);
	draw(x2,y2,BLUE);
	x2--;

}
x--;y--;
while (x>201){
	if(kbhit()){
		if(getch()==27) break;
	}
	draw(x2,y2,YELLOW);
	delay(1);
	draw(x2,y2,BLUE);
	x--;
	
	draw(x,y,YELLOW);
	delay(1);
	draw(x,y,BLUE);
	x2++;

}


	getch();
}

void draw(int x,int y, int color){
	setfillstyle(1,color);
	bar(x,y,x+20,y+20);
	
}

void draw2(int x, int y, int color){
	setfillstyle(1,color);
	bar(x,y,x+20,y+20);
}
