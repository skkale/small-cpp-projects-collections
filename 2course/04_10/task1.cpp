#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a,b,c;
	cout << "Write number (2 symbols) : ";
	cin >> a;
	c=a/10;
	b=fmod(a,10); // b=a%10;
	cout << "first(b) = " << c << " second(c) = " << b << endl ;
	cout << "b*c=" << b*c << endl;
	cout << "b+c=" << b+c;
	
}
