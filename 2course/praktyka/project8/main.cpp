#include <graphics.h>
#include <conio.h>
void Bicycle(int i, int color){
	setcolor(WHITE);
	setlinestyle(1,1,4);
	line(0,460,800,460);
	setcolor(color);
	circle(60+i,400,60);
	circle(280+i,400,60);
	moveto(60+i,400);
	lineto(130+i,300);
	lineto(240+i,300);
	lineto(170+i,400);
	lineto(60+i,400);
	moveto(69+i,400);
	lineto(170+i,410);
	lineto(120+i,290);
	line(90+i,280,130+i,280);
	moveto(280+i,400);
	lineto(230+i,250);
	lineto(190+i,250);
	delay(5);
	setcolor(0);
	circle(60+i,400,60);
	circle(280+i,400,60);
	moveto(60+i,400);
	lineto(130+i,300);
	lineto(240+i,300);
	lineto(170+i,400);
	lineto(60+i,400);
	moveto(69+i,400);
	lineto(170+i,410);
	lineto(120+i,290);
	line(90+i,280,130+i,280);
	moveto(280+i,400);
	lineto(230+i,250);
	lineto(190+i,250);
	delay(20);
}

int main(){
	initwindow(800,800);
	// Bicycle
	for(int i = -300;i<800;i++){
	Bicycle(i,YELLOW);
	}

	
	getch();
}
