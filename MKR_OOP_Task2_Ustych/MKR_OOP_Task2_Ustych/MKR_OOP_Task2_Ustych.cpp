#include <iostream>
using namespace std;

int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "");

    int number;

    cout << "Введіть число: ";
    cin >> number;

    try
    {
        if (number < 0)
        {
            throw "Помилка: введено від’ємне число!";
        }

        cout << "Квадрат числа: " << number * number << endl;
    }
    catch (const char* message)
    {
        cout << message << endl;
    }

    return 0;
}