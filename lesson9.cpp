//Напишите программу на C++ для реализации класса Student, который имеет частные переменные-члены для имени, класса, номера билета и оценок.
// Включите функции-члены для расчета оценки на основе оценок и отображения информации об учащемся.

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
const int N = 5;


class Student
{
private:
    string name;
    string type;
    int t_number[N];
    int mark[N];
    int s_mark;
    float f_mark;
public:
    void input();
    void finalMk();
    void output();
};

void Student::input()
{
    cout << "Введите имя студента: " << endl; cin >> name;
    cout << "Введите класс студента: " << endl; cin >> type;
    cout << "Введите номера билетов: " << endl;
    for (int i = 0; i < N; i++) cin >> t_number[i];
    cout << "Введите оценки за билет: " << endl;
    for (int i = 0; i < N; i++) cin >> mark[i];
};

void Student::finalMk() //среднее - результат деления суммы членов массива на их кол-во
{
    for (int i = 0; i < N; i++) s_mark += mark[i];
    f_mark = s_mark / N;
};



void Student::output()
{
    cout << "Имя студента: " << name << endl;
    cout << "Класс студента: " << type << endl;
    for (int i = 0; i < N; i++) cout << "Оценка за билет №" << t_number[i] << ": "  << mark[i] << endl;
    cout << "Финальная оценка студента: " << f_mark;

}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    Student dude;
    dude.input();
    dude.finalMk();
    dude.output();
    return 0;
};