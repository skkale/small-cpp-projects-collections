#include <iostream>

using namespace std;

class Date{
private:
    int year;
    int month;
    int day;
public:
    void setYear(int y){
        year = y;
    }
    int getYear(){
        return year;
    };

    void setMonth(int m){
        month = m;
    }
    int getMonth(){
        return month;
    }

    void setDay(int d){
        day = d;
    }
    int getDay(){
        return day;
    }

    void setDate(int y, int m, int d){
        year = y;
        month = m;
        day = d;
    }
    void printDate();
};

    void Date::printDate(){
    cout << year << "." << month << "." << day;
    }


int main(){
    Date date1;
    Date date2;
    Date date3;
    date1.setDate(2006,1,9);
    //date1.setYear(2006);
    //date1.setMonth(1);
    //date1.setDay(9);
    date2.setDate(2001,9,11);
    date3.setDate(2003,8,25);

    //date1.printDate(); cout << endl;

    int n = 3;

    Date d[n];
    d[0].setDate(2004,8,9);
    d[1].setDate(2024,9,25);
    d[2].setDate(2023,7,23);

    Date temp = d[0];

    if(d[0].getYear() > d[1].getYear() && d[0].getMonth() && d[1].getMonth() && d[0].getDay()>d[1].getDay()){
        temp = d[0];
    }else{
        temp = d[1];
    }


    if(temp.getYear() > d[2].getYear() && temp.getMonth() && d[2].getMonth() && temp.getDay()>d[2].getDay()){
        temp.printDate();
    }else{
        d[2].printDate();
    }



    //d[0].printDate();
    //cout << date1.getYear() << "." << date1.getMonth() << "." << date1.getDay();


}
