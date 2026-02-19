#include <iostream>

using namespace std;

class Date{
private:
    int year = 0;
    int month = 0;
    int *day;

public:
//    Date(){
//        month = -1;
//        year = -1;
//        cout << "construc without param\n";
//    }
//    Date(int d) {
//        day = d;
//        month = m;
//        year = y;
//    }
    Date(int d, int m, int y){
                day = new int(10);
        month = m;
        year = y;
        cout << "construc with param\n";
    }

    ~Date(){
        cout << "\ndestructor " << year << endl;
        delete day;
    }

    void PrintDate(){
    cout << *day << "." << month << "." << year << endl;
    }
};

int main(){
   // Date d;
    {
        Date d2(3,4,2005);
   d2.PrintDate();
    }
   // Date d3;

   cout << "end\n";


    return 0;
}


