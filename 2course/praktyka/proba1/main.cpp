#include <graphics.h>
#include <conio.h>

int main(){
	initwindow(400,400);
//	line(200,0,200,400);
//	line(0,200,400,200);
//	for(int i=0; i<10;i++){
//		line(0,200+10*i,400,200+10*i);
//	}

//	circle(200,200,100);
//	for(int i=0;i<10;i++){
//		circle(200,200,100-10*i);
//	}

//	rectangle(100,100,200,200);
//	for(int i = 0; i<10;i++){
//		rectangle(100+5*i,100+5*i,200-5*i,200-5*i);
//	}

	//arc(200,200,-80,0,125);
	
	//ellipse(200,200,0,360,5,100);
	//ellipse(200,200,0,360,23,110);
	
//	setcolor(YELLOW);
//	ellipse(200,200,0,360,23,110);

//	for(int i=0; i<10;i++){
//		setcolor(i);
//		line(0,200+10*i,400,200+10*i);
//	}


	
//	circle(200,200,100); // ne robe((
//	setfillstyle(HATCH_FILL,13);
//	floodfill(200,200,BLUE);
//	for(int i=0;i<10;i++){
//		setcolor(i);
//		circle(200,200,100-10*i);
//	}
//	


//	setlinestyle(DOTTED_LINE,2,5);
//	rectangle(100,100,250,250);
//	//bar(100,100,250,250);
//	setfillstyle(HATCH_FILL,13);

	//bar3d(150,50,300,350,25,5);
	
//	putpixel(150,150,14);
//	for(int i = 0; i<16; i++) putpixel(300+i,50,i);


	setcolor(YELLOW);
	settextstyle(5,0,24);
	outtextxy(200,200,"Kiyv");	
	moveto(150,150);
	settextstyle(8,1,20);
	outtext("Kolomia");

	int points[]={175,40,
				220,20,
				235,65,
				235,125,
				157,122};
		drawpoly(6,points);
//	moveto(175,40);
//	lineto(220,20);
//	lineto(235,65);
//	lineto(235,125);
//	lineto(157,122);
	
moveto(250,500);
linerel(100,-100);
	
	getch();
	closegraph();
}
