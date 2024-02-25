#include <iostream>
#include <windows.h>

using namespace std;

class Circle
{
private:

    int r;
    int r2;
    int s;
    int c;

public:
    void input();
    void square();
    void circle();
    void output();
};

void Circle::input()
{
    cout << "Введите радиус круга:" << endl; cin >> r;
}

void Circle::square()
{
    r2 = r * r;
    s = 3.14 * r2;
};

void Circle::circle()
{
    double p_2 = 3.14 * 3.14;
    c = p_2 * r;
 };

void Circle::output()
{
  cout << "Площадь = " << s << endl;
  cout << "Окружность = " << r << endl;
};

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    Circle krujok;
    krujok.input();
    krujok.square();
    krujok.circle();
    krujok.output();

    return 0;
};
