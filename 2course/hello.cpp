#include <iostream>
using namespace std;

int main()
{
	char name[10];
	cout<<"What is your name? "<<endl;
	cin>>name;
	cout<<"Hello, " << name << "!"<<endl;
	cout<<"How old are you? "<<endl;
	int age;
	cin>>age;
	cout<<"Cool! You already have " << age << " years!"<<endl;
}
