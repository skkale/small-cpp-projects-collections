#include<iostream>
#include<conio.h>
#include<process.h>
#include<math.h>
#define h 0.1
#define b 2
using namespace std;
float Min(float y);
float Max(float y);

int main(int argc, char* argv[])
	if(argc < 2){//
	
	cout<<"недостатньо фргументів\n";
	cout<<"уведіть параметр Min або Max";
	exit (1)
}
   
	 float x,y;
    cout<< "X \t Y \n";
    
	for (x=1;x<=b;x+=h){
		y=x*x*sin(x);
		cout<<x<<"\t"<<y<<"\n";
	}
	if(*argv[1]=='m'&&*(argv[1]+1)=='a'
	&&*(argv[1]+2)=='x')
	cout<<"Min="<<Min(y);
	else
	
    if(*argv[1]=='m'&&*(argv[1]+1)=='a'
	&&*(argv[1]+2)=='x'){
	cout<<"max="<<Max(y);else cout<<
	"параметр не визначено";
	getch(); return 0;
}
    float Min(float y){
    	float x=1,m;
    	m=x*x*sin(x);
    	for(;x<=2;x+=h){
		y=x*x*sin(x);if(m<y)m=y;
		}
		return m;}
		 float Max(floaty){
		 	float x=1,m;
    	m=x*x*sin(x);
    	for(;x<=2;x+=h){
		y=x*x*sin(x);if(m<y)m=y;
		 }
	}
