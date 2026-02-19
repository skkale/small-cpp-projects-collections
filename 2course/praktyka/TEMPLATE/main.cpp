#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;

void animation(float x, float y){
	float h=0.1;
	int switcher=0; 
	while(1){
		if(kbhit()) break;
		setcolor(LIGHTGRAY);
		setfillstyle(1,LIGHTGRAY);
		fillellipse(x,y,18,10);
		fillellipse(x+18,y-10,18,10);
		delay(1);
		setcolor(WHITE);
		setfillstyle(1,WHITE);
		fillellipse(x,y,18,10);
		fillellipse(x+18,y-10,18,10);
		y-=h;
		if(x<370) switcher=1;
		if(x>380) switcher=0;	
		switch(switcher){
				case 0: x-=h*2; break;
				case 1: x+=h*2; break;
			}
		if(y<0) y=200;
	}
}

int main(){
    initwindow(800, 800); 
    setcolor(DARKGRAY);
    setfillstyle(1,WHITE);
    floodfill(0,0,WHITE);
    setfillstyle(1,DARKGRAY);
	bar(50,120,140,400);
	bar(65,100,125,120);
	setfillstyle(1,LIGHTMAGENTA);
	for(int i = 1; i<11; i++){
		bar (60,130+i*25,130,120+i*25);
	}
	setfillstyle(1,DARKGRAY);
	bar(25,300,100,400);
	setfillstyle(1,LIGHTBLUE);
	for(int i = 0; i<3; i++){
		for(int j = 0; j<2; j++){
			bar (40+j*30,310+i*25,55+j*30,325+i*25);
		}
	}
	setfillstyle(1,DARKGRAY);
	bar(180,80,270,400);
	moveto(180,80);
	lineto(225,35);
	lineto(270,80);
    floodfill(225,70,DARKGRAY);
    bar(220,41,230,25);
    setfillstyle(1,LIGHTCYAN);
    for(int i = 0; i<4;i++){
	bar(190+i*20,90,200+i*20,100);
		for(int j = 0;j<4;j++){
			bar(190+i*20,110,200+i*20,390);
		}
	}
	setfillstyle(1,DARKGRAY);
	bar(320,300,415,400);
	moveto(320,300);
	lineto(320,230);
	lineto(415,300);
	floodfill(321,250,DARKGRAY);
	bar(320,220,330,300);
	bar(350,230,360,300);
	bar(370,210,390,300);
	bar (400,230,415,300);
	setfillstyle(1,CYAN);
	bar(330,290,390,310);
	//bar(330,290,350,255);
	for(int i = 0;i<4;a++){
		bar(330,320+i*20,405,330+i*20);
	}
	setfillstyle(1,BLUE);
	bar(0,400,800,600);
	setfillstyle(1,YELLOW);
	bar(0,400,800,440);
	setfillstyle(1,LIGHTGRAY);
	bar(0,400,800,410);
	animation(380,200);
    getch();
    closegraph();
}

