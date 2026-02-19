#include <iostream>
#include <cmath>

using namespace std;

int limitCheck(int n){
        if((1<=n && n<=100) == false){
        cout << "Limit is 1<=n<=100. Program will be closed";
        return 0;
    }
}

int main(){
    int n;
    int counter = 0;
    cin >> n;
    if(limitCheck(n)==false) return 0;

    int a[n];

    for(int i = 0; i<n; i++){
        cin >> a[i];

        if( (1<=a[i] && a[i]<=pow(10,9)) == false){
        cout << "Limit is 1<=a<=10^9";
        return 0;
        }

        if(a[i-1]<a[i]){
            counter++;
        }
    }
    cout << counter;


}
