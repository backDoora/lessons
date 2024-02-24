//Напишите программу на C++ для реализации класса Date, который имеет закрытые переменные-члены для дня, месяца и года.
//Включите функции-члены для установки и получения этих переменных, а также для проверки допустимости даты.
#include <iostream>
#include <windows.h>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
public:
    void input();
    void date_check();
    void output();
};

void Date::input()
{
  cout << "Введите день:" << endl; cin >> day;
  cout << "Введите месяц:" << endl; cin >>month;
  cout << "Введите год:" << endl; cin >> year;
};

void Date::output()
{
    cout << "Введённая дата:" << endl << day << "." << month << "." << year;
};

void Date::date_check()
{
    if(day >= 32 || month >= 12)
        cout << "Ошибка! Вы неверно ввели дату";
    else
        Date::output();

};

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    Date calendar;
    calendar.input();
    calendar.date_check();
    return 0;
}
