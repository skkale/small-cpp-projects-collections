#include <iostream>

using namespace std;

class Car{
private:
    string marka = "Славута";
    int year = 2000;
public:
//    void setMarka(string m){
//        marka = m;
//    }
//    string getMarka(){
//     return marka;
//    }
//    void setYear(int y){
//        year = y;
//    }
//    string getYear(){
//        return year;
//    }
    Car(){
    marka = "undefined";
    year = 0000;
    }

    Car(string m){
    marka = m;
    }

    Car(int y){
    year = y;
    }

    Car(string m, int y){
    marka = m;
    year = y;
    }

    void print(){
    cout << "Марка - " << marka << " Рік - " << year << endl;
    }

};

int main(){
    system ("chcp 1251 > null");

    Car car1;
    Car car2("Toyota");
    Car car3(2005);
    Car car4("Nissan",2007);

    car1.print();

}
