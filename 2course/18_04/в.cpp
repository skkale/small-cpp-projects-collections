#include <iostream>

using namespace std;

void show_ryad(char ryad[]);
int str_len(char ryad[]);


int main(){
	setlocale(LC_ALL, "");
	
	char tit[32] = "Привет, С++!";
	show_ryad(tit);	
	char les[] = ("Символьнi рядки");
	show_ryad(les);
	char text[15];
	cout << "Введiть текст: ";
	cin >> text;
	show_ryad(text);
	cout << "Довжина рядка tit = " << str_len(tit) << endl;
	cout << "Довжина рядка les = " << str_len(les) << endl;
	cout << "Довжина рядка text = " << str_len(text) << endl;
	
	//Заповнити массив латинскьими літерами
	char abc[27];
	char let; int i;
	for(let = 'a', i = 0; let <= 'z'; let++, i++){
		abc[i] = let;
	}
	abc[i] = '\0';
	cout<<"Abc: " << abc << endl;
	cout << "Массив Abc  зворотньому порядку: ";
	for(i = 26; i >= 0; i--) cout << abc[i];
	
	cout <<"\n Друге слово рядка tit: " << endl;
	i = 0;
	while(tit[i]!=' ' && tit[i]!='\0'){
		i++;
	}
	int p = i;
	for(i = p + 1; tit[i]!= ' ' && tit[i] !='!' && tit[i]!='?' && tit[i]!= '.' && tit[i]!=',';i++){
		cout << tit[i];
	}
	
	return 0;	
}

void show_ryad(char ryad[]){
	
	cout << ryad << endl;
	
}
int str_len(char ryad[]){
	int i;
	for(i=0; ryad[i]!='\0'; i++);
	return (i);
}
