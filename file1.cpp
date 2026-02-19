#include <iostream>
#include <windows.h>

using namespace std;

int maxFunc(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}

int minFunc(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(){
    system("chcp 1251>null");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_CTYPE,"Ukr");

    int a,b,c;

    cout << "ВВедіть a,b,c: \n";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "max = " << maxFunc(maxFunc(a,b),c) << endl;
    cout << "min = " << minFunc(minFunc(a,b),c) << endl;
}


