#include <graphics.h>
#include <conio.h>

int main(){
	initwindow(400,400);
	
	circle(200,200,100);
	for(int i=0;i<10;i++){
		circle(200,200,100-10*i);
	}
	
	getch();
}
