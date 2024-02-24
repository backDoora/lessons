#include <iostream>

#include <windows.h>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;
    int f_perimeter;
    int f_square;
public:
    void input();
    void output();
    void perimeter();
    void square();
};

void Rectangle::input()
{
    cout << "Введите длину:" << endl; cin >> length;
    cout << "Введите ширину" << endl; cin >> width;
};

void Rectangle::perimeter()
{
    f_perimeter = length + length + width + width;
};


void Rectangle::square()
{
    f_square = length * width;
};

void Rectangle::output()
{
    cout << "Периметр = " << f_perimeter << endl;
    cout << "Площадь = " << f_square << endl;
};

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    class Rectangle kvadratik;
    kvadratik.input();
    kvadratik.perimeter();
    kvadratik.square();
    kvadratik.output();

    return 0;
};
