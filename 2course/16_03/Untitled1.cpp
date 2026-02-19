#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
int a = 3;
int b = 4;
int c = 5;
int &d = b;
a = b = c;
cout << a << b <<a << d << endl;
return 0;
}
