#include <graphics.h> // Move + control
#include <conio.h>

void draw(int x,int y, int color){
	setfillstyle(1,color);
	bar(x,y,x+20,y+20);
	
}


int main(){
	initwindow(800,800);
	int x=200,y=400;
	setfillstyle(1,BLUE);
	bar(200,200,600,600);
	while(1){
		draw(x,y,YELLOW);
		delay(1);
		draw(x,y,BLUE);
		
		if(kbhit()){
		int code = getch();
		if(code==27) break;
		switch(code){
			case 75:x-=10;break;
			case 77:x+=10;break;
			case 72:y-=10;break;
			case 80:y+=10;
		}
	}
}
	

	getch();
	closegraph();
}
