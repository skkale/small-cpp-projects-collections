#include <iostream>
using namespace std;
void Vvid_array(int A[], int n);
void Vyvid_array(int A[], int n);
int Max_elem_array(int A[], int n);

int main(){
	setlocale(LC_ALL, "");
	int B[4], C[6];
	//Для массиву B
	cout << "Массив B\n";
	Vvid_array(B, 4);
	Vyvid_array(B, 4);
	cout << "Максимальный элемент массива B: " << Max_elem_array(B, 4) << endl;
	//Для массиву C
	cout << "Массив C\n";
	Vvid_array(C, 6);
	Vyvid_array(C, 4);
	cout <<"Максимальный элемент массива C: \n" << Max_elem_array(C, 4);
	return 0;
}
void Vvid_array(int A[], int n){
	cout<<"Введите элементы массива: \n";
	for(int i = 0; i < n;i++){
		cin>>A[i];
	}
}
void Vyvid_array(int A[], int n){
	cout<<"Массив: \n";
	for(int i = 0; i < n;i++){
		cout << A[i] << "  ";
	}
}
int Max_elem_array(int A[], int n){
	cout<<"Максимальный элемент массива: \n";
	int max = A[0];
	for(int i = 0; i < n;i++){
		if (A[i]>max) max=A[i];
	}
	return max;
}		

