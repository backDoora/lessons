#include <iostream>
#include <windows.h>
using namespace std;

class Car
{
private:
    string company;
    string model;
    int year;
public:
    void input();
    void output();
};

void Car::input()  
{
    cout << "Введите копанию-производителя: " << endl; cin >> company; cout << endl;
    cout << "Введите модель автомобиля: " << endl; cin >> model; cout << endl;
    cout << "Введите год автомобиля: " << endl; cin >> year; cout << endl;
};

void Car::output()
{
    cout << "Компания-производитель: " << company << endl;
    cout << "Модель автомобиля: "  << model << endl;
    cout << "Год производства автомобиля: " << year << endl;

};


int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    Car bibika;

    bibika.input();
    bibika.output();

    return 0;
};
