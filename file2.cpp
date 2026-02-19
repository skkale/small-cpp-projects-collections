#include <iostream>

using namespace std;

class User
{ public:
    int id;
    string password;
    string login;
};


void PrintInfo(User user)
{
    cout << user.login << endl;
    cout << user.password << endl;
    cout << user.id << endl;
}

int main()
{
    int id = 0;
    string password = "no data";
    string login = "no data";
    User Ivan;
    Ivan.id = id;
    Ivan.login = login;
    Ivan.password = password;
    cout << "Enter id,password,login(For User Petro): ";
    cin >> id >> password >> login;
    User Petro{id,login,password};

    cout << "Inforamtion about users\n";
    PrintInfo(Ivan);
    cout << "\n";
    PrintInfo(Petro);


}
