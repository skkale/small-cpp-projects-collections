#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
double d = 1.321e9;
int n = 1024;
cout<<"d= "<<d<<'\n';
cout<<"n= "<<n<<'\n';

cout.unsetf(ios::dec);
cout.setf(ios::hex	|	ios::uppercase	|	ios::showbase);
cout.setf(ios::showpos);
cout<<"d= "<<d<<'\n';
cout<<"0x n= "<<n<<'\n';

}
