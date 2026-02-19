// Написати програму для обміну значень двох змінних
#include <iostream>

using namespace std;

int main()
{

int a,b,x;

a=5;
x=a;
b=-1;
cout <<"Before: b=" << b <<" a="<< a <<" x="<< x << endl;
a=b;
b=x;

cout <<"After: b=" << b <<" a="<< a <<" x="<< x;
}
