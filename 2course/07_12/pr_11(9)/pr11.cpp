#include <iostream>

using namespace std;

int main(){
	string answer;
	cout << "Are you doing your morning warm-up?" << endl;
	cout << "tak/ni - ";
	cin >> answer;
	answer=="tak" || answer=="так"||answer=="yes"?cout<<"Good, phys-hello":cout<<"Bad bro, you need to training more!";
}


