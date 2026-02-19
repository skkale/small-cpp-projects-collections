#include <iostream>
using namespace std;

void EnterMass(int A[], int n)
{
	cout<<"VVedit` Element Masuva"<<endl;
	for(int i = 0; i<n;i++)
	{
		cin>>A[i];
	}
}

void PrintMass(int A[], int n)
{
	cout<<"Massuv: \n";
	for(int i=0; i<n; i++)
	{
		cout<<A[i]<<endl;
	}
}
int MaxElemMass(int A[], int n)
{
	int MaxElem=A[0];
	for(int i=1; i=n;i++)
	{
		if(A[i]>MaxElem) MaxElem=A[i];
	}
}
int main()
{
	int B[4];
	EnterMass(B, 4);
	PrintMass(B, 4);
	MaxElemMass(B,4);
	cout<<"Max Element Massuvy= "<<MaxElemMass;
	return 0;
}

