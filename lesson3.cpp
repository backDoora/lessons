#include <iostream>
#include <windows.h>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    void input();
    void output();
};


void Person::input()
{
    cout << "Введите имя: "; cin >> name; cout << endl;
    cout << "Введите возраст: "; cin >> age; cout << endl;
    cout << "Введите страну: "; cin >> country; cout << endl;
}

void Person::output()
{
    cout << "Имя: "; cout << name << endl;
    cout << "Возраст: "; cout << age << endl;
    cout << "Страна: "; cout << country << endl;
};

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    Person dude;
    dude.input();
    dude.output();

    return 0;
};
