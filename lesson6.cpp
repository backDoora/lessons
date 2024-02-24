// Напишите программу на C++ для создания класса Triangle, который имеет закрытые переменные-члены для длин трех его сторон.
// Реализуйте функции-члены, чтобы определить, является ли треугольник равносторонним, равнобедренным или разносторонним

#include <iostream>
#include <windows.h>
using namespace std;

class Triangle
{
private:
    int side1;
    int side2;
    int side3;

public:
    void input();
    void treugolnichek_check();
};

void Triangle::input()
{
  cout << "Введите первую сторону треугольника:" << endl; cin >> side1;
  cout << "Введите вторую сторону треугольника:" << endl; cin >> side2;
  cout << "Введите третью сторону треугольника:" << endl; cin >> side3;
  cout << endl;
};

void Triangle::treugolnichek_check()
{
    if ((side3 == side2) && (side3 == side1))
        cout << "Треугольник является равностороним";
    else
    if ((side1 == side2) || (side2 == side3) || (side1 == side3))
        cout << "Треугольник равнобедренный";
    else
        cout << "Треугольник является разносторонним";
};

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    Triangle treugolnichek;
    treugolnichek.input();
    treugolnichek.treugolnichek_check();
    return 0;
};
