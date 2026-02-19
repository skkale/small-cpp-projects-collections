#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	
	float wife=28,man1=27,man2=31,man3=29;	
	
	if(wife<man1 && man3>man1<man2){
		cout<< "chose man1";
	}

	if(wife<man2 && man1>man2<man3){
		cout<< "chose man2";
	}else if(wife<man3 && man1>man3<man2){
		cout<< "chose man3";
	}



}

