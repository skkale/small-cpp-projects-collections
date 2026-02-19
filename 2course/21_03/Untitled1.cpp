#include <iostream>
using namespace std;
int main()
{
	char a[7][7];
	int i, j;
	for(i=0; i<7;i++)
	{
		for(j=0; j<7;j++)
		{
			if(i==j) a[i][j]='*';
			else
				if(i==7-j-1) a[i][j]='*';
				else
					a[i][j]=' ';			
		}
	for(i=0;i<7;j++)
	{
		for(j=0;j<7;j++)
		{
			cout<<a[i][j];
		}
		
	}
	}
}
