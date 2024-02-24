#include <iostream>
#include <windows.h>
using namespace std;

class BankAccount
{
private:
    int id = 666;
    int money = 10000;
    int usrInput;
    int usrChoice;
public:
    void input();
    void moneyUp();
    void moneyDown();
};

void BankAccount::input()
{
    cout << "Ваш баланс:" << money << endl; cout << "Выберите действие:" << endl << "1.Снять деньги со счёта" << endl << "2.Внести деньги на счёт" << endl; cin >> usrChoice;
    if(usrChoice == 1)
        BankAccount::moneyUp();
    if(usrChoice == 2)
        BankAccount::moneyDown();
};

void BankAccount::moneyUp()
{
    cout << "Укажите ссуму снятия: " << endl; cin >> usrInput;
    cout << "Вы сняли " << usrInput << endl; cout << "Ваш баланс: " << money - usrInput;
}
void BankAccount::moneyDown()
{
    cout << "Укажите ссуму пополнения: " << endl; cin >> usrInput;
    cout << "Вы пополнили баланс на сумму: " << endl; cout << "Ваш баланс: " << money + usrInput;
};

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    BankAccount denujki;
    denujki.input();

    return 0;
};
