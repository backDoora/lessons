#include <iostream>
#include <windows.h>
using namespace std;

class Employee
{
private:
    string name;
    string id;
    string money;
public:
    void input();
    void output();
};

void Employee::input()
{
    cout << "Введите имя сотрудника: " << endl; cin >> name; cout << endl;
    cout << "Введите индефикатор сотрудника: " << endl; cin >> id; cout << endl;
    cout << "Введите зарплату сотрудника на основе его эффективности: "; cout << endl; cin >> money; cout << endl;
};

void Employee::output()
{
      cout << "Имя сотрудника: " << name << endl;
      cout << "Зарплата сотрудника:" << money << endl;
};

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    Employee rabotnichek;
    rabotnichek.input();
    rabotnichek.output();
    return 0;
};
