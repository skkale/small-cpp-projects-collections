#include <iostream>
#include <string.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	char name_start[] = "Hello,C++!";
	char name_end[] = "Bye,C++!";
	cout << "Длина массива name_start: "<< strlen(name_start) << endl;
	cout << "Длина массива name_start: "<< strlen(name_end) << endl;
	
	cout << "Обэднанi два рядка name_start i name_end: "<< strcat(name_start, name_end) << endl;
	
	cout << "Iз name_end взяли три символи та додали их до name_start: "<< strncat(name_start, name_end, 3) << endl;
	
	cout << "Порiвнюэ рядок name_start i name_end: " << strcmp(name_start, name_end) << endl;
	return 0;
}
