#include <iostream>

using namespace std;

class Student
{
private:
    string lastName;
    string firstName;
    int age;
    int kurs;
public:
    void setKurs(int k){
        kurs = k;
    }
    int getKurs(){
        return kurs;
    }

    void setAge(int a){
    age = a;
    }
    int getAge(){
        return age;
    }

    void setFirstName(string name){
        firstName = name;
    }
    string getFirstName(){
        return firstName;
    }

    void setLastName(string surname){
    lastName = surname;
    }
    string getLastName(){
        return lastName;
    }

    void printAllinfo();
   // {
   // cout << "Вся інформація про студента: \n";
   // cout << getKurs() << endl;
   // cout << getFirstName() << endl;
   // cout << getLastName() << endl;
   // cout << getAge() << endl;
   // }
};

    void Student::printAllinfo(){
    cout << "Вся інформація про студента: \n";
    cout << "Ім'я - " << firstName << endl;
    cout << "Фамілія - "<< lastName << endl;
    cout << "Вік - "<< age << endl;
    cout << "Курс - "<< kurs << endl;
    }


int main()
{
    system ("chcp 1251 > null");
    Student st1;
    st1.setKurs(3);
    st1.setFirstName("Petro");
    st1.setLastName("Petrov");
    st1.setAge(17);
    st1.printAllinfo();

    return 0;
}

